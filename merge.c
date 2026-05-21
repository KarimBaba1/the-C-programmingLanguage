#include <stdio.h>
#include <cs50.h>


int main(void){

    int arr[] = {6, 3, 4, 1, 5, 2, 7, 0};
    int length = sizeof(arr) / sizeof(arr[0]);
    int middle = length/2;
    
}

void split(int arr[], int start, int end){
    
    
    if(start < end){
    
    int middle = start + (end - start) / 2; 
    split(arr, start, middle);
    split(arr, middle + 1, end);
    
    merge(arr, start, middle, end);

    }

}

void merge(int arr[], int start, int middle, int end){

    int left[]; 
    int right[]; 
    int counter = 0;

   for (int i = start; i < middle; i++) {
        left[i] = arr[i];
   }

   for (int i = middle + 1; i < end; i++) {
        right[i] = arr[i];
   }

for (int i = start; i < end ; i++) {
        if(left[i] > right[i]){
            //do something 
        }else{
            //leave it alone 
        }
}






}





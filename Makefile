CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -Werror -O0

# Include third party library
LDLIBS = -lcs50

# This is a "Pattern Rule"
# % acts as a wildcard (matches any name)
%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char * i_to_a(int n)
{
    char *s = NULL;
    
    int num = n;
    int len = (n <= 0) ? 1 : 0; // Include space for '-' and '0' character
    while (num != 0) {
        len++;
        num /= 10;
    }
    
    s = (char *)malloc(len + 1);
    if (s == NULL) {
        return NULL;
    }
    
    s[len] = '\0';
    
    // Handle negative numbers
    int is_negative = 0;
    if (n < 0) {
        is_negative = 1;
        n = -n; // Make n positive
    }
    
    for (int i = len - 1; i >= 0; i--) {
        s[i] = (n % 10) + '0';
        n /= 10;
        if (is_negative && i == 1) {
            s[0] = '-';
            break;
        }
    }
    
    return s;
}

int main()
{
    printf("%s\n", i_to_a(-12345));
    printf("%s\n", i_to_a(0));
    printf("%s\n", i_to_a(12345));
        
    return 0;
}

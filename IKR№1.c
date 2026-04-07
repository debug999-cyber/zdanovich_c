#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    char str[n];
    
    printf("Enter string: ");
    scanf("%s", str);
    
    int i = 0;
    while (str[i] != '\0')
    {
        char current_char = str[i];
        int count = 1;
        
        while (str[i + 1] == current_char)
        {
            count = count + 1;
            i = i + 1;
        }
        
        printf("%c%d", current_char, count);
        i = i + 1;
    }
    
    printf("\n");
    
    return 0;
}
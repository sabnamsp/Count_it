#include <stdio.h>
#include <ctype.h>

int main()
   {
    char s[1001];
    fgets(s, 1001, stdin); 
    int i = 0, capital = 0, small = 0, spaces = 0;
    while(s[i] != '\0') 
    {
        if(isupper(s[i])) 
        { 
            capital++;
        }
        else if(islower(s[i]))
        { 
            small++;
        }
        else if(s[i] == ' ')
        { 
            spaces++;
        }
        i++;
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", capital, small, spaces);
    return 0;
}


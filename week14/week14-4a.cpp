//week14-4a

#include <stdio.h>

int main()
{
    char s[10];
    scanf("%s", s);


    if (s[0] == s[3] && s[1] == s[2]) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

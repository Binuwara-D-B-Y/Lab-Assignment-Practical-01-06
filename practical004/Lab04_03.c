// EXERCISE 03 [IT23184558 - BINUWARA D B Y]
#include <stdio.h>
int main() {
    int AGE;
    char sts;

    printf("Enter the age:");
    scanf("%d", &AGE);

    if (AGE>59) {
        printf("Enter status 'W' if working or any other key if not working:");
        scanf("&c",&sts);
        if (sts == 'W')
            printf("working senior");
        else
            printf("Retired Senior");
    }
    else if (AGE>20)
        printf("Adult");
    else if (AGE>12)
        printf("Teen");
    else
        printf("Child");

    return 0;
}
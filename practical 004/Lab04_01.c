// EXERCISE 01 [IT23184558 - BINUWARA D B Y]
#include <stdio.h>
int main() {
    float GPA;

    printf("Enter the GPA: ");
    scanf("%f",&GPA);

    // 0<=GPA<=4

    if (4<GPA || GPA<0)
        printf("INcorrect GPA, RE-enter\n");
    else if (GPA<=0.99)
        printf("Failed Semester-registration suspended\n");
    else if (GPA<=1.99 && GPA>=1.00)
        printf("On probation for the next semester\n");
    else if (GPA<=2.99 && GPA>=2.00)
        printf(" ");
    else if (GPA>=3.00 && GPA<=3.49)
        printf("Dean's list for semester\n");
    else
        printf("Highest Honors for semester\n");

    return 0;
}
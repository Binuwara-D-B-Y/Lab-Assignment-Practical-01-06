#include<stdio.h>
#include<math.h>

int b,c,alpha;
float PI = 3.1415;
float calc(){
    float a;
    a = sqrt(pow(b,2) + pow(c,2)- 2 * b * c * cos(alpha * PI /180.0));
    return a;
}

int disp(){
    printf("Enter the value for length b :");
    scanf("%d",&b);
    printf("Enter the value for length c :");
    scanf("%d",&c);
    printf("Enter the value for alpha angle :");
    scanf("%d",&alpha);
}

int main(){
    disp();
    printf("The length of the 'a' line is, %f \n",calc());
    return 0;
}
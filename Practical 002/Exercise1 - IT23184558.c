#include<stdio.h>

    // MADE BY D B YESEN BINUWARA [ IT23184558 ]

    #define g 9.8 // g = Gravitational Constant
    #define Mega 1000000
    #define Efficiency 9.80

int main() {

    float height,flowrate,mass,work,power;
   
    printf("Enter the height of the dam (Meters):");
    scanf("%f",&height);

    printf("\nEnter the flow rate (Cubic Meters Per Second):");
    scanf("%f",&flowrate);
    
    mass = flowrate * 1000;
    work = mass* g * height;
    power = (work * Efficiency)/Mega;
    
    printf("\nThe power generated is %.2fMW",power);
    
    return 0;
}

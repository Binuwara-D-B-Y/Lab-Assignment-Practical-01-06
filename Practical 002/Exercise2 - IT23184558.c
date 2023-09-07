#include<stdio.h>

int main() {

    // MADE BY D B YESEN BINUWARA [ IT23184558 ]

    float takeoffspeed,speed,distance;
    double time,accn;

    printf("Enter the takeoff speed in KM/H :");
    scanf("%f",&takeoffspeed);

    printf("\nEnter the Distance traveled (Meters) :");
    scanf("%f",&distance);

    speed = (takeoffspeed*1000)/3600;
    time = (2*distance)/speed;
    accn = speed/time;

    printf("\nThe Acceleration is %f ms^(-2)",accn);
    printf("\nThe Time is %f seconds",time);

    return 0;
}   



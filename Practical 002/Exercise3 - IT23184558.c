#include<stdio.h>

// MADE BY D B YESEN BINUWARA [ IT23184558 ]

int main() {
    
    float infused_vol, infused_time, infused_rate;
    
    printf("Enter the volume to be infused (ml):");
    scanf("%f",&infused_vol);
    
    printf("\nEnter the time taken to infuse (minutes):");
    scanf("%f",&infused_time);

    infused_rate = (infused_vol)/(infused_time/60);

    printf("VTBI : %fml", infused_vol);
    ptrintf("\nRate : %fml/hr", infused_rate);

    return 0;

}

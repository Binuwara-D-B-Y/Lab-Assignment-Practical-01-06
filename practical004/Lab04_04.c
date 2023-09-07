// EXERCISE 04 [IT23184558 - BINUWARA D B Y]
#include <stdio.h>
int main() {
    float wt_lb, ht_in, BMI;

printf("Enter the weight in pounds: ");
scanf("%f", &wt_lb);

printf("Enter the height in inches: ");
scanf("%f", &ht_in);

BMI = (703 * wt_lb) / (ht_in^2);

printf("Your BMI is: %f \n", BMI);

 if (BMI < 18.5)
    printf("Underweight");
 else if (BMI > 18.5 && BMI < 24.9)
     printf("Normal");
 else if (BMI > 25.0 && BMI < 29.9)
    printf("Overweight");
 else
    printf("Obese");

return 0;
}
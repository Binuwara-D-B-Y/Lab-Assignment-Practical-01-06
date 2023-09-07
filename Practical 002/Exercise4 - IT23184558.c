#include<stdio.h>

// MADE BY D B YESEN BINUWARA [ IT23184558 ]

int main() {

    float population, NoOfToilets, oldLitresPerDay, newLitresPerDay, litresSaved, installationCost,pricePerLitre, costSaved;

    printf("Enter the population: ");
    scanf("%f", &population);

    printf("\nEnter price of a water litre in Rs: ");
    scanf("%f", &pricePerLitre);

    NoOfToilets = population / 3;
    installationCost = NoOfToilets * 150;
    oldLitresPerDay = 15 * 14 * NoOfToilets;
    newLitresPerDay = 2 * 14 * NoOfToilets;
    litresSaved = oldLitresPerDay - newLitresPerDay;

    printf("\nLitres saved per day: %.2f litres\n", litresSaved);

    costSaved = (oldLitresPerDay * pricePerLitre) - (newLitresPerDay - pricePerLitre);

    printf("\nCost saved per day: Rs %.2f\n", costSaved);

    return 0;

}

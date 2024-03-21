//program for calculating simple interest
#include <stdio.h>

int main() {
    float principle, rate, time, simple_interest;

    // Input principle amount, rate of interest, and time
    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter rate of interest (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (principle * rate * time) / 100;

    // Display the simple interest
    printf("Simple Interest = %.2f\n", simple_interest);

    return 0;
}

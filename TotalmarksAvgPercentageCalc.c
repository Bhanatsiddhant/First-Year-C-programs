#include <stdio.h>

int main() {
    float physics, chemistry, maths, biology;
    float total, average, percentage;

    printf("Enter marks obtained in Physics (out of 100): ");
    scanf("%f", &physics);

    printf("Enter marks obtained in Chemistry (out of 100): ");
    scanf("%f", &chemistry);

    printf("Enter marks obtained in Maths (out of 100): ");
    scanf("%f", &maths);

    printf("Enter marks obtained in Biology (out of 100): ");
    scanf("%f", &biology);

    if(physics < 0 || physics > 100 || chemistry < 0 || chemistry > 100 ||
       maths < 0 || maths > 100 || biology < 0 || biology > 100) {
        printf("Error: Marks should be between 0 and 100\n");
        return 1;
    }

    total = physics + chemistry + maths + biology;
    average = total / 4.0;
    percentage = (total / 400.0) * 100;

    printf("\n----- Results -----\n");
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
#include <stdio.h>

int main() {
    int age;
    char eyesight, written, driving, medical;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("Enter your eyesight exam grade (P = Pass, F = Fail): ");
        scanf(" %c", &eyesight);

        if (eyesight == 'P') {
            printf("Enter your written test grade (P = Pass, F = Fail): ");
            scanf(" %c", &written);

            if (written == 'P') {
                printf("Enter your driving test result (P = Pass, F = Fail): ");
                scanf(" %c", &driving);

                if (driving == 'P' && age <= 60) {
                    printf("🎊 Congratulations! You are eligible for the license.\n");
                }
                else if (driving == 'P' && age > 60) {
                    printf("Do you have a medical fitness certificate? (Y = Yes, N = No): ");
                    scanf(" %c", &medical);

                    if (medical == 'Y') {
                        printf("🎊 Congratulations! You are eligible for the license.\n");
                    } else {
                        printf("You are not eligible.\n");
                    }
                }
                else {
                    printf("You are not eligible.\n");
                }
            }
            else {
                printf("You need to retake the written exam.\n");
            }
        }
        else {
            printf("You need a prescription for glasses.\n");
        }
    }
    else {
        printf("You are ineligible due to age.\n");
    }

    return 0;
}

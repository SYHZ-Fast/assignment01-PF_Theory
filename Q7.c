#include <stdio.h>

int main (){
    int num;
    printf("Enter a number, from 1...7, to get its equivalent weekday =\t");
    scanf("%d", &num);
    switch(num){
        case 1:
            printf("The number %d = Monday", num);
            break;
        case 2:
            printf("The number %d = Tuesday", num);
            break;
        case 3:
            printf("The number %d = Wednesday",num);
            break;
        case 4: 
            printf("The number %d = Thursday", num);
            break;
        case 5:
            printf("The number %d = Friday", num);
            break;
        case 6:
            printf("The number %d = Saturday", num);
            break;
        case 7:
            printf("The number %d = Sunday", num);
            break;
        default: 
            printf("Invalid number.");
    }
    
    return 0;
}
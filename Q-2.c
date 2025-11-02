#include <stdio.h>

int main(){
    float x ;
    float y;

    printf("Enter your x-coordinate = ");
    scanf("%f", &x);
    printf("Enter your y-coordinate = ");
    scanf("%f", &y);

    if(x> 0 && y > 0){
        printf("The point is in Quadrant I. ");
    }
    else if(x< 0 && y > 0){
        printf("The point is in Quadrant II. ");
    }
    else if(x< 0 && y < 0){
        printf("The point is in Quadrant III. ");
    }
    else if(x> 0 && y < 0){
        printf("The point is in Quadrant IV. ");
    }
    else if( x != 0.0 && y == 0){
        printf("The point is on x-axis");
    }
    else if(y != 0.00 && x == 0){
        printf("The point is on y-axis");
    }
    else{
        printf("The point is origin.");
    }

    return 0;
}
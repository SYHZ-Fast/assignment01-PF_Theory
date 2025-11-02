// Bank Fraud Alert 
#include <stdio.h>
#include <stdbool.h>
int main(){
    int Amount,Transactions,temp;
    bool Answer;
    int dLimit = 50000;
    int tLimit = 3;
    bool flag = false;
    
    printf("Enter your transaction amount: ");
    scanf("%d",&Amount);
    printf("Enter number of Transactions done in an hour: ");
    scanf("%d",&Transactions);
    printf("Is this a Foreign transaction (1 for Yes and 0 for No): ");
    scanf("%d",&temp);
    Answer = (temp != 0);

    if (Amount > dLimit){
        flag = true;
    }
    if (Transactions > tLimit){
        flag = true;
    }
    if (Answer){
        flag = true;
    }
    
    if(flag){
        printf("Fraud Alert ⚠️");
    }
    else{
        printf("No Fraud detected 🎊");
    }

    return 1 ;

}
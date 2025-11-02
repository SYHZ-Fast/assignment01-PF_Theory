#include <stdio.h>

int main(){
    int card1, card2, card3, card4, card5;
    int house;
    printf("Enter card(Ace = 1, King = 13, Queen = 12 and Jack = 11 : ");
    scanf("%d", &card1);
    printf("Enter card(Ace = 1, King = 13, Queen = 12 and Jack = 11 : ");
    scanf("%d", &card2);
    printf("Enter card(Ace = 1, King = 13, Queen = 12 and Jack = 11 : ");
    scanf("%d", &card3);
    printf("Enter card(Ace = 1, King = 13, Queen = 12 and Jack = 11 : ");
    scanf("%d", &card4);
    printf("Enter card(Ace = 1, King = 13, Queen = 12 and Jack = 11 : ");
    scanf("%d", &card5);

    if (card1 == card2){
        if (card2 == card3){
            if (card4 == card5){
                house = 1;
            }
        }
        else if (card2 == card4)
        {
            if(card3 == card5){
                house = 1;
            }
        }
        
        else if (card2 == card5)
        {
            if(card3 == card4){
                house = 1;
            }
        }
        
    }
    else if (card1 == card3){
        if (card3 == card4)
        {
            if(card2 == card5){
                house = 1;
            }
        }
        
        else if (card3 == card5)
        {
            if(card2 == card4){
                house = 1;
            }
        }
        
    }
    else if (card1 == card4){
        if (card2 == card4)
        {
            if(card3 == card5){
                house = 1;
            }
        }
        
        else if (card4 == card5)
        {
            if(card2 == card3){
                house = 1;
            }
        }
        
    }
    else if (card1 == card5){
        if(card2 == card3 == card5){
            house = 1;
        }
    }
    else{
        house = 0;
    }

// card2 
    if (card2 == card3){
        if(card3 == card4){
            if(card5 == card1){
                house = 1;
            }
        }
    }
    if (card2 == card4){
        if(card5 == card4){
            if(card3 == card1){
                house = 1;
            }
        }
    }
    if (card2 == card5){
        if(card3 == card4 == card1){
            house = 1;
        }
    }

// card3 
    if (card3 == card4){
        if(card4 == card5){
            if(card2 == card1){
                house = 1;
            }
        }
    }
    if (card3 == card5){
        if(card1 == card4 == card2){
            house = 1;
            
        }
    }

// card4    
    if (card4 == card5){
        if(card3 == card2 == card1){
            house = 1;
        }
    }
 
    
    
    if (house){
        printf("Full House. ");
    }
    else{
        printf("No full House");
    }
}
#include <stdio.h>

int main (){
   int flag = 1;
   int num ;
   int count0 = 0;
   int count1 = 0;
   int count2 = 0;
   int count3 = 0;
   int count4 = 0;
   int count5 = 0;
   int count6 = 0;
   int count7 = 0;
   int count8 = 0;
   int count9 = 0;

   while (flag)
   {
    printf("Enter number:\n ");
    scanf("%d", &num);
    if (num == 0){
        count0 = count0 + 1;
    }
    else if (num == 1){
        count1 = count1 + 1;
    }
    else if (num == 2){
        count2 = count2 + 1;
    }
    else if (num == 3){
        count3 = count3 + 1;
    }
    else if (num == 4){
        count4 = count4 + 1;
    }
    else if (num == 5){
        count5 = count5 + 1;
    }
    else if (num == 6){
        count6 = count6 + 1;
    }
    else if (num == 7){
        count7 = count7 + 1;
    }
    else if (num == 8){
        count8 = count8 + 1;
    }
    else if (num == 9){
        count9 = count9 + 1;
    }
    else if (num < 0 || num > 9){
        flag = 0;
        
    }
    
}
printf("The occurences of %d are : %d\n",0, count0);
printf("The occurences of %d are : %d\n",1, count1);
printf("The occurences of %d are : %d\n",2, count2);
printf("The occurences of %d are : %d\n",3, count3);
printf("The occurences of %d are : %d\n",4, count4);
printf("The occurences of %d are : %d\n",5, count5);
printf("The occurences of %d are : %d\n",6, count6);
printf("The occurences of %d are : %d\n",7, count7);
printf("The occurences of %d are : %d\n",8, count8);
printf("The occurences of %d are : %d\n",9, count9);
   
}
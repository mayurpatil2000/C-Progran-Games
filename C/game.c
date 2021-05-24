#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    int number,guess, Nguess=1;
    srand(time(0));
    number= rand()%100+9;  
    // printf("Random no=%d\n",number);
    do{
        printf("Guess the number between 10 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number plzz!\n");
        }
        else if(guess<number){
            printf("Higher number plzz!\n");
        }
        else
        {
            printf("you guess in %d Attemp\n",Nguess);
        }
        Nguess++;
        
    }
    while (guess != number);
    
}

// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int balance = 1000;
    
    while(1){
    printf("Your current balance: %d\n", balance);
    printf("Please put a bet ");
    fflush(stdout);
    
    int bet;
    scanf("%d",&bet);
    
    if(bet > balance || bet <= 0){
         printf("Invalid bet! Bet must be positive and not exceed your balance.\n");
        continue;
}
    
    
    int guess;
    printf("Guess a number between 1 and 6 (or enter 0 to quit): ");
    fflush(stdout);
    scanf("%d",&guess);
    
    
    if(guess == 0) {
     printf("u choose to quit");
        break;
    }
    
    if(guess < 1 || guess > 6){
       printf("Invalid guess! Please enter a number between 1 and 6.\n");
            continue;
    }
    
        
    int dice = rand()% 6 + 1; // Generate random number between 1 and 6;
    printf("dice is %d\n",dice);
    fflush(stdout);
    
    if(guess != dice){
        balance = balance - bet;
        printf("Sorry, you guessed wrong. Your new balance is %d.\n", balance);
       
}else{
        balance = balance + (bet*3);
        printf("congrats,u guessed correctly,u won");
}

if(balance == 0) {
            printf("You have no more balance left. Game over!\n");
            break;
        }
}    
    return 0;
}
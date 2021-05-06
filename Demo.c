#include <stdio.h>
#include <time.h>

void guessGame();

int main(){
    guessGame();
}

void guessGame(){

    time_t t;
    srand((unsigned) time(&t));
    int randomNum = rand() % 20;
    int choice;
    int guesses = 0;
    int count = 0;
    int remainingCounts = 4;

    while(guesses < 5){
        printf("Enter A Guess Between 1 and 20: ");
        scanf("%d", &choice);

        if(choice == randomNum){
            printf("you Won!!\n");
            printf("With %d Counts\n", count);
            break;
        }else if(choice > randomNum){
            printf("Lower It!!!\nRemaining Try: %d\n\n", remainingCounts);
            guesses++;
            count++;
            remainingCounts--;
        }else if(choice < randomNum){
            printf("Keep it High!!!!\nRemaining Try: %d\n\n", remainingCounts);
            guesses++;
            count++;
            remainingCounts--;
        }else if(choice < 1 && choice > 20){
            printf("Enter A Number Between 1 and 20 ONLY!!!!\nRemaining Try: %d\n\n", remainingCounts);
            guesses++;
            count++;
            remainingCounts--;
        }
    }
    if(guesses >= 5)
        printf("\nSorry, Guesses Have Been Crossed 5 Times\n");
}
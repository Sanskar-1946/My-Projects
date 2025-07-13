#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int guessed_no;
    int no_of_guesses = 0;
    
    do{
        printf("Guess the number\n");
        scanf("%d", &guessed_no);
        if(randomNumber>guessed_no){
            printf("guessed number is lower\n");
        }
        else if(randomNumber<guessed_no){
            printf("guessed number is higher\n");
        }
        else{
            printf("Congrats!! You guessed it right\n");
        }
        no_of_guesses++;
        
    }while (guessed_no != randomNumber);
    
    printf("You guessed the number in %d guessed", no_of_guesses);

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", randomNumber);

    return 0;
}

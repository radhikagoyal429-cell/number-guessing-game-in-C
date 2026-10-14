#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int num;
    int no_of_guesses = 0;
    int guessed;

    srand(time(0));
    num = (rand() % 100) + 1;

    
    printf("Guess a number between 1 to 100\n");
    do{
        printf("Guess the number\n");
        scanf("%d", &guessed);
        if(guessed>num)
        {
            printf("please guess the lower number\n");
        }
        else if(guessed<num)
        {
            printf("please guess the upper number\n");
        }
        else{
            printf("Congratulations! you guessed the number");
        }

        no_of_guesses++;
        } 
        while (guessed!=num);
        printf("\nyou guessed the number in %d guesses", no_of_guesses);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 


int main() {
    int randomNumber;
    int no_of_guess = 0;
    int guessed_no;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 0 and 99
    randomNumber = (rand() % 100) +1;

   // printf("Random number: %d\n", randomNumber);
   do{
    printf("guess the no. (1-100)");
    scanf("%d",&guessed_no);
    if (guessed_no > randomNumber){
      printf("please enter lower no.\n");
    }
    else if (guessed_no < randomNumber){
      printf("please enter higher no.\n");
    }
    else{
      printf("congrats! you guessed the correct no.");
    }
    no_of_guess ++;
   }
   while(guessed_no != randomNumber);
   printf("you guessed the no. in %d no of guesses", no_of_guess);

  return 0;
}
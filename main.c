#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// New Challange
// Rules 
    //Generate number from 0-20
    //After generation, ask user to guess the number; User to only be able to enter number from 0-20, else error.
    //After succesful guess, return user message, too low or too high
    //User wins if they guess the correct number within 5 attemps.
    // Use if statements and while statements

int main() {
        
        int userNumber; // User entered number
        int guessCount = 0; // Number of guesses 
        int remainingGuesses = 5;
        
        time_t t; //Time variable
        srand( (unsigned) time(&t) ); // initialize the random number generator
        int randomNumber =  rand() % 21; // Get random number from 0-20
        
        printf("The name of the game is: Guess the number!\n\n You  have 5 attempts to guess the correct whole number between 0-20\n\n What is your first attempt?\n");
        printf("Remaining guesses: %d\n", remainingGuesses);
 

                 //While loop to check user nuber of guesses //
                while(guessCount<5) {
                            
                            //***  Conditional to verify an integer is being entered   ****//
                            
                            if (scanf("%d", &userNumber) != 1) {      // checks whether scanf successfully reads an integer
                                
                                        printf("Invalid input. Please enter a valid number.\n");
                                        while (getchar() != '\n'); // clear the input buffer
                                        continue;
                            }
                    
                            
                            // Conditional to check if the number entered is between 0 and 20;
        
                            if (userNumber>= 0 && userNumber <=20) {
                                        --remainingGuesses; // Subtract one guess per loop
                                        if(remainingGuesses == 0) { 
                                                    printf("Game over!");
                                                    break;
                                                
                                            }
                
                                        if (userNumber == randomNumber) {
                                
                                                    printf("Correct,  You Win! user number: %d \n My number: %d", userNumber, randomNumber);
                                                    break;
                                        } else {
 
                                                    guessCount++;
                                                    printf("Attempt remaining %d\n", remainingGuesses);
                                                     
                                                            if (userNumber> randomNumber) {
                                                        
                                                                    printf("The number you guessed is too high\n");
                                                                    
                                                                    printf("%d\n", randomNumber);
                                                                    printf("\n%d", userNumber);
                            
                                                            }  else {
                                                            
                                                                    printf("The number you guessed is too low\n");
                                                                    printf("%d", randomNumber);
                                                                    printf("\n%d", userNumber);

                                                            }
                                        
                                } 
                                
                    
                            } else {
                
                                        printf("Error! the number entered is not an acceptable number between 0-20!");
                
                                    }        
                    
                    
                }


        return 0;
    
    }
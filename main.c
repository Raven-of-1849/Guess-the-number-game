#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// New Challange
// Rules 
    //Generate number from 0-20
    //After generation, ask user to guess the number; User to only be able to enter number from 0-20, else error.
    //After succesful guess, return user message, too low or too high
    //User wins if they guess the correct number within 5 attemps.
    // Use if statements and while statements

int main() {
        
        int userNumber; // User entered number
        int guessCount = 5; // Number of guesses 
        int remainingGuesses = 5;
        float tempNum;
        
        
        time_t t; //Time variable
        srand( (unsigned) time(&t) ); // initialize the random number generator
        int randomNumber =  rand() % 21; // Get random number from 0-20
        
        printf("The name of the game is: Guess the number!\n\n You  have 5 attempts to guess the correct whole number between 0-20\n\n What is your first attempt?\n");
        printf("Remaining guesses: %d\n", remainingGuesses);
 

                 //While loop to check user nuber of guesses //
                while(guessCount > 0) {
                            
                                    //***  Conditional to verify an integer is being entered   ****//
                                     
                                     
                                     
                                     if (scanf("%f", &tempNum) == 1) {      // checks whether scanf successfully reads an integer
                                                      if((int)tempNum == tempNum) {
                                                          userNumber = (int)tempNum;
                                                          
                                                          
                //                                        printf("Invalid input. Please enter a valid number.\n");
                //                                        while (getchar() != '\n'); // clear the input buffer
                //                                        continue;
                //                            
                                    
                                            
                                            // Conditional to check if the number entered is between 0 and 20;
                        
                                            if (userNumber>= 0 && userNumber <=20) {
                                                        --guessCount;
                                                        --remainingGuesses; // Subtract one guess per loop
                                                        if(guessCount == 0 && userNumber!=randomNumber ) {  // needs the && operator to prevent game over even if correct
                                                                    printf("Game over, You Suck!");
                                                                    break;
                                                                
                                                            }
                                
                                                        if (userNumber == randomNumber) {
                                                
                                                                    printf("Correct,  You Win! user number: %d \n My number: %d", userNumber, randomNumber);
                                                                    break;
                                                        } else {
                 
                                                                        
                                                                    printf("Attempt remaining %d\n", remainingGuesses);
                                                                     
                                                                            if (userNumber> randomNumber) {
                                                                                    
                                                                                    printf("The number you guessed is too high\n");
                                                                                    
                                                                                    printf("My number: %d\n", randomNumber);
                                                                                    printf("Your Number: %d\n", userNumber);
                                            
                                                                            }  else {
                                                                            
                                                                                    printf("The number you guessed is too low\n");
                                                                                    printf("My number: %d\n", randomNumber);
                                                                                    printf("Your number: %d \n", userNumber);

                                                                            }
                                                        
                                                } 
                                                
                                    
                                            } else {
                                
                                                        printf("Error! the number entered is not an acceptable number between 0-20!");
                                
                                                    }        
                                        } else {
                                                    printf("Error: Decimal number entered. Please enter a whole number.\n");
                                                    while (getchar() != '\n') {} // Clear input buffer
                                            
                                            }
                                    
                            } else {
                                    printf("Error: Invalid input. Please enter a valid whole number.\n");
                                    while (getchar() != '\n') {} // Clear input buffer
                                    }
                    
                    
                }


        return 0;
    
    }
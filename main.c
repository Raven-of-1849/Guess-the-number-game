#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
        
        float tempNum;              // User entered input
        int userNumber;             // Convert tempNumber to user entered number
        int guessCount = 5;         // Number of guesses 
        
        
        time_t t; //Time variable
        srand( (unsigned) time(&t) );       // initialize the random number generator
        int randomNumber =  rand() % 21;    // Get random number from 0-20
        
        printf("\nGUESS THE CORRECT NUMBER!\n\n The game is simple, guess the correct whole between 0-20\n\n Anything other than numbers will be ignored! \n\n What is the first guess?\n\n");
        printf("Remaining guesses: %d\n", guessCount);
 

        //** While loop to check user nuber of guesses **//
        
        while(guessCount > 0) {
                            
                        //***  Conditional to verify an integer is being entered   ***//
                                    
                        if (scanf("%f", &tempNum) == 1) {                       //Checks whether scanf successfully reads an integer
                                            
                                            if( (int)tempNum == tempNum ) {     //Checks if the input is a whole number
                                                
                                                    userNumber = (int)tempNum;  //If true, the value is stored in userNumber
                                                          
                                                          
                                                    //*** Conditional to check if the number entered is between 0 and 20;   ***//
                                
                                                    if (userNumber>= 0 && userNumber <=20) {
                                                        
                                                                --guessCount;   // decrements 1 per execution if value is 0-20
                                                        
                                                                if (guessCount == 0 && userNumber!=randomNumber ) {  // needs the && operator to prevent user from loosing even if correct

                                                                            printf("Game over, You Suck!");
                                                                            break;
                                                                
                                                                }
                                
                                                                //*** Conditional to end game upon correct guess ***//
                                                                
                                                                if (userNumber == randomNumber) {
                                                
                                                                            printf("\nYou Win! \n\n My number is: %d\n", randomNumber);
                                                                            break;
                                                                } else {
                 
                                                                            printf("Attempts remaining %d\n\n", guessCount);
                                                                     
                                                                            if (userNumber > randomNumber) {
                                                                                    
                                                                                    printf("My number is lower!\n");
                                                                                    while (getchar() != '\n') {} // Clear input buffer
                                            
                                                                            }  else {
                                                                            
                                                                                    printf("My number is higher!\n");
                                                                                    while (getchar() != '\n') {} // Clear input buffer
                    
                                                                            }
                                                        
                                                                } 
                                                
                                    
                                                    } else {
                                
                                                            printf("Error: Enter a number between 0-20!");
                                
                                                    }
        
                                            } else {
                                                
                                                    printf("Error: Decimal number entered. Enter a whole number.\n");
                                                    while (getchar() != '\n') {} // Clear input buffer
                                            
                                            }
                                    
                        } else {
                            
                                    printf("Error: Invalid input. Please enter a valid whole number.\n");
                                    while (getchar() != '\n') {} // Clear input buffer
                                    
                        }
                    
        }

        return 0;
    
    }
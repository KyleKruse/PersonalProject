/* Name: Kyle Kruse
*  Date: 18 Mar 2019
*  Project: Prompt #4
*
*  Write a program that prints a table of all the Roman numerals of the decimal numbers in the range of 1 to 100
*  Roman numerals are represented by the following characters:
*  I, V, X, L, C, D, M
*  Repeating a Roman numeral up to three times represents the addition of the number,
*    whereas V, L, and D cannot be repeated.
*
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int romanify(int workNum);

int main(void)
{
    char buff[16]; // Buffer for user's password input
    int pass = 0; // Flag allowing program to continue(1) if user inputs correct password
    int attempts = 0; // Max incorrect password attempts is 3
    int userNum = 0; // The number that is inputted by the user and passed to the "romanify" function
    int validInput = 0; // Flag allowing romanify to be ran if the user inputted a valid number

    while (attempts < 3) // Asks for program password up until the max attempts is reached
    {
        printf("\n     Enter the password: ");
        gets(buff);
        
        if(strcmp(buff, "idf")) // This is the password
        {
            printf("\nIncorrect password, noob \n"); // You've gotta let them know
            attempts++;
            printf("%d/3 wrong entries\n", attempts);
        }
        else
        {
            printf("Correct password! \n\n"); // Correct password is inputted, set pass flag and exit the while loop
            pass = 1;
            break;
        }
    }

    if (attempts == 3) // Max entry attempts reached
    {
        printf("Too many incorrect entries, exiting...");
    }

    if(pass == 1) // Program continues if the password is correctly entered
    {
        printf("########################################\n");
        printf("########## ROMANBOI INITIATED ##########\n");
        printf("########################################\n\n");
        printf("Please enter a number between 1 and 1000 that you'd like converted to a Roman numeral: ");
        scanf("%d", &userNum);

        if (!isdigit(userNum) && userNum <= 1000 && userNum >= 1) // Basic input validation limiting to digits between 1 and 1000
        {
            validInput = 1;
        }

        if (validInput == 1) // Run romanify if input is valid
        {
            romanify(userNum);
        }

        else // Wrong user input, exit program
        {
            printf("Invalid input, read the directions!");
        }
        
    }
    return 0;
}

int romanify(int inbound) // Takes the number passsed to it from main and does the Roman numeral conversion.
{
            int workNum = inbound;
            printf("Your Roman numberal is: ");

            if (workNum >= 1000) // Lots of if statements below to slowly whittle down the input number while replacing it with the appropriate numerals.
            {
                printf("M");
                workNum -= 1000;
            }
            
            if (workNum >= 900)
            {
                printf("CM");
                workNum -= 900;
            }
            
            if (workNum >= 800)
            {
                printf("DCCC");
                workNum -= 800;
            }
            
            if (workNum >= 700)
            {
                printf("DCC");
                workNum -= 700;
            }
            
            if (workNum >= 600)
            {
                printf("DC");
                workNum -= 600;
            }
            
            if (workNum >= 500)
            {
                printf("D");
                workNum -= 500;
            }
            
            if (workNum >= 400)
            {
                printf("CD");
                workNum -= 400;
            }
            
            if (workNum >= 200)
            {
                printf("CC");
                workNum -= 200;
            }
            
            if (workNum >= 100)
            {
                printf("C");
                workNum -= 100;
            }
            
            if (workNum >= 90)
            {
                printf("XC");
                workNum -= 90;
            }
            
            if (workNum >= 50)
            {
                printf("L");
                workNum -= 50;
            }
            
            if (workNum >= 40)
            {
                printf("XL");
                workNum -= 40;
            }
            
            if (workNum >= 30)
            {
                printf("XX");
                workNum -= 30;
            }
            
            if (workNum >= 20)
            {
                printf("XX");
                workNum -= 20;
            }
            
            if (workNum >= 10)
            {
                printf("X");
                workNum -= 10;
            }

            if (workNum == 9)
            {
                printf("IX");
                workNum -= 9;
            }

            if (workNum == 6)
            {
                printf("VI");
                workNum -= 6;
            }
            
            if (workNum >= 5)
            {
                printf("V");
                workNum -= 5;
            }

            if (workNum == 4)
            {
                printf("IV");
                workNum -= 4;
            }

            if (workNum == 3)
            {
                printf("III");
                workNum -= 3;
            }

            if (workNum == 2)
            {
                printf("II");
                workNum -= 2;
            }

            if (workNum == 1)
            {
                printf("I");
                workNum -= 1;
            }

            printf("\n"); // BEGIN meme-cases

            if (inbound == 42)
            {
                printf("\n... Just kidding it's 42.\n");
            }

            if (inbound == 69)
            {
                printf("ayylmao\n");
            }

            if (inbound == 420)
            {
                printf("SNOOP WOULD BE PROUD\n");
            }

            if (inbound == 777)
            {
                printf("This isn't one of your penny-slot machines, grandma.\n");
            }

            printf("Thank you come again");
    
    return 0;
}
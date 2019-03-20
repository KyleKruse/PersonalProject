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
*  After revision, program will ask user if they want to convert a number to Roman numeral or vice-versa.
*
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int choices(void);
int romanify(void);
int numberify(void);

int main(void)
{
    char buff[16]; // Buffer for user's password input
    int pass = 0; // Flag allowing program to continue(1) if user inputs correct password
    int attempts = 0; // Max incorrect password attempts is 3
    int validInput = 0; // Flag allowing romanify to be ran if the user inputted a valid number
    char loopyboi = 0; // Used to bring user back to choice selection after running romanify or numberify

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

    while (pass == 1) // Program continues if the password is correctly entered
    {
        choices(); // Invokes the choices function to ask user what they'd like to perform
        loopyboi = 0; // Reset loopyboi
        ANOTHER_ONE: printf("\nWould you like to have another go? [Y]es or [N]o \n");
        fscanf(stdin, " %c", &loopyboi);
        
        switch (loopyboi)
        {
            case 'Y': // Yes option
                printf("\n");
                break;
            
            case 'N': // No option
                printf("\n");
                printf("Okay, guess we're done here... It's not you... it's me.");
                pass = 0;
                break;
        
            default:
                printf("Invalid choice, try again \n");
                goto ANOTHER_ONE;
                break;
            }
    }
    return 0;
}

int choices(void)
{
    int userChoice = 0; // User's choice of Roman->Number or Number->Roman
    
    printf("Please choose an option: \n"); // Present choices
    printf("[1] - Convert a number into a Roman numeral \n"); // romanify
    printf("[2] - Convert a Roman numeral into a number \n"); // numberify
    printf("[9] - Exit \n"); // exit option
    scanf("%d", &userChoice);

    switch (userChoice) // Switch to call function selected by user, or exit.
    {
        case 1:
            romanify(); // Option 1
            break;

        case 2:
            numberify(); // Option 2
            break;

        case 9:
            printf("Guess we're not doing anything so.... exiting..."); // Exit option
            break;
        
        default:
            printf("Invalid choice selected, exiting..."); // Catch-all for anything other than 1, 2, or 9 inputted by user
            break;
    }
}

int romanify(void) // Converts a number between 1 and 1000 into a Roman Numeral
{
    int userNum = 0; // The number that is inputted by the user and passed to the "romanify" function

    printf("########################################\n");
    printf("########## ROMANBOI INITIATED ##########\n");
    printf("########################################\n\n");
    printf("Please enter a number between 1 and 1000 that you'd like converted to a Roman numeral: ");
    scanf("%d", &userNum);

    if (!isdigit(userNum) && userNum <= 1000 && userNum >= 1) // Basic input validation limiting to digits between 1 and 1000
    {
        int workNum = userNum;
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

        if (workNum >= 300)
        {
            printf("CCC");
            workNum -= 300;
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
            printf("XXX");
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

        if (userNum == 42)
        {
            printf("\n... Just kidding it's 42.\n");
        }

        if (userNum == 69)
        {
            printf("ayylmao\n");
        }

        if (userNum == 420)
        {
            printf("SNOOP WOULD BE PROUD\n");
        }

        if (userNum == 777)
        {
            printf("This isn't one of your penny-slot machines, grandma.\n");
        }
    }

    else // Wrong user input, exit program
    {
        printf("Invalid input, read the directions!");
    }
}

int numberify(void) // Converts a number between 1 and 1000 into a Roman numeral
{
    int inputContinue = 1; // Flag to maintain user input loop and terminate when user is finished
    int indexer = 0; // Holds the index position for the userRoman array
    char tempChar = 0; // Temporary holding for user's character input
    char userRoman[16] = {0}; // The array containing the user's Roman numeral
    int romanExist = 0; // Flag to for if there was a numeral inputted. Will run error checking on the inputted numeral. Set by switchcases
    int romanError = 0; // Flag to be tripped if there is an error in the user's inputted roman numeral
    int doMaths = 0; // Flag to allow loop further down to convert numerals into numbers. Set by romanExist function
    int i = 0; // Used for for loop to do maths
    int result = 0; // Final returned result from converting numerals to numbers

    printf("#########################################\n");
    printf("########## NUMBERBOI INITIATED ##########\n");
    printf("#########################################\n\n");
    printf("Please enter a Roman numeral you'd like converted to a number, one character at a time \n");
    printf("Acceptable letters are: I, V, X, L, C, D, and M \n");
    printf("Once you're finished, press Q to quit \n\n");
    
    while (inputContinue == 1) // While loop to build an array of user's input Roman numeral characters into userRoman[]
    {
        printf("Please enter character %d: ", (indexer + 1));
        fscanf(stdin, " %c", &tempChar); // The space before the %c is mucho importante

        switch (tempChar)
        {   
            
            case 'Q': // Exit option
                printf("Input finished \n\n");
                userRoman[indexer] = 0; // Ensures final item in array is 0. Useful later when parsing through the array.
                tempChar = 0;
                inputContinue = 0;
                break;

            case 'I': // I option
                userRoman[indexer] = tempChar;
                indexer++;
                tempChar = 0; // clear tempChar
                romanExist = 1; // Sets flag to allow numerals to numbers loop below
                break;

            case 'V': // V option
                userRoman[indexer] = tempChar;
                indexer++;
                tempChar = 0;
                romanExist = 1;
                break;
            
            case 'X': // X option
                userRoman[indexer] = tempChar;
                indexer++;
                tempChar = 0;
                romanExist = 1;
                break;
            
            case 'L': //L option
                userRoman[indexer] = tempChar;
                indexer++;
                tempChar = 0;
                romanExist = 1;
                break;
            
            case 'C': // C option
                userRoman[indexer] = tempChar;
                indexer++;
                tempChar = 0;
                romanExist = 1;
                break;
            
            case 'D': // D option
                userRoman[indexer] = tempChar;
                indexer++;
                tempChar = 0;
                romanExist = 1;
                break;
            
            case 'M': // M option
                userRoman[indexer] = tempChar;
                indexer++;
                tempChar = 0;
                romanExist = 1;
                break;
        
            default: // Catch-all for anything other than accepted characters
                printf("Invalid entry, try again \n");
        }
    }

    // Validate user's inputted Roman numeral is correct
    // take flag from above switchcases "romanExist"
    // if(romanExist == 1) --> check Roman numeral
            // if correct, doMaths = 1
            // else print improper Roman numeral

    if (romanExist == 1)
    {
        // check roman numeral, if good --> doMaths = 1
        for (i = 0; i < indexer && romanError ==0; i++)
        {
            switch (userRoman[i])
            {
                case 'I': // I option
                    if (userRoman[i+1] == 'I')
                    {
                        if (userRoman[i+2] == 'I')
                        {
                            //Dank, it's III
                        }
                        else
                        {
                            romanError++;
                        }
                        
                    }

                    if (userRoman[i+1] == 'V')
                    {

                    }

                    if (userRoman[i+1] == 'X')
                    {

                    }
                    break;

                case 'V': // V option
                    userRoman[indexer] = tempChar;
                    indexer++;
                    tempChar = 0;
                    romanExist = 1;
                    break;
                
                case 'X': // X option
                    userRoman[indexer] = tempChar;
                    indexer++;
                    tempChar = 0;
                    romanExist = 1;
                    break;
                
                case 'L': //L option
                    userRoman[indexer] = tempChar;
                    indexer++;
                    tempChar = 0;
                    romanExist = 1;
                    break;
                
                case 'C': // C option
                    userRoman[indexer] = tempChar;
                    indexer++;
                    tempChar = 0;
                    romanExist = 1;
                    break;
                
                case 'D': // D option
                    userRoman[indexer] = tempChar;
                    indexer++;
                    tempChar = 0;
                    romanExist = 1;
                    break;
                
                case 'M': // M option
                    userRoman[indexer] = tempChar;
                    indexer++;
                    tempChar = 0;
                    romanExist = 1;
                    break;
            
                default: // Catch-all for anything other than accepted characters
                    printf("Invalid entry, try again \n");
            }
        }











        if (doMaths == 1) // Additions
        {
            printf("Your inputted Roman numeral is: ");
            for (i = 0; i < indexer; i++)
            {
                printf("%c", userRoman[i]);
            }
            printf("\n");
            
            for (i = 0; i < indexer; i++)
            {
                switch (userRoman[i])
                {
                    case 'M':
                        result += 1000;
                        break;
                    
                    case 'D':
                        result += 500;
                        break;
                    
                    case 'C':
                        if (userRoman[i+1] == 'D' || userRoman[i+1] == 'M')
                        {
                            result -= 100;
                        }
                        else
                        {
                            result += 100;
                        }
                        break;
                    
                    case 'L':
                        result += 50;
                        break;

                    case 'X':
                        if (userRoman[i+1] == 'L' || userRoman[i+1] == 'C')
                        {
                            result -= 10;
                        }
                        else
                        {
                            result += 10;
                        }
                        break;
                    
                    case 'V':
                        result += 5;
                        break;
                    
                    case 'I':
                        if (userRoman[i+1] == 'V' || userRoman[i+1] == 'X')
                        {
                            result -= 1;
                        }
                        else
                        {
                            result += 1;
                        }
                        break;
                
                    default:
                        printf("Something went wrong in the maths \n");
                }
            }
            printf("Your number is: %d \n\n", result);
        }
    }
}
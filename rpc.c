/*-------------------------ROCK PAPER SCISSOR GAME--------------------
Rock–Paper–Scissors is a hand game usually played between two people.

    .Rock crushes Scissors

    .Scissors cut Paper

    .Paper covers Rock

If both players choose the same, it’s a draw.


*/
#include<stdio.h>

int main()
{
    int userChoise, computerChoise;

    printf("Rock Paper Scissor Game!\n");
    
    printf("Enter your choice:\n");
    printf("1.Rock\n 2.Paper\n 3.Scissors\n");
    scanf("%d", &userChoise);

    // Computer generates choice between 1 and 3
    computerChoise = (rand() % 3) + 1;

    // Display choices
    printf("You Chose: ");

    if(userChoise == 1) {
        printf("Rock\n");

    } else if(userChoise == 2) {
        printf("Paper.\n");

    } else if(userChoise == 3) {
        printf("Scissors.\n");

    } else {
        printf("Invalid Choise");
        return 0;
    }

    printf("Computer chose: ");
    if(computerChoise == 1) {
        printf("Rock.\n");

    } else if (computerChoise == 2) {
        printf("Paper\n");

    } else if(computerChoise == 3) {
        printf("Scissors\n");

    } else {
        printf("Invalid choise");

    }

    // Decide winner
    if(userChoise == computerChoise) {
        printf("Draw!\n");
    }
    else if((userChoise == 1 && computerChoise == 3) ||
            (userChoise == 2 && computerChoise == 1) ||
            (userChoise == 3 && computerChoise == 2)) {
                
                printf("You Win!\n");
            }
    else {
                printf("Computer Wins!\n");
        }
    

    return 0;


}

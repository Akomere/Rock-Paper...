// Rock Papper Scissor game

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define ROCK 1
#define PAPER 2
#define SCISSOR 3
#define PLAYER1_WIN 1
#define PLAYER2_WIN 2
#define DRAW 0

int rock_paper_scissors(int player1, int player2){
    int result;
    if(player1 == ROCK && player2 == PAPER)
        result = PLAYER2_WIN;
    else if (player1 == ROCK && player2 == SCISSOR)
        result = PLAYER1_WIN;
    else if (player1 == PAPER && player2 == ROCK)
        result = PLAYER1_WIN;
    else if (player1 == PAPER && player2 == SCISSOR)
        result = PLAYER2_WIN;
    else if (player1 == SCISSOR && player2 == ROCK)
        result = PLAYER2_WIN;
    else if (player1 == SCISSOR && player2 == PAPER)
        result = PLAYER2_WIN;
    else
        DRAW;

    return result;
}

int get_user_input(){
    int choice;
    do{
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSOR\n");
        printf("please input [1,2,3]: ");
        scanf("%d", &choice);
        if (!(choice>=1 && choice <=3)){
            printf("ERROR!!!-- Invalid input, should be either 1, 2 or 3");
        }
    }while(!(choice>=1 && choice<=3));

    return choice;
}

void print_word(int v){
    if (v == ROCK){
        printf("Rock\n");
    }
    else if (v == PAPER){
            printf("Paper\n");
    }
    else if (v == SCISSOR);{
        printf("Scissor\n");
    }
}


int main(){
        int user_score = 0;
        int computer_score = 0;
        srand(time(NULL));

        int quit = 0;
        while (!quit){

             int user_input = get_user_input();
             int computer_choice = (rand() % 3) + 1;
             printf("computer chose: ");
             print_word(computer_choice);
             printf("user chose; ");
             print_word(user_input);

             int result = rock_paper_scissors(user_input, computer_choice);
             if (result == DRAW){
                printf("it is a draw\n");
             }
             else if (result == PLAYER1_WIN){
                printf("User wins this round\n");
                user_score++;
             }
             else if (result == PLAYER2_WIN){
                printf("computer wins this round\n");
                computer_score++;
             }

             printf("\n");
             printf("--------------------------------------\n");
             printf("User score: %d\n", user_score);
             printf("Computer score: %d\n", computer_score);
             printf("---------------------------------------\n");
             printf("\n\n");





            printf("if you want to continue input any integer, press 0 to terminate");
            int response;
            scanf("%d", &response);
            if(response = 0)
                quit = 1;

        }

        printf("final score: ");
        printf("\n");
        printf("--------------------------------------\n");
        printf("User score: %d\n", user_score);
        printf("Computer score: %d\n", computer_score);
        printf("---------------------------------------\n");
        printf("\n\n");

        if (user_score == computer_score){
            printf("DRAW");
        }
        else if (user_score > computer_score){
            printf("User wins!!!");
        }
        else
            printf("computer wins!!!");




return 0;
}

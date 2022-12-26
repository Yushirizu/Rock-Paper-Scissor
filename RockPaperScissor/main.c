#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int user_move;
    int computer_move;
    const char* result;

    srand(time(NULL));
    computer_move = rand() % 3;

    printf("Enter your move (0 for rock, 1 for paper, 2 for scissors): ");
    scanf("%d", &user_move);

    printf("Computer's move: %d\n", computer_move);

    if (user_move == computer_move) {
        result = "It's a tie!";
    } else if ((user_move - computer_move + 3) % 3 == 1) {
        result = "You win!";
    } else {
        result = "Computer wins!";
    }

    printf("%s\n", result);

    return 0;
}

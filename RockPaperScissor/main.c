#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* get_result(int user_move, int computer_move) {
    static const char* results[] = { "It's a tie!", "You win!", "Computer wins!" };
    return results[(user_move - computer_move + 3) % 3];
}

int main(void) {
    int user_move;
    int computer_move;
    char play_again;

    srand(time(NULL));

    do {
        computer_move = rand() % 3;

        printf("Enter your move (0 for rock, 1 for paper, 2 for scissors): ");
        scanf("%d", &user_move);

        printf("Computer's move: %d\n", computer_move);
        printf("%s\n", get_result(user_move, computer_move));

        printf("Play again (y/n)? ");
        scanf(" %c", &play_again);
    } while (play_again == 'y');

    return 0;
}

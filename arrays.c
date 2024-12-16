#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int best_player = 0; // To store the best player's number
    float best_gpg = 0.0;
    int players[5] = {1, 2, 3, 4, 5};
    int goals[5];
    float gpg[5];
    int games_played[5];

    // Input goals for each player
    for (i = 0; i < 5; i++) {
        printf("Enter Goals Scored for player %d: ", players[i]);
        scanf("%d", &goals[i]);
    }

    // Input games played for each player
    for (i = 0; i < 5; i++) {
        printf("Enter Games Played for player %d: ", players[i]);
        scanf("%d", &games_played[i]);
    }

    // Display the results and calculate GPG
    printf("\nPlayers\tGoals\tGames Played\tGPG\n");
    for (i = 0; i < 5; i++) {
        gpg[i] = (float)goals[i] / games_played[i];
        printf("%d\t%d\t%d\t\t%.3f\n", players[i], goals[i], games_played[i], gpg[i]);

        // Update the best player
        if (gpg[i] > best_gpg) {
            best_gpg = gpg[i];
            best_player = players[i];
        }
    }

    // Display the best player
    printf("\nThe best player is %d with %.3f average goals.\n", best_player, best_gpg);

    return 0;
}

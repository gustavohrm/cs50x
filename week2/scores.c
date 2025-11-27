#include <cs50.h>
#include <stdio.h>

int main(void) {
    const int scoresN = get_int("How many scores? ");
    int scores[scoresN];
    for (int i = 0; i < scoresN; i++) {
        scores[i] = get_int("Score: ");
    }
    
    int total = 0;
    for (int i = 0; i < scoresN; i++) {
        total += scores[i];
    }

    printf("Average: %f\n", total / (float) scoresN);
}
#include <stdio.h>

int main() {
    int numbers[5];
    int ranks[5] = {0}; // Initialize all ranks to 0

    // Input five numbers
    printf("Enter five numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate ranks
    for (int i = 0; i < 5; i++) {
        int count = 1; // Initialize count to 1 (current number's rank)
        for (int j = 0; j < 5; j++) {
            if (numbers[j] > numbers[i]) {
                count++; // Increment count if there's a higher value
            }
        }
        ranks[i] = count; // Assign rank to the current number
    }

    // Display the rankings
    printf("\nRankings:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d is ranked %d\n", numbers[i], ranks[i]);
    }

    return 0;
}

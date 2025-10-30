/*
Name: john paul murithi
Reg No:CT101/G/26544/25
Description:hotel_magement
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms per floor
    int branch, floor, room;
    int totalOccupied = 0, totalVacant = 0;

    // Initialize random number generator
    srand(time(0));

    printf("=== Hotel Chain Occupancy Report ===\n\n");

    // Assign random occupancy (1 = occupied, 0 = vacant)
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
            }
        }
    }

    // Calculate occupancy across all branches
    for (branch = 0; branch < 3; branch++) {
        int branchOccupied = 0, branchVacant = 0;

        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1)
                    branchOccupied++;
                else
                    branchVacant++;
            }
        }

        // Display per-branch summary
        printf(" %d   %d   %d\n", branch + 1, branchOccupied, branchVacant);

        totalOccupied += branchOccupied;
        totalVacant += branchVacant;
    }

    // Display total summary
    printf("\n=== Overall Summary ===\n");
    printf("Total occupied rooms across all branches: %d\n", totalOccupied);
    printf("Total vacant rooms across all branches: %d\n", totalVacant);
    printf("Grand total rooms: %d\n", totalOccupied + totalVacant);

    return 0;
}
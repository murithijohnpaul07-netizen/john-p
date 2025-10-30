/*
Name:john paul murithi
reg No:CT101/G/26544/25
Description:hotel_revenue_management
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10]; // 5 floors, 10 rooms each
    int i, j;
    int occupied, vacant;

    // Initialize random number generator
    srand(time(0));

    printf("=== Hotel Room Occupancy Report ===\n\n");

    // Simulate random occupancy data (1 = occupied, 0 = vacant)
    for (i = 0; i < 5; i++) {
        for (j= 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;  // Randomly 0 or 1
        }
    }

    // Display occupancy per floor
    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        // Count occupied and vacant rooms on each floor
        for (j = 0; j< 10; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", i+ 1, occupied, vacant);
    }

    return 0;
}
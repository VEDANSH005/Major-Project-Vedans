#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

// Structure to store fare details of a train
typedef struct {
    char name[50];
    float firstAC;
    float secondAC;
    float thirdAC;
    float sleeper;
} Train;

// Initialize all trains with their names and fares
void initTrains(Train trains[], int *size);

// Display available trains (from → to)
void showTrains(const Train trains[], int size, const char *from, const char *to);

// Get train name based on user choice (1–6)
const char* getTrainNameByChoice(const Train trains[], int size, int trainChoice);

// Get ticket price for a given train & class
// classChoice: 1 = 1AC, 2 = 2AC, 3 = 3AC, 4 = Sleeper
float getPricePerTicket(const Train trains[], int size, int trainChoice, int classChoice);

#endif

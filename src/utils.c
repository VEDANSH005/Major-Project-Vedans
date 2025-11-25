#include <string.h>
#include "utils.h"

void initTrains(Train trains[], int *size) {
    const char *names[] = {
        "Rajdhani Express",
        "Shatabdi Express",
        "Banglore Rajdhani Express",
        "Amarnath Express",
        "Vande Bharat Express",
        "Tejas Express"
    };

    float price[][4] = {
        {5390, 4340, 3000, 1200},
        {3330, 2020, 1520,  990},
        {3300, 2810, 1960,  980},
        {4900, 3330, 2150, 1100},
        {4000, 3200, 1500, 1020},
        {4750, 3652, 1965, 1600}
    };

    for(int i = 0; i < 6; i++) {
        strcpy(trains[i].name, names[i]);
        trains[i].firstAC  = price[i][0];
        trains[i].secondAC = price[i][1];
        trains[i].thirdAC  = price[i][2];
        trains[i].sleeper  = price[i][3];
    }
    *size = 6;
}

const char* getTrainNameByChoice(const Train trains[], int size, int trainChoice) {
    return (trainChoice >= 1 && trainChoice <= size) ? trains[trainChoice - 1].name : NULL;
}

float getPricePerTicket(const Train trains[], int size, int trainChoice, int classChoice) {
    if(trainChoice < 1 || trainChoice > size) return -1;

    Train t = trains[trainChoice - 1];
    if(classChoice == 1) return t.firstAC;
    if(classChoice == 2) return t.secondAC;
    if(classChoice == 3) return t.thirdAC;
    if(classChoice == 4) return t.sleeper;

    return -1;
}

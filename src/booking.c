#include <stdio.h>
#include <string.h>
#include "booking.h"

// --------------------------------------------------
// Get train name by choice (1–6)
// --------------------------------------------------
void getTrainName(int trainChoice, char trainName[]) {
    switch (trainChoice) {
        case 1: strcpy(trainName, "Rajdhani Express"); break;
        case 2: strcpy(trainName, "Shatabdi Express"); break;
        case 3: strcpy(trainName, "Banglore Rajdhani Express"); break;
        case 4: strcpy(trainName, "Amarnath Express"); break;
        case 5: strcpy(trainName, "Vande Bharat Express"); break;
        case 6: strcpy(trainName, "Tejas Express"); break;
        default: strcpy(trainName, "Invalid Train");
    }
}

// --------------------------------------------------
// Get class name by choice (1–4)
// --------------------------------------------------
void getClassName(int classChoice, char travelClass[]) {
    switch (classChoice) {
        case 1: strcpy(travelClass, "First Class AC"); break;
        case 2: strcpy(travelClass, "Second Class AC"); break;
        case 3: strcpy(travelClass, "Third Class AC"); break;
        case 4: strcpy(travelClass, "Sleeper"); break;
        default: strcpy(travelClass, "Invalid Class");
    }
}

// --------------------------------------------------
// Return price of ONE ticket according to your fares
// --------------------------------------------------
float getTicketPrice(int trainChoice, int classChoice) {
    float price = -1.0f;

    if (trainChoice == 1) {               // Rajdhani Express
        if      (classChoice == 1) price = 5390.00f;
        else if (classChoice == 2) price = 4340.00f;
        else if (classChoice == 3) price = 3000.00f;
        else if (classChoice == 4) price = 1200.00f;
    }
    else if (trainChoice == 2) {          // Shatabdi Express
        if      (classChoice == 1) price = 3330.00f;
        else if (classChoice == 2) price = 2020.00f;
        else if (classChoice == 3) price = 1520.00f;
        else if (classChoice == 4) price = 990.00f;
    }
    else if (trainChoice == 3) {          // Banglore Rajdhani Express
        if      (classChoice == 1) price = 3300.00f;
        else if (classChoice == 2) price = 2810.00f;
        else if (classChoice == 3) price = 1960.00f;
        else if (classChoice == 4) price = 980.00f;
    }
    else if (trainChoice == 4) {          // Amarnath Express
        if      (classChoice == 1) price = 4900.00f;
        else if (classChoice == 2) price = 3330.00f;
        else if (classChoice == 3) price = 2150.00f;
        else if (classChoice == 4) price = 1100.00f;
    }
    else if (trainChoice == 5) {          // Vande Bharat Express
        if      (classChoice == 1) price = 4000.00f;
        else if (classChoice == 2) price = 3200.00f;
        else if (classChoice == 3) price = 1500.00f;
        else if (classChoice == 4) price = 1020.00f;
    }
    else if (trainChoice == 6) {          // Tejas Express
        if      (classChoice == 1) price = 4750.00f;
        else if (classChoice == 2) price = 3652.00f;
        else if (classChoice == 3) price = 1965.00f;
        else if (classChoice == 4) price = 1600.00f;
    }

    return price;
}

// --------------------------------------------------
// Fill a Booking structure with complete details
// --------------------------------------------------
void fillBooking(Booking *b,
                 const char from[],
                 const char to[],
                 const char date[],
                 int passengers,
                 int trainChoice,
                 int classChoice) {

    strcpy(b->from, from);
    strcpy(b->to, to);
    strcpy(b->date, date);
    b->passengers = passengers;

    getTrainName(trainChoice, b->trainName);
    getClassName(classChoice, b->travelClass);

    b->ticketPrice = getTicketPrice(trainChoice, classChoice);

    if (b->ticketPrice > 0) {
        b->totalAmount = b->ticketPrice * passengers;
    } else {
        b->totalAmount = 0;
    }
}

// --------------------------------------------------
// Print booking summary like your main.c does
// --------------------------------------------------
void printBookingSummary(const Booking *b) {
    printf("\n---------------------------------------------\n");
    printf("           BOOKING SUMMARY\n");
    printf("---------------------------------------------\n");
    printf("Train Name     : %s\n", b->trainName);
    printf("From           : %s\n", b->from);
    printf("To             : %s\n", b->to);
    printf("Date           : %s\n", b->date);
    printf("Passengers     : %d\n", b->passengers);
    printf("Class          : %s\n", b->travelClass);
    printf("Ticket Price   : ₹%.2f\n", b->ticketPrice);
    printf("---------------------------------------------\n");
    printf("Total Amount   : ₹%.2f\n", b->totalAmount);
    printf("---------------------------------------------\n");
}

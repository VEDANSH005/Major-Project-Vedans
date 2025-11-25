#ifndef BOOKING_H
#define BOOKING_H

// Length limits (similar to your main.c)
#define MAX_CITY   30
#define MAX_DATE   20
#define MAX_CLASS  30
#define MAX_TRAIN  50

// Structure to store one booking's summary
typedef struct {
    char from[MAX_CITY];
    char to[MAX_CITY];
    char date[MAX_DATE];
    int passengers;
    char travelClass[MAX_CLASS];
    char trainName[MAX_TRAIN];
    float ticketPrice;
    float totalAmount;
} Booking;

// ---------------- Function Declarations ----------------

// Get train name from trainChoice (1–6)
void getTrainName(int trainChoice, char trainName[]);

// Get class name from classChoice (1–4)
void getClassName(int classChoice, char travelClass[]);

// Get price of one ticket based on train & class
float getTicketPrice(int trainChoice, int classChoice);

// Fill Booking structure with data
void fillBooking(Booking *b,
                 const char from[],
                 const char to[],
                 const char date[],
                 int passengers,
                 int trainChoice,
                 int classChoice);

// Print booking summary (like your main does)
void printBookingSummary(const Booking *b);

#endif

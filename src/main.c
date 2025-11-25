#include <stdio.h>
#include <string.h>

int main() {
    char from[30], to[30], date[20], travelClass[30], trainName[50] , booking[8] ;
    
    int passengers;
    int trainChoice, classChoice,choice;
    float  total,amount=0;

    printf("=============================================\n");
    printf("       TRACK & RIDE EXPRESS - BOOK TICKET\n");
    printf("=============================================\n\n");

    printf("Select Journey Details:\n");

    printf("From : ");
    scanf("%29s", from);

    printf("To : ");
    scanf("%29s", to);

    printf("Date of Journey (DD/MM/YYYY): ");
    scanf("%19s", date);

    printf("Number of Passengers: ");
    scanf("%d", &passengers);

    printf("\nSelect Class:\n");
    printf("1. First Class AC\n");
    printf("2. Second Class AC\n");
    printf("3. Third Class AC\n");
    printf("4. Sleeper\n");
    printf("Enter choice: ");
    scanf("%d", &classChoice);

    switch (classChoice) {
        case 1:
           strcpy(travelClass, "First Class AC"); 
           choice=1;
            break;
        case 2: 
           strcpy(travelClass, "Second Class AC"); 
           choice=2;
            break;
        case 3: 
           strcpy(travelClass, "Third Class AC");
           choice=3; 
             break;
        case 4: 
           strcpy(travelClass, "Sleeper"); 
           choice=4;
             break;
        default:
           printf("Invalid choice!\n"); 
             return 0;
    }
 
    printf("\nAvailable Trains:\n");
    printf("1. Rajdhani Express (%s to %s)\n",from , to );
    printf("2. Shatabdi Express (%s to %s)\n",from , to);
    printf("3. Banglore Rajdhani Express (%s to %s)\n",from , to);
    printf("4. Amarnath Express (%s to %s)\n",from , to );
    printf("5. Vande Bharat Express (%s to %s)\n",from , to );
    printf("6. Tejas Express (%s to %s)\n",from , to );
    printf("Enter train choice: ");
    scanf("%d", &trainChoice);

    if (trainChoice == 1)
        strcpy(trainName, "Rajdhani Express");
    else if (trainChoice == 2)
        strcpy(trainName, "Shatabdi Express");
    else if (trainChoice == 3)
        strcpy(trainName, "Banglore Rajdhani Express");
    else if (trainChoice == 4)
        strcpy(trainName, "Amarnath Express");
    else if (trainChoice == 5)
        strcpy(trainName, "Vande Bharat Express");
    else if (trainChoice == 6)
        strcpy(trainName, "Tegas Express");
    else {
        printf("Invalid train choice!\n");
        return 0;
    }
    printf("\nAmount of ticket/n");
    if (trainChoice == 1)
    {
        if(choice == 1)
        {
            printf("\nthe price of one ticket in first class AC is 5390.00\n");
            amount=amount+5390.00;
        }
        else if(choice == 2)
        {
            printf("\nthe price of one ticket in the second class AC is 4340.00\n");
            amount=amount+4340.00;
        }
        else if(choice == 3)
        {
            printf("\nthe price of one ticket in the second class AC is 3000.00\n");
            amount=amount+3000.00;
        }
        else if(choice == 4)
        {
            printf("\nthe price of one ticket in the second class AC is 1200.00\n");
            amount=amount+1200.00;
        }
    }
    else if (trainChoice == 2)
    {
        if(choice == 1)
        {
            printf("\nthe price of one ticket in the second class AC is 3330.00\n");
            amount=amount+3330.00;
        }
        else if(choice == 2)
        {
            printf("\nthe price of one ticket in the second class AC is 2020.00\n");
            amount=amount+2020.00;
        }
        else if(choice == 3)
        {
            printf("\nthe price of one ticket in the Third class AC is 1520.00\n");
            amount=amount+1520.00;
        }
        else if(choice == 4)
        {
            printf("\nthe price of one ticket in the second class AC is 990.00\n");
            amount=amount+990.00;
        }
    }
    else if (trainChoice == 3)
    {   
        if(choice == 1)
        {
            printf("\nthe price of one ticket in the first class AC is 3300.00\n");
            amount=amount+3300.00;
        }
        else if(choice == 2)
        {
            printf("\nthe price of one ticket in the second class AC is 2810.00\n");
            amount=amount+2810.00;
        }
        else if(choice == 3)
        {
            printf("\nthe price of one ticket in the third class AC is 1960.00\n");
            amount=amount+1960.00;
        }
        else if(choice == 4)
        {
            printf("\nthe price of one ticket in the sleeper Class is 980.00\n");
            amount=amount+980.00;
        }
    }    
    else if (trainChoice == 4)
    {    
        if(choice == 1)
        {
            printf("\nthe price of one ticket in the First class AC is 4900.00\n");
            amount=amount+4900.00;
        }
        else if(choice == 2)
        {
            printf("\nthe price of one ticket in the second class AC is 3330.00\n");
            amount=amount+3330.00;
        }
        else if(choice == 3)
        {
            printf("\nthe price of one ticket in the Third class AC is 2150.00\n");
            amount=amount+2150.00;
        }
        else if(choice == 4)
        {
            printf("\nthe price of one ticket in the sleeper class  is 1100.00\n");
            amount=amount+1100.00;
        }


    }    
    else if (trainChoice == 5)
    {    
        if(choice == 1)
        {
            printf("\nthe price of one ticket in the First class AC is 4000.00\n");
            amount=amount+4000.00;
        }
        else if(choice == 2)
        {
            printf("\nthe price of one ticket in the second class AC is 3200.00\n");
            amount=amount+3200.00;
        }
        else if(choice == 3)
        {
            printf("\nthe price of one ticket in the Third class AC is 1500.00\n");
            amount=amount+1500.00;
        }
        else if(choice == 4)
        {
            printf("\nthe price of one ticket in the sleeper class is 1020.00\n");
            amount=amount+1020.00;
        }
    }
    else if (trainChoice == 6)
    {    
        if(choice == 1)
        {
            printf("\nthe price of one ticket in the First class AC is 4750.00\n");
            amount=amount+4750.00;
        }
        else if(choice == 2)
        {
            printf("\nthe price of one ticket in the second class AC is 3652.00\n");
            amount=amount+3652.00;
        }
        else if(choice == 3)
        {
            printf("\nthe price of one ticket in the Third class AC is 1965.00\n");
            amount=amount+1965.00;
        }
        else if(choice == 4)
        {
            printf("\nthe price of one ticket in the sleeper class is 1600.00\n");
            amount=amount+1600.00;
        }
    }
    else 
    {
        printf("Invalid train choice!\n");
        return 0;
    }
    printf("\nDo you want to continue booking ticket\n");
    scanf("%7s",booking);
    if(strcmp(booking, "yes") ==0 || strcmp(booking, "YES") ==0)
    {
      total = passengers * amount;

      printf("\n---------------------------------------------\n");
      printf("           BOOKING SUMMARY\n");
      printf("\n---------------------------------------------\n");
      printf("Train Name     : %s\n", trainName);
      printf("From           : %s\n", from);
      printf("To             : %s\n", to);
      printf("Date           : %s\n", date);
      printf("Passengers     : %d\n", passengers);
      printf("Class          : %s\n", travelClass);
      printf("Ticket Price   : ₹%.2f\n", amount);
      printf("\n---------------------------------------------\n");
      printf("Total Amount   : ₹%.2f\n", total);
      printf("\n---------------------------------------------\n");
      printf("\nPayment Successful! \n");
      printf("Your e-ticket has been confirmed.\n");
      printf("\n---------------------------------------------\n");
      printf("Thank you for choosing Track & Ride Express!");
      printf("\n---------------------------------------------\n");
      amount=0;
      choice=0;
    }
    else if(strcmp(booking,"no") == 0 || strcmp(booking,"NO") == 0) 
    {
        printf("\nTHANK YOU FOR VISITING\n");
    }
    else
    {
        printf("\ninvalid choice\n");
    }
    return 0;
}
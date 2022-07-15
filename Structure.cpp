#include "Header.cpp"

//Construct node
struct node
{
    int receipt_number, x;

    string customerName, date;

    int quantity[10], menu2[10];

    int amount[10], total;

    string type[10] = {"2012", "2013", "2014", "2015", "2016", "2017", "2018", "2019", "2020", "2021"};

    string specifications[10] = {"1360 cc 3cyl", "1360 cc 4cyl", "1587 cc 3cyl", "1587 cc 4cyl", "1600 cc 3cyl", "1600 cc 4cyl", "1761 cc 4cyl", "1761 cc 6cyl", "2000 cc 4cyl", "2000 cc 6cyl"};

    string carName[10] = {"Hyundai i10", "Hyundai i20", "Hyundai i30", "Hyundai Elantra", "Toyota CHR E", "Toyota Camerry", "Honda Accord", "Honda HR-V", "Kia Optima", "Kia Sorento"};

    int car[10] = {66490, 40000, 44000, 77899, 118990, 53999, 25655, 49279, 43000, 64000};

    // node *prev;
    node *next;

} *q, *temp; // Pointer declaration

node *start_ptr = NULL;
node *head = NULL;
node *last = NULL;
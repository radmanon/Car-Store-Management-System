// Function to take order
// Time Complexity - O(n)
void Car ::take_order()
{
    system("cls");
    int i;
    int choice, quantity, price, None;
    string str1 = "********************************************************************************************************************\n";
    string str2 = "+-------+-----------------+---------------------------------+------------------------------+-----------------------+\n";

    cout << "-----------------";
    cout << "\nAdd Order Details\n";
    cout << "-----------------\n\n";

    node *temp;
    temp = new node;

    cout << str1;
    cout << " ID "
         << "\t     Year Model"
         << "\t          Details"
         << "\tCar Full Name"
         << "\t       Car PRICE (RS.)" << endl;
    cout << str1;
    cout << "0001"
         << "\t"
         << "\t2012"
         << "\t\t"
         << " 1360 cc 3cyl"
         << "\t"
         << " Hyundai i10  "
         << "  	66490.00" << endl;
    cout << str2;
    cout << "0002"
         << "\t"
         << "\t2013"
         << "\t\t"
         << " 1360 cc 4cyl"
         << "\t"
         << " Hyundai i20     "
         << "	40000.00" << endl;
    cout << str2;
    cout << "0003"
         << "\t"
         << "\t2014"
         << "\t\t"
         << " 1587 cc 3cyl "
         << "\t"
         << " Hyundai i30     "
         << "	44000.00" << endl;
    cout << str2;
    cout << "0004"
         << "\t"
         << "\t2015"
         << "\t\t"
         << " 1587 cc 4cyl  "
         << "\t"
         << " Hyundai Elantra"
         << "       \t77899.00" << endl;
    cout << str2;
    cout << "0005"
         << "\t"
         << "\t2016"
         << "\t\t"
         << " 1600 cc 3cyl         "
         << "\t"
         << " Toyota CHR E      "
         << "	118990.00" << endl;
    cout << str2;
    cout << "0006"
         << "\t"
         << "\t2017"
         << "\t\t"
         << " 1600 cc 4cyl"
         << "\t"
         << " Toyota Camerry        "
         << " 	53999.00" << endl;
    cout << str2;
    cout << "0007"
         << "\t"
         << "\t2018"
         << "\t\t"
         << " 1761 cc 4cyl "
         << "\t"
         << " Honda Accord    "
         << "	25655.00" << endl;
    cout << str2;
    cout << "0008"
         << "\t"
         << "\t2019"
         << "\t\t"
         << " 1761 cc 6cyl "
         << "\t"
         << " Honda HR-V           "
         << "	49279.00" << endl;
    cout << str2;
    cout << "0009"
         << "\t"
         << "\t2020"
         << "\t\t"
         << " 2000 cc 4cyl "
         << "\t"
         << " Kia Optima     "
         << "        43000.00" << endl;
    cout << str2;
    cout << "0010"
         << "\t"
         << "\t2021"
         << "\t\t"
         << " 2000 cc 6cyl "
         << "\t"
         << " Kia Sorento "
         << "	64000.00" << endl;
    cout << str1;
    cout << " " << endl;

    temp = new node;

    string str = "-------------------------------------------\n";

    cout << str;

    cout << "Type Order No: ";
    cin >> temp->receipt_number;

    cout << "Enter Customer Name: ";
    cin >> temp->customerName;

    cout << "Enter Date: ";
    cin >> temp->date;

    cout << str;

    cout << "\nHow many different Cars would you like to order?";
    cout << "\n(Maximum order is 10 for each transaction): ";
    cin >> temp->x;

    cout << endl;

    if (temp->x <= 0)
    {
         cout << "\nInvalid order!!!\n";
         cout << str;
         system("pause");
    }

    else if (temp->x > 10)
    {
        cout << "\nYour order exceeds the maximum amount of order!!!\n"; 
        cout << str;
        system("pause");
    }

    else
    {
         cout << str;
         
         cout << "\t    Enter Car ID\n";

         for (i = 0; i < temp->x; i++)
         {
              cout << str;

              cout << "Please Enter Your Selection: ";
              cin >> temp->menu2[i];

              cout << "\nCar Name: " << temp->carName[temp->menu2[i] - 1] << endl;

              cout << "\nHow many Cars do you want?: ";
              cin >> temp->quantity[i];

              temp->amount[i] = temp->quantity[i] * temp->car[temp->menu2[i] - 1];
              cout << "\nThe amount You need to pay is: Rs. " << temp->amount[i] << "/-" << endl;

              cout << str << endl;

              system("PAUSE");
        }

        cout << "\n===========================================================================" << endl;
        cout << "                     Order Taken Successfully..." << endl;
        cout << "===========================================================================" << endl;
        cout << "                Go to Receipt Menu to Pay The Bill" << endl;
        cout << "===========================================================================\n" << endl;

        system("PAUSE");

        temp->next = NULL;

        if (start_ptr != NULL)
            temp->next = start_ptr;

        start_ptr = temp;

        system("cls");
    }

} // End function take_order
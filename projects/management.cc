#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{

    int quant;
    int choice;

    // Quantity
    int Qrooms{0}, Qpasta{0}, Qburger{0}, Qnoodles{0}, Qshake{0}, Qchiken{0};

    // Food items sold
    int Srooms{0}, Spasta{0}, Sburger{0}, Snoodles{0}, Sshake{0}, Schiken{0};

    // Total proce of items
    int Total_rooms{0}, Total_pasta{0}, Total_burger{0}, Total_noodles{0}, Total_shake{0}, Total_chiken{0};

    system("cls");

    cout << "\n\t Quantity of items we have ";
    cout << "\n Rooms avaliabe : ";
    cin >> Qrooms;
    cout << "\n Quantity of passta : ";
    cin >> Qpasta;
    cout << "\n Quantity of burger : ";
    cin >> Qburger;
    cout << "\n Quantity of noodles : ";
    cin >> Qnoodles;
    cout << "\n Quantity of shake : ";
    cin >> Qshake;
    cout << "\n Quantity of chiken-roll : ";
    cin >> Qchiken;

m:
    cout << "\n\t\t\t  Please select from the menu options ";
    cout << "\n1) Rooms";
    cout << "\n2) Pasta";
    cout << "\n3) Burger";
    cout << "\n4) Noodles";
    cout << "\n5) Shake";
    cout << "\n6) Chiken-roll";
    cout << "\n7) Information regarding sales and collection ";

    cout << "\n\n Please enter your choice! ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the number of rooms you want : ";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms += quant;
            Total_rooms += (quant * 1200);
            cout << "\n\n\t\t" << quant << " room/rooms have been alloted to you1";
        }
        else
            cout << "\n\tOnly " << Qrooms - Srooms << " Rooms remaining in hotel";
        break;

    case 2:
        cout << "\n\n Enter Pasta Quantity : ";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta += quant;
            Total_pasta += (quant * 250);
            cout << "\n\n\t\t" << quant << " pasta is the order ";
        }
        else
            cout << "\n\tOnly " << Qpasta - Spasta << " Pasta remaining in hotel ";
        break;

    case 3:
        cout << "\n\n Enter Burger Quantity : ";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger += quant;
            Total_burger += (quant * 120);
            cout << "\n\n\t\t" << quant << " Burger is the order ";
        }
        else
            cout << "\n\tOnly " << Qburger - Sburger << " Burger remaining in hotel ";
        break;

    case 4:
        cout << "\n\n Enter Noodle Quantity : ";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles += quant;
            Total_noodles += (quant * 140);
            cout << "\n\n\t\t" << quant << " Noodle is the order ";
        }
        else
            cout << "\n\tOnly " << Qnoodles - Snoodles << " Noodle remaining in hotel ";
        break;

    case 5:
        cout << "\n\n Enter Shakes Quantity : ";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake += quant;
            Total_shake += (quant * 120);
            cout << "\n\n\t\t" << quant << " Shakes is the order ";
        }
        else
            cout << "\n\tOnly " << Qshake - Sshake << " Shakes remaining in hotel";
        break;

    case 6:
        cout << "\n\n Enter Chiken-rool Quantity : ";
        cin >> quant;
        if (Qchiken - Schiken >= quant)
        {
            Schiken += quant;
            Total_chiken += (quant * 150);
            cout << "\n\n\t\t" << quant << " Chiken-rool is the order ";
        }
        else
            cout << "\n\tOnly " << Qchiken - Schiken << " Chiken-rool remaining in hotel";
        break;

    case 7:
        cout << "\n\t\tDetails of sales and collection";
        cout << "\n\n Number of rooms we had : " << Qrooms;
        cout << "\n\n Number of rooms we gave for rent : " << Srooms;
        cout << "\n\n Remaining rooms : " << Qrooms - Srooms;
        cout << "\n\n Total rooms collection for the day  : " << Total_rooms;

        cout << "\n\n Number of Pastas we had : " << Qpasta;
        cout << "\n\n Number of Pastas we sold : " << Spasta;
        cout << "\n\n Remaining Pastas : " << Qpasta - Spasta;
        cout << "\n\n Total Pastas collection for the day  : " << Total_pasta;

        cout << "\n\n Number of Burgers we had : " << Qburger;
        cout << "\n\n Number of Burgers we sold : " << Sburger;
        cout << "\n\n Remaining Burgers : " << Qburger - Sburger;
        cout << "\n\n Total Burgers collection for the day  : " << Total_burger;

        cout << "\n\n Number of Noodles we had : " << Qnoodles;
        cout << "\n\n Number of Noodles we sold : " << Snoodles;
        cout << "\n\n Remaining Noodles : " << Qnoodles - Snoodles;
        cout << "\n\n Total Noodles collection for the day  : " << Total_noodles;

        cout << "\n\n Number of Shakes we had : " << Qshake;
        cout << "\n\n Number of Shakes we sold : " << Sshake;
        cout << "\n\n Remaining Shakes : " << Qshake - Sshake;
        cout << "\n\n Total Shakes collection for the day  : " << Total_shake;

        cout << "\n\n Number of Chicken-roll we had : " << Qchiken;
        cout << "\n\n Number of Chicken-roll we sold : " << Schiken;
        cout << "\n\n Remaining Chicken-roll : " << Qchiken - Schiken;
        cout << "\n\n Total Chicken-roll collection for the day  : " << Total_chiken;

        cout << "\n\n\n Total Collection for the day : " << Total_rooms + Total_burger + Total_noodles + Total_pasta + Total_shake + Total_chiken;

        break;

    case 8:
        exit(0);

    default:
        cout << "\n Please select the number mentioned above !";
    }

    goto m;

    return 0;
}
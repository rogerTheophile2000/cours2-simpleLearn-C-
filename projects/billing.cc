#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Shopping
{
private:
    int pcode;
    float price;
    float dis;
    string pname;

public:
    void menu();
    void administrator();
    void buyer();
    void add();
    void edit();
    void rem();
    void list();
    void receipt();
};

void Shopping::menu()
{
m:
    int choice;
    string email;
    string password;

    system("cls");

    cout << "\t\t\t\t____________________________________________________________\n"
         << endl;
    cout << "                                                                    \n"
         << endl;
    cout << "\t\t\t\t                Supermarketm Main Menu                      \n"
         << endl;
    cout << "                                                                    \n"
         << endl;
    cout << "\t\t\t\t____________________________________________________________\n"
         << endl;
    cout << "\t\t\t\t|          1) Administrator           |\n"
         << endl;
    cout << "\t\t\t\t|                                     |\n"
         << endl;
    cout << "\t\t\t\t|          2) Buyer                   |\n"
         << endl;
    cout << "\t\t\t\t|                                     |\n"
         << endl;
    cout << "\t\t\t\t|          3) Exit                    |\n"
         << endl;
    cout << "\t\t\t\t|                                     |\n"
         << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\t\t\t Please Login \n";
        cout << "\t\t\t Enter Email  \n";
        cin >> email;
        cout << "\t\t\t Passwprd     \n";
        cin >> password;

        if (email == "roger@gmail.com" && password == "roger@123")
        {
            administrator();
        }
        else
        {
            cout << "Invalide email/password";
        }
        break;

    case 2:
    {
        buyer();
    }

    case 3:
    {
        exit(0);
    }

    default:
        cout << "\n\t\t\t Please select from the given options";
        break;
    }
    goto m;
}

void Shopping ::administrator()
{
m:
    int choice;
    system("cls");
    cout << "\n\t\t\t Administrator menu";
    cout << "\n\t\t\t|_______1) Add the product_______|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_____2) Modify the product______|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_____3) Delete the product______|";
    cout << "\n\t\t\t|                                |";
    cout << "\n\t\t\t|_____4) Back to main menu_______|";

    cout << "\n\t\t Please enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        edit();
        break;
    case 3:
        rem();
        break;
    case 4:
        menu();
        break;

    default:
        cout << "Invalid choice !";
        break;
    }
    goto m;
}

void Shopping::buyer()
{
m:
    int choice;

    system("cls");
    cout << "\t\t\t  Buyer \n";
    cout << "\t\t\t__________________\n";
    cout << "\t\t\t 1) Buyer product \n";
    cout << "\t\t\t                  \n";
    cout << "\t\t\t 2) Go Back       \n";
    cout << " Enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        receipt();
        break;

    case 2:
        menu();

    default:
        cout << "Invalide choice";
        break;
    }
    goto m;
}

void Shopping ::add()
{
m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;

    system("cls");

    cout << "\n\n\t\t\t Add new product";
    cout << "\n\n\t Product code of the product ";
    cin >> pcode;
    cout << "\n\n\t Name of the product ";
    cin >> pname;
    cout << "\n\n\t Price of the product";
    cin >> price;
    cout << "\n\n\t Discount on product";
    cin >> dis;

    data.open("database.txt", ios::in);

    if (!data)
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
        data.close();
    }
    else
    {
        data >> c >> n >> p >> d;

        while (!data.eof())
        {
            if (c == pcode)
            {
                token++;
            }
            data >> c >> n >> p >> d;
        }
        data.close();

        if (token == 1)
            goto m;
        else
        {
            data.open("database.txt", ios::app | ios::out);
            data << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            data.close();
        }
    }
    cout << "\n\n\t\t Record inserted !";
}

void Shopping ::edit()
{
    fstream data, data1;
    int pkey, token{0}, c;
    float p, d;
    string n;

    system("cls");

    cout << "\n\t\t\t Modify the record ";
    cout << "\n\t\t\t Product code : ";
    cin >> pkey;

    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\nFile doesn't exist";
    }
    else
    {
        data.open("database1.txt", ios::app | ios::out);

        data >> pcode >> pname >> price >> dis;
        while (!data.eof())
        {
            if (pkey == pcode)
            {
                cout << "\n\t\t Product new code : ";
                cin >> c;
                cout << "\n\t\t Name of the product : ";
                cin >> n;
                cout << "\n\t\t Price : ";
                cin >> p;
                cout << "\n\t\t Discount : ";
                cin >> d;
                data1 << " " << c << " " << n << " " << p << " " << d << "\n";
                cout << "\n\n\t\t Record edited ";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis;
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\n Record not found sorry !";
        }
    }
}

void Shopping ::rem()
{

    fstream data, data1;
    int pkey;
    int token{0};

    system("cls");

    cout << "\n\n Delete product";
    cout << "\n\n\t Product code : ";
    cin >> pkey;
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "File doesnt exist";
    }
    else
    {
        data1.open("database1.txt", ios::app | ios::out);
        data >> pcode >> pname >> price >> dis;
        while (data.eof())
        {
            if (pcode == pkey)
            {
                cout << "\n\n\t Product deleted successfully";
                token++;
            }
            else
            {
                data1 << " " << pcode << " " << pname << " " << price << " " << dis << "\n";
            }
            data >> pcode >> pname >> price >> dis;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\n Record br found";
        }
    }
}

void Shopping::list()
{
    fstream data;

    system("cls");

    data.open("database.txt", ios::in);
    cout << "\n\n___________________________________________________________________\n";
    cout << "ProNo\t\tName\tPrice\n";
    cout << "\n\n___________________________________________________________________\n";
    data >> pcode >> pname >> price >> dis;

    while (!data.eof())
    {
        data << pcode << "\t\t" << pname << "\t\t" << price << "\n";
        data >> pcode >> pname >> price >> dis;
    }
    data.close();
}

void Shopping::receipt()
{
m:
    fstream data;
    int arrc[100];
    int arrq[100];
    char choice;
    int c{0};
    float amount{0};
    float dis{0};
    float total{0};

    system("cls");

    cout << "\n\n\t\t\t RECEIPT ";
    data.open("database.txt", ios::in);
    if (!data)
    {
        cout << "\n\n Emty database";
    }
    else
    {
        data.close();

        list();
        cout << "\n__________________________________\n";
        cout << "\n|                                 \n";
        cout << "\n|     Please place the order      \n";
        cout << "\n|                                 \n";
        cout << "\n__________________________________\n";
        do
        {
            cout << "\n\nEnter Product code : ";
            cin >> arrc[c];
            cout << "\n\nEnter the product quantity : ";
            cin >> arrq[c];
            for (int i = 0; i < c; i++)
            {
                if (arrc[c] == arrc[i])
                {
                    cout << "\n\n Duplicate product code. Please try again";
                    goto m;
                }
            }
            c++;
            cout << "\n\n Do you want to buy another product ? if yes then press y or n";
            cin >> choice;

        } while (choice == 'y');
        cout << "\n\n\t\t\t_______________RECEIPT_______________\n";
        cout << "\nProduct No\tProduct Name \tProduct quantity\tPrice\tAmount\tAmount with discount\n";
        for (int i = 0; i < c; i++)
        {
            data.open("database.txt", ios::in);
            data >> pcode >> pname >> price >> dis;
            while (!data.eof())
            {
                if (pcode == arrc[i])
                {
                    amount = price * arrq[i];
                    dis = amount - (amount * dis / 100);
                    total += dis;
                    cout << "\n"
                         << pcode << "\t\t" << pname << "\t\t" << arrq[i] << "\t\t" << price << "\t\t" << amount << "\t\t" << dis;
                }
                data >> pcode >> pname >> price >> dis;
            }
        }
        data.close();
    }
    cout << "\n\n_________________________________________________\n";
    cout << "\n Total Amount : " << total;
}

int main()
{
    Shopping s;
    s.menu();

    return 0;
}

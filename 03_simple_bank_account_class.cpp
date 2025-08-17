#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int h;
class account
{
    string name;
    double balance;
    int account_no;

public:
    account(string str, double sbalance, int saccount_no)
    {
        name = str;
        account_no = saccount_no;
        balance = sbalance;
    }
    void draw_money(int dmoney)
    {
        if (dmoney > balance)
        {
            h = 1;
        }
        else
        {
            balance -= dmoney;
        }
    }
    void credit_money(int cmoney)
    {
        balance += cmoney;
    }
    void display()
    {
        cout << endl
             << "Welcome! this is your account___ " << endl
             << endl;
        cout << "Account no  :  " << account_no << endl
             << endl;
        cout << "Name  :  " << name << endl
             << endl;
        cout << "Your account balance  :  " << balance << endl
             << endl;
    }
    void ac_operation()
    {
        string wrc;
        int money;
    label1:
        cout << "What do you want deposit(d) or with draw(w) : _";
        cin >> wrc;
        if (wrc != "deposit" && wrc != "d" && wrc != "credit" && wrc != "draw" && wrc != "w" && wrc != "width draw" && wrc != "cash" && wrc != "c")
        {
            cout << endl
                 << "There is not '" << wrc << "' in options" << endl
                 << endl;
            cout << "Please enter again." << endl
                 << endl;
            goto label1;
        }
        cout << endl

             << "Enter amount in rupees  _";
        cin >> money;
        cout << endl
             << "Processing...................." << endl;
        Sleep(5 * 1000);
        if (wrc == "deposit" || wrc == "d" || wrc == "credit" || wrc == "c")
        {
            credit_money(money);
        }
        else
        {
            draw_money(money);
        }
        if (h == 1)
        {
            cout << endl
                 << "Your account balance is lower than transaction money" << endl
                 << endl
                 << "Please! Enter money under balance"
                 << endl
                 << endl;
        }
        else
        {
            cout << endl
                 << "Your transaction has been succeed......." << endl;
            cout << endl
                 << "Now your balance is  _" << balance << endl
                 << endl;
        }
    }
};
int main()
{
    int accountno;

    account ayan("Ayan Ansari", 34000, 1000);
    account zaid("Zaid", 20000, 1001);
    account mohd("Mohd", 30000, 1002);
    account zaid_ansari("Zaid Ansari", 15000, 1003);
    account ahtesham("Ahtesham", 70000, 1004);
    account shubham_saha("Shubham Saha", 25000, 1005);
    account abhishek("Abhishek", 35000, 1006);
    account ankit("Ankit", 50000, 1007);
    account peter_bty("Peter BTY", 15000, 1008);
    account himraj_doley("Himraj Doley", 40000, 1009);
    account abdul_zain("Abdul Zain", 5000, 1010);
    account samar("Samar", 62000, 1011);
    account samar_ansari("Samar Ansari", 15000, 1012);

label:
    h == 0;
    cout << endl
         << "Enter account number : _";
    cin >> accountno;

    switch (accountno)
    {
    case 1000:
        ayan.display();
        ayan.ac_operation();
        break;
    case 1001:
        zaid.display();
        zaid.ac_operation();
        break;
    case 1002:
        mohd.display();
        mohd.ac_operation();
        break;
    case 1003:
        zaid_ansari.display();
        zaid_ansari.ac_operation();
        break;
    case 1004:
        ahtesham.display();
        ahtesham.ac_operation();
        break;
    case 1005:
        shubham_saha.display();
        shubham_saha.ac_operation();
        break;
    case 1006:
        abhishek.display();
        abhishek.ac_operation();
        break;
    case 1007:
        ankit.display();
        ankit.ac_operation();
        break;
    case 1008:
        peter_bty.display();
        peter_bty.ac_operation();
        break;
    case 1009:
        himraj_doley.display();
        himraj_doley.ac_operation();
        break;
    case 1010:
        abdul_zain.display();
        abdul_zain.ac_operation();
        break;
    case 1011:
        samar.display();
        samar.ac_operation();
        break;
    case 1012:
        samar_ansari.display();
        samar_ansari.ac_operation();
        break;
    default:
        cout << endl
             << "This account no is not available" << endl;
        cout << "Try another account" << endl;
        goto label;
        break;
    }

    string more_t;
    cout << "Enter 'more' for more transection : ";
    cin >> more_t;
    if (more_t == "more" || more_t == "m")
    {
        system("cls");
        goto label;
    }
    return 0;
}
#include <iostream>
#include <string.h>
#include <stdbool.h>
using namespace std;
int main()
{
    int n;
    string name, pwd, admin_id, admin_pwd;
    bool flag = true;

    while (flag)
    {
        cout << "enter the choice: " << endl;
        cout << "enter 1 for registration" << endl;
        cout << "enter 2 for login" << endl;
        cout << "enter 3 for admin login" << endl;
        cout << "enter 4 for logout" << endl;
        cout << "enter 5 for exit" << endl;

        cin >> n;
        switch (n)
        {
        case 1:
            cout << "enter name: ";
            cin >> name;
            cout << "enter pwd: ";
            cin >> pwd;
            cout << endl;
            cout << "registered succesfully" << endl;
            break;
        case 2:
            cout << "enter user id and user password" << endl;
            cin >> name >> pwd;
            cout << "logged in successfully" << endl;
            break;
        case 3:
            cout << "enter admin id: ";
            cin >> admin_id;
            cout << "enter admin pwd: ";
            cin >> admin_pwd;
            cout << "admin logged in successfully" << endl;
            break;
        case 4:
            cout << "user logged out successfully" << endl;
            break;
        case 5:
            flag = false;
            break;
        }
    }
    return 0;
}
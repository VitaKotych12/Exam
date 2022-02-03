#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<algorithm>
using namespace std;

int menu() {
	int log;
	cout << "1 - Guest ";
	cout << "\n2 - Admin ";
	cout << "Enter who are you : ";
	cin >> log;
	return log;
}
class Guest {
	string login, password;
public : 
	Guest() { login = password =" "; }
	Guest(string login, string password) {
		this->login = login;
		this->password = password;
	}
	
	
};


int main() {
    string login;
    string user;
    int login_times;
    string password_login;
    string password;
    int choice =menu();
    if (choice == 1) {
        while (choice) {
            cout << "\n\n" ;
            cout << "\t----------------" << " Registeration " << "----------------" << endl;
            cout << "Login: ";
            cin >> user;
            cout << "password: ";
            cin >> password;

            cout << "\n\n";
            cout << "Registered Successfully!" << "\n";
            cout << "\n\n";

            while (choice) {
                cout << "\n\n";
                cout << "Login" << "\n" << "_____";
                cout << "\n";

                cout << "login: ";
                cin >> login;
                cout << "Password: ";
                cin >> password_login;

                if (login == user && password_login == password) {
                    cout << "loged in Successfully!" << endl;
                    cout << "Welcome  " << user << "!";
                    break;
                }
                else if (login != user && password_login == password) {
                    cout << "username is incorrect!" << endl;
                }
                else if (login == user && password_login != password) {
                    cout << "password is incorrect!" << endl;
                }
                else {
                    cout << "Everything is incorrect!" << endl;
                }
            }while (choice);
        }






    }
    return 0;
}



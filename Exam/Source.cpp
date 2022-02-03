#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<algorithm>
using namespace std;

int menu() {
	int log;
    cout << "0 - Exit\n";
	cout << "1 - Guest ";
	cout << "\n2 - Admin\n";
	cout << "Enter who are you : ";
	cin >> log;
	return log;
}
class Guest {
	string login, password, user;
public : 
	Guest() { login = password =" "; }
	Guest(string login, string password) {
		this->login = login;
		this->password = password;
	}
   
    void add_new() {
        cout << "\n\n";
        cout << "\t----------------" << " Registeration " << "----------------" << endl;
        cout << "Login: ";
        cin >> user;
        cout << "password: ";
        cin >> password;

        cout << "\n\n";
        cout << "Registered Successfully!" << "\n";
        cout << "\n\n";
    }
	
    string get_login() {
        return login;
    }
    string get_password() {
        return password;
    }
    string get_user() {
        return user;
    }
};
class login {
    Guest g;
    string login;
    string user;
    int login_times;
    string password_login;
    string password;
    int choice = menu();
public:
    void login_user() {
        if (choice == 1) {
            while (choice) {
                cout << "\n\n";
                cout << "\t----------------" << " Registeration User " << "----------------" << endl;
                cout << "Login: ";
                cin >> user;
                cout << "password: ";
                cin >> password;

                cout << "\n\n";
                cout << "Registered Successfully!" << "\n";
                cout << "\n\n";

                while (choice) {
                    cout << "\n\n";
                    cout << "\t----------- " << "Login" << " " << " -----------";
                    cout << "\n";

                    cout << "login: ";
                    cin >> login;
                    cout << "Password: ";
                    cin >> password_login;

                    if (login == user && password_login == password) {
                        cout << "\n" << "loged in Successfully!" << "\n";
                        cout << "Welcome  " << user << "!!!";
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
        else {
            while (choice == 2) {
                cout << "\n\n";
                cout << "\t----------------" << " Registeration Admin" << "----------------" << endl;
                cout << "Login: ";
                cin >> user;
                cout << "password: ";
                cin >> password;

                cout << "\n\n";
                cout << "Registered Successfully!" << "\n";
                cout << "\n\n";

                while (choice) {
                    cout << "\n\n";
                    cout << "\t----------- " << "Login" << " " << " -----------";
                    cout << "\n";

                    cout << "login: ";
                    cin >> login;
                    cout << "Password: ";
                    cin >> password_login;

                    if (login == user && password_login == password) {
                        cout << "\n" << "loged in Successfully!" << "\n";
                        cout << "WELCOME  " << user << "!!!";
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

    }
};

int main() {
    login l;
    l.login_user();





    return 0;
}



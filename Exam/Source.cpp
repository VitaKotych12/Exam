#include<iostream>
#include<string>
#include<map>
#include<fstream>
using namespace std;

int menu() {
	int log;
	cout << "1 - Guest ";
	cout << "2 - Admin ";
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
class  Login : public Guest {
	map <int, Guest> mp;
	Guest g;
public:



};
int main() {






	return 0;
}



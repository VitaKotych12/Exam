#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<algorithm>
#include<vector>
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

struct Question
{
    string question = " ", var_answers = " ";  int answer = 0;
    bool check_answer(int num)
    {
        return (answer == num);
    }
};
class tests {
    vector<Question> questions;
    int count_of_questions = 6;
    int right = 0;
    int wrong = 0;
    double res = 0;
    int mark = 12;
 public:    
    void test_programing() {

        questions.resize(count_of_questions);
        questions[0].question = "\nThere are 6  questions in this test : \n";
        questions[0].var_answers = "1) C ++ was created in 1979 : \n1 - yes   2 - no\n\n";
        questions[0].answer = 2;

        questions[1].var_answers = "2) C ++ is object oriented : \n1 - yes   2 - no\n\n";
        questions[1].answer = 1;

        questions[2].var_answers = "3) how many bytes char contains : \n1 - 1 byte   2 - 8 bytes\n\n";
        questions[2].answer = 1;

        questions[3].var_answers = "4) how many bytes int contains :  \n1 - 2 bytes   2 - 16 bytes\n\n";
        questions[3].answer = 1;

        questions[4].var_answers = "4) how many bytes long contains : \n1 - 2 bytes   2 - 4 bytes\n\n";
        questions[4].answer = 1;

        questions[5].var_answers = "4) how many bytes float contains : \n1 - 4 bytes   2 - 16 bytes\n\n";
        questions[5].answer = 1;

    }
    void res(){

        for (int i = 0; i < count_of_questions; ++i)
        {
            cout << questions[i].question;
            cout << questions[i].var_answers;
            int ans;
            cin >> ans;
            if (questions[i].check_answer(ans)) ++right;
            else ++wrong;
        }       
        cout << "\nRight answers - " << right;
        cout << "\nWrong answers - " << wrong;
        mark = mark / count_of_questions;
        for (int i = 0; i < count_of_questions; i++)
            res = right * mark;
        cout << "\nYour GPA is " << res << "\n";
    }
   



};
int menu_user() {
    cout << "\n1 - Test programing ";
    cout << "\n2 - Test math ";
    cout << "\n3 - Test deigner ";
    cout << "\n4 - Test administration ";
    cout << "\nEnter your choice :";
    int choice2;
    cin >> choice2;
    return choice2;


}

class LogPass{
    string Login;
    string Password;
public:
    LogPass(string L, string P)
    {
        Login = L;
        Password = P;
    }
    bool acces(LogPass l) {
        return  (Login == l.Login && Password == l.Password);
    }
};

int main() {
      tests t;
      string Log = "user";
      string Pass = " 1";
      string login, password;
      int choice = menu();
      switch (choice) {
      case 1:
          cout << "\t----------------" << " Login " << "----------------" << "\n";
          cout << "Login  ";
          cin >> Log;
          cout << "Password  ";
          cin >> Pass;
          if (login == Log && Pass == password) {
              cout << "\n" << "loged in Successfully!" << "\n";
              cout << "WELCOME  " << login << "!!!";
          }
          break;
      }

      int choice2 = menu_user();
      switch (choice2) {
      case 1:
          t.test_programing();
       
          break;
      case 2:
      
          break;



      }

    return 0;
}



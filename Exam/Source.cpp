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
    void test_math() {

        questions.resize(count_of_questions);
        questions[0].question = "\nThere are 6  questions in this test : \n";
        questions[0].var_answers = "1) √(256^2) \n1 - 256   2 - 65536    3 - 512   \n\n";
        questions[0].answer = 2;

        questions[1].var_answers = "2) 2 + 8 \n1 - 10   2 - 19   3 - 9   4 - 6   \n\n";
        questions[1].answer = 1;

        questions[2].var_answers = "3) 2 log(8 × 8^8) \n1 - 16   2 - 17   2 - 8   2 - 2\n\n";
        questions[2].answer = 1;

        questions[3].var_answers = "4) 4^6  \n1 - 4096   2 - 409   3 - 496 \n\n";
        questions[3].answer = 1;

        questions[4].var_answers = "4) 7^2 \n1 - 70   2 - 64   3 - 49   4 - 7*7\n\n";
        questions[4].answer = 1;

        questions[5].var_answers = "4) 125^2 \n1 - 15625   2 - 156255   3 - 1525  4 - 5625 \n\n";
        questions[5].answer = 1;

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
    int acces(LogPass l,LogPass p) {
        return  (Login == l.Login && Password == p.Password);
    }
};


int main() {
    tests t;
    string login, password;
    int choice = menu();
    switch (choice == 1) {
    case 1:
        cout << "\t----------------" << " Login User " << "----------------" << "\n";
        cout << "Login  ";
        cin >> login;
        cout << "Password  ";
        cin >> password;
        LogPass l(login, password);
        LogPass user("user", "user");
        bool  acc = false;
        acc = user.acces(l, l);
        if (acc) {
            cout << "\n" << "loged in Successfully!" << "\n";
            cout << "WELCOME  " << login << " !";
        }
        else {
            cout << "There is no account with this log ";
            break;
        }
        int choice2 = menu_user();
        switch (choice2) {
        case 1:
            t.test_programing();
            break;
        case 2:
            t.test_math();
            break;


        }
    }
    

      switch (choice == 2) {
      case 1:
          ///////////////////// admin
          cout << "\t----------------" << " Login Admin " << "----------------" << "\n";
          cout << "Login  ";
          cin >> login;
          cout << "Password  ";
          cin >> password;
          LogPass l(login, password);
          LogPass admin("admin", "admin");
          bool  acc = false;
          acc = admin.acces(l, l);
          if (acc) {
              cout << "\n" << "loged in Successfully!" << "\n";  cout << "WELCOME  " << login << " !";
          }
          else {
              cout << "There is no account with this log ";
              break;
          }



      }

    return 0;
}



#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<algorithm>
#include <forward_list>
#include<vector>
#include<list>
using namespace std;

int menu1() {
    int log;
    cout << "\n0 - Exit";
    cout << "\n1 - Guest ";
    cout << "\n2 - Admin\n";
    cout << "Enter who are you : ";
    cin >> log;
    return log;
}
int menu2() {
    cout << "\n\t0 - Exit ";
    cout << "\n\t1 - Test Programing ";
    cout << "\n\t2 - Test Math ";
    cout << "\n\t3 - Test Films ";
    cout << "\\tEnter your choice :";
    int choice2;
    cin >> choice2;
    return choice2;
}
int menu3() {
    int choice3;
    cout << "\n\t\t0 - Exit ";
    cout << "\n\t\t1 - Elementary ";
    cout << "\n\t\t2 - High level ";
    cout << "\n\t\tEnter your choice :  ";
    cin >> choice3;
    return choice3;
}
int menu_admin() {
    int choice;
    cout << "\n\t0 - Exit \n";
    cout << "\t1 - Add new profile  \n";
    cout << "\t2 - Delete profile  \n";
    cout << "\t3 - Add new task \n";
    cout << "Enter your choice : ";
    cin >> choice;
    return choice;

}
struct Question
{
    string question = " ", answers = " ";  int answer = 0;
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
        questions[0].answers = "1) C ++ was created in 1979 : \n1 - yes   2 - no\n\n";
        questions[0].answer = 2;

        questions[1].answers = "2) C ++ is object oriented : \n1 - yes   2 - no\n\n";
        questions[1].answer = 1;

        questions[2].answers = "3) how many bytes char contains : \n1 - 1 byte   2 - 8 bytes\n\n";
        questions[2].answer = 1;

        questions[3].answers = "4) how many bytes int contains :  \n1 - 2 bytes   2 - 16 bytes\n\n";
        questions[3].answer = 2;

        questions[4].answers = "4) how many bytes long contains : \n1 - 2 bytes   2 - 4 bytes\n\n";
        questions[4].answer = 1;

        questions[5].answers = "4) how many bytes float contains : \n1 - 4 bytes   2 - 16 bytes\n\n";
        questions[5].answer = 1;

        for (int i = 0; i < count_of_questions; ++i)
        {
            cout << questions[i].question;
            cout << questions[i].answers;
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
        count_of_questions = 6;
        right = 0; wrong = 0; res = 0;  mark = 12;
    }
    void test_All_programing() {

        questions.resize(count_of_questions);
        questions[0].question = "\nThere are 6  questions in this test : \n";
        questions[0].answers = "1) C ++ was created in 1979 : \n1 - yes   2 - no\n\n";
        questions[0].answer = 2;

        questions[1].answers = "2) C ++ is object oriented : \n1 - yes   2 - no\n\n";
        questions[1].answer = 1;

        questions[2].answers = "3) how many bytes char contains : \n1 - 1 byte   2 - 8 bytes\n\n";
        questions[2].answer = 1;

        questions[3].answers = "4) how many bytes int contains :  \n1 - 2 bytes   2 - 16 bytes\n\n";
        questions[3].answer = 2;

        questions[4].answers = "4) how many bytes long contains : \n1 - 2 bytes   2 - 4 bytes\n\n";
        questions[4].answer = 1;

        questions[5].answers = "4) how many bytes float contains : \n1 - 4 bytes   2 - 16 bytes\n\n";
        questions[5].answer = 1;

        for (int i = 0; i < count_of_questions; ++i)
        {
            cout << questions[i].question;
            cout << questions[i].answers;
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
        count_of_questions = 6;
        right = 0; wrong = 0; res = 0;  mark = 12;
    }
    void test_elementary_math() {

        questions.resize(count_of_questions);
        questions[0].question = "\nThere are 6  questions in this test : \n";
        questions[0].answers = "1) 2+ 2 \n1 - 4   2 - 5    3 - 22   \n\n";
        questions[0].answer = 1;

        questions[1].answers = "2) 2 + 8 \n1 - 10   2 - 19   3 - 9   4 - 6   \n\n";
        questions[1].answer = 2;

        questions[2].answers = "3) 2*2 \n1 - 16   2 - 17   3 - 4   4 - 2\n\n";
        questions[2].answer = 3;

        questions[3].answers = "4) 4+6  \n1 - 96   2 - 4   3 - 10 \n\n";
        questions[3].answer = 3;

        questions[4].answers = "4) 72-2 \n1 - 70   2 - 64   3 - 49   4 - 7*7\n\n";
        questions[4].answer = 1;

        questions[5].answers = "4) 125-100 \n1 - 25   2 - 0   3 - 100  4 - 4 \n\n";
        questions[5].answer = 1;


        for (int i = 0; i < count_of_questions; ++i)
        {
            cout << questions[i].question;
            cout << questions[i].answers;
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
        count_of_questions = 6;
        right = 0; wrong = 0; res = 0;  mark = 12;
    }
    void test_high_math() {

        questions.resize(count_of_questions);

        questions[0].answers = "1) √(256^2) \n1 - 256   2 - 65536    3 - 512   \n\n";
        questions[0].answer = 1;

        questions[1].answers = "2) 2 + 8 \n1 - 10   2 - 19   3 - 9   4 - 6   \n\n";
        questions[1].answer = 1;

        questions[2].answers = "3) 2 log(8 × 8^8) \n1 - 16   2 - 17   3 - 8   4 - 2\n\n";
        questions[2].answer = 1;

        questions[3].answers = "4) 4^6  \n1 - 4096   2 - 409   3 - 496 \n\n";
        questions[3].answer = 1;

        questions[4].answers = "4) 7^2 \n1 - 70   2 - 64   3 - 49   4 - 7*7\n\n";
        questions[4].answer = 3;

        questions[5].answers = "4) 125^2 \n1 - 15625   2 - 156255   3 - 1525  4 - 5625 \n\n";
        questions[5].answer = 1;


        for (int i = 0; i < count_of_questions; ++i)
        {
            cout << questions[i].question;
            cout << questions[i].answers;
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
        count_of_questions = 6;
        right = 0; wrong = 0; res = 0;  mark = 12;
    }
    void test_elementary_films() {

        questions.resize(count_of_questions);
        questions[0].question = "\nThere are 6  questions in this test : \n";
        questions[0].answers = "1) Do you like watching films  \n1 - yes   2 - no  \n\n";
        questions[0].answer = 1;

        questions[1].answers = "2) A film, also called a movie  \n1 - yes  2- no  \n\n";
        questions[1].answer = 1;

        questions[2].answers = "3) The stroboscopic animation principle was introduced in 1833  \n1 - yes   2 - no\n\n";
        questions[2].answer = 1;

        questions[3].answers = "4) Photography was introduced in 1839  \n1 - yes 2- no \n\n";
        questions[3].answer = 1;

        questions[4].answers = "4)  Around the turn of the 20th century,films started stringing several scenes together to tell a story. \n1 - yes  2 - no\n\n";
        questions[4].answer = 1;

        questions[5].answers = "4) Digital 3D projection largely replaced earlier problem-prone 3D film systems and has become popular in the early 2010s \n1 - yes   2 - no \n\n";
        questions[5].answer = 1;


        for (int i = 0; i < count_of_questions; ++i)
        {
            cout << questions[i].question;
            cout << questions[i].answers;
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
        count_of_questions = 6;
        right = 0; wrong = 0; res = 0;  mark = 12;
    }
    void test_high_films() {

        questions.resize(count_of_questions);
        questions[0].question = "\nThere are 6  questions in this test about Angelina Jolie : \n";
        questions[0].answers = "1)Ahe is an amerian singer , isn't it \n1 - yes 2 - no   \n\n";
        questions[0].answer = 1;

        questions[1].answers = "2) How old she is  \n1 - 10   2 - 19   3 - 89   4 - 46   \n\n";
        questions[1].answer = 4;

        questions[2].answers = "3) Where does she live \n1 - New York   2 - Los angeles  2 - I don't know   2 - I really don't know\n\n";
        questions[2].answer = 2;

        questions[3].answers = "4) Has she got an oscar \n1 - yes  2 - no \n\n";
        questions[3].answer = 1;

        questions[4].answers = "4) Her high is \n1 - 1,70   2 - 1,64   3 - 1,49   4 - 1,69\n\n";
        questions[4].answer = 4;

        questions[5].answers = "4) She has been married 3 times \n1 - yes   2 - no   3 - 2 times  4 - once \n\n";
        questions[5].answer = 1;


        for (int i = 0; i < count_of_questions; ++i)
        {
            cout << questions[i].question;
            cout << questions[i].answers;
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
class guest {
    string password, login;
    map<string, list<guest> > m ;
public:
    guest() { login = password = " "; }

    guest(string password, string login) {
        this->login = login;
        this->password = password;
    }
    void set() {
        cout << "Enter login : ";
        cin >> login;
        cout << "Enter  password  : ";
        cin >> password;
    }
    void print()const {
        cout << "login : " << login << "\n";
        cout << "password  : " << password << "\n";
    }

    string get_pass() {
        return password;
    }
    string get_login() {
        return login;
    }


};
class admin {
    map<string, list<guest>> m;
public:
    void remove_login(string login) {
        if (m.find(login) == m.end()) {
            cout << "Not Found\n";
        }
        else {
            auto it = m.find(login);
            it->second.clear();
            m.erase(it);
            cout << "Delete\n";
        };
    }
    void add_new_test() {
        string test, questions;
        cout << "Enter test name : ";
        cin >> test;
        cout << "Do you want to add questions for test :\n 1 - yes  2 - no  ";
        int yes;
        cin >> yes;
        if (yes) {
            cout << "Enter how many quetstions you want : ";
            int count;
            cin >> count;
            for (int i = 0; i < count; i++) {
                cout << "Enter quetion number  " << i << " :\n";
                cin >> questions;

            }
        }
    }


};

class LogPass {
    string Login;
    string Password;
public:

    LogPass(string L, string P)
    {
        Login = L;
        Password = P;
    }
    void login_user() {
        ofstream fout("Registration.txt", ios::app); 

        if (!fout) cout << "Cannot open file\n";
        else {
            cout << "\n\n";
            cout << "\t----------------" << " Registeration " << "----------------" << endl;
            cout << "Login: ";
            cin >> Login;
            cout << "password: ";
            cin >> Password;

            cout << "\n\n";
            cout << "\n\n";
            cout << "Registered Successfully!" << "\n";
            cout << "\n\n";
            fout << " " << Login << "  " << Password<<"  \n";
        }
        fout.close();
        string line;

        ifstream in("Registration.txt"); 
        if (in.is_open())
        {
            while (getline(in, line))
            {
                cout << line << "\n\n\n";
            }
        }
        else {
            cout << " error";
        }
        in.close();
    }
    int acces(LogPass l, LogPass p) {
        return  (Login == l.Login && Password == p.Password);
    }
};




int main() {
   
    tests t; 
    string login, password;
    LogPass l(login, password);
    LogPass user(login, password);
    bool  acc = false;
    acc = user.acces(l, l);

    switch (true) {
    case 1:
        l.login_user();
        cout << "\t----------------" << " Login User " << "----------------" << "\n";
        cout << "Login  ";
        cin >> login;
        cout << "Password  ";
        cin >> password;

        if (acc == true) {
            cout << "\n" << "loged in Successfully!" << "\n";
            cout << "WELCOME  " << login << " !";
        }
        else {
            cout << "There is no account with this log ";
            break;
        }
        switch (menu2()==1) {
            if (!menu2())break;
        case 1:
            ////////////////////////////////////////
            do {
                if (!menu2())break;
                switch (menu3()) {
                case 1:
                    t.test_programing(); break;
                case 2:
                    t.test_All_programing(); break;
                }break;
            } while (true);
        case 2:
            ////////////////////////////////////////
            do {
                if (!menu2())break;
                switch (menu3()) {
                case 1:
                    t.test_elementary_math(); break;
                case 2:
                    t.test_high_math(); break;
                }break;
            } while (true);
        case 3:
            ////////////////////////////////////////
            do {
                if (!menu2())break;
                switch (menu3()) {
                case 1:
                    t.test_elementary_films(); break;
                case 2:
                    t.test_high_films();  break;
                }break;
            } while (true);
        }
    
    }

    switch (menu1() == 2) {
    case 1:
        ///////////////////// admin
        admin a; string delete_log;
        LogPass p("2", "2");

        l.login_user();
        cout << "\t----------------" << " Login Admin " << "----------------" << "\n";
        cout << "Login  ";
        cin >> login;
        cout << "Password  ";
        cin >> password;
        LogPass admin(login, password);
        bool  acc = false;
        acc = admin.acces(p, p);
        if (acc) {
            cout << "\n" << "loged in Successfully!" << "\n";  cout << "WELCOME  " << login << " !";
        }
        else {
            cout << "There is no account with this login ";
            break;
        }
        switch (menu_admin()) {
        case 0:
            menu2();
        case 1:
            cout << "Enter login : ";
            cin >> login;
            cout << "Enter password : ";
            cin >> password;
            break;
        case 2:
            cout << "Enter login which you want to delete : ";
            cin >> delete_log;
            a.remove_login(delete_log);
                break;
        case 3: 
            a.add_new_test();
            break;

        }while (menu1() == 2);


    }



    return 0;
}
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class LoginManager {
public:
    string userNameAttempt;
    string passWordAttempt;
    LoginManager() {
        accessGranted = 0;
    }

    void login() {
        cout << "WELCOME PLEASE SIGN IN\nUsername:";
        cin >> userNameAttempt;
        if (userNameAttempt == userName) {
            cout << "Password:";
            cin >> passWordAttempt;
            if (passWordAttempt == passWord) {


                cout << "WELCOME TO NEVERMORE ACADEMY SIS!";
                cout << "IN ORDER TO HELP YOU WE ENCOURAGE YOU TO CHOOSE YOUR OPTION BELOW";
            }
        }
    }

private:
    string passWord = "12345";
    string userName = "Aliyah";
    bool accessGranted;
};
int main(void)
{

    LoginManager loginManagerObj;
    loginManagerObj.login();





    int option;
    double yes, no;
    int option1;
    string emailadd;

    string courses[] = { "*INFORMATION TECHNOLOGY\n","*COMPUTER ENGINEERING\n","*COMPUTER SCIENCE\n","\t*ACCOUNTANT" };
    do
    {
        cout << "\n\t*************MENU****************";
        cout << "\n\t* *";
        cout << "\n\t* 1. Check Student Inforamation *";
        cout << "\n\t* 2. Check Student Grade *";
        cout << "\n\t* 3. Check Schools Anouncements *";
        cout << "\n\t* 4. Exit *";
        cout << "\n\t* *";
        cout << "\n\t* *";
        cout << "\n\t*********************************";
        cout << "\n\t Please choose an option: ";
        cin >> option;
        switch (option) {
        case 1: cout << "\n\t Your Informations is: " << endl;
            cout << "\n\t Name : ALIYAH MACY B. LARA" << endl;
            cout << "\n\t Course: DIPLOMA IN COMPUTER ENGINEERING TECHNOLOGY" << endl;
            cout << "\n\t Year Level: Second year" << endl;
            cout << "\n\t Address: Dela Paz Binan, Laguna" << endl;
            cout << "\n\t Student Number: 2021-00525-BN-0" << endl;
            cout << "\n\t Gender: Female" << endl;
            cout << "\n\t Date of Birth: September 11, 2002" << endl;
            cout << "\n\t Email Address: aliyahlara7@gmail.com" << endl;
            break;
        case 2: cout << "\n\t FIRST SEMESTRAL GRADES" << endl;
            cout << "\n\t CALCULUS : 88 " << endl;
            cout << "\n\t WEB PROGRAMMING: 85" << endl;
            cout << "\n\t PHYSICS FOR ENGINEERS: 87" << endl;
            cout << "\n\t OBJECT ORIENTED PROGRAMMING: 85" << endl;
            break;
        case 3:
            cout << "\n\t ANNOUNCEMENT !!!";

            cout << "\n\t ENROLLMENT WILL OFFICIALLY CLOSED FEBRUARY 02, 2023" << endl;
            break;
        default: if (option != 4)
            cout << "\n\tThank you! Please don't miss the deadline." << endl;;
            break;
        }
    } while (option != 4);
    cout << "\nONLINE ENROLLMENT IS ONGOING!\nFIRST 50 ENROLLEES WILL HAVE DISCOUNT!\COURSES OFFERED\n\n";
    cout << courses[0];
    cout << courses[1];
    cout << courses[2];
    cout << courses[3];
    cout << "\n\n\n Do you still want to continue?\n\n ";
    do
    {
        cout << "\n\t*********************************";
        cout << "\n\t* *";
        cout << "\n\t* *";
        cout << "\n\t* 1. YES *";
        cout << "\n\t* 2. NO *";
        cout << "\n\t* 3. EXIT *";
        cout << "\n\t* *";
        cout << "\n\t* *";
        cout << "\n\t*********************************";
        cout << "\n\t Please choose an option: ";
        cin >> option1;
        switch (option1) {
        case 1: cout << "\n\tTo continue with our program you only need to give your email address so that we can inform you." << endl;


            cout << "Enter your email address:";
            cin >> emailadd;

            cout << "Thank you!";
            break;

        case 2: cout << "\n\tTHANK YOU FOR RESPONDING" << endl;
            break;

        default: if (option != 4)
            cout << "\n\tThank you!." << endl;;
            break;
        }
    } while (option != 4);
    return 0;

}

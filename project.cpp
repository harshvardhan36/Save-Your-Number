#include "iostream"
#include "string"
#include "time.h"
#include "cstdlib"
#include "ctime"
using namespace std;

void wait(int seconds)
{
    clock_t endwait;
    endwait = clock() + seconds * CLOCKS_PER_SEC;
    while (clock() < endwait)
    {
    }
}
int main()
{
    srand(static_cast<unsigned int>(time(0)));

    int SecretNumber = rand() % 100 + 1;

    string your_name, friend_name, God_name;
    int value = SecretNumber / 2;
    cout << "Welcome to the program\n Please enter your name below\n>";
    getline(cin, your_name);
    wait(1);
    cout << "Welcome! " << your_name << " to this game\n";
    wait(3);
    cout << "Before starting the game I would like to ask you one of your friend's name\n";
    wait(6);
    cout << "please enter your friend name\n>";
    getline(cin, friend_name);
    cout << "Thanks for letting us know. It will be use in game.\n";
    wait(3);
    cout << "Whom you make 'JUSTICE'? 'GOD' or any your known one?\nIF any please enter his/her name\n>";
    getline(cin, God_name);
    if (God_name == "GOD" || God_name == "God" || God_name == "god")
    {
        cout << "Please choose a Secret Number between 1 to 100. \n'Choosing lowest no. help in future'\n ";
        wait(5);
        cout << "KEEP THE CHOOSEN NUMBER CONFEDENTIAL \n";
        wait(2);
        cout << "Now take the same 'SECRET' number from " << friend_name << endl;
        wait(4);
        cout << "Now add the both Number\n";
        wait(6);
        cout << "Now i am giving you " << SecretNumber << ". Add it\n";
        wait(7);
        cout << "Now split the numbers into two parts.\n";
        wait(4);
        cout << "Give one part to GOD. \nNow you have half part\n";
        wait(3);
        cout << "Now return the number which you have taken from " << friend_name << endl;
        wait(3);
        cout << "Your 'secret Number - taken no. from friend'\n";
        wait(4);
        cout << "Now you have " << value << " left.\n";
        wait(2);
        cout << "Hope you liked it.\nMade with love by Harsh vardhan";
    }
    else
    {
        cout << "Please choose a Secret Number between 1 to 100. \n'Choosing lowest no. help in future'\n ";
        wait(5);
        cout << "KEEP THE CHOOSEN NUMBER CONFEDENTIAL \n";
        wait(2);
        cout << "Now take the same 'SECRET' number from " << friend_name << endl;
        wait(4);
        cout << "Now add the both Number\n";
        wait(6);
        cout << "Now i am giving you " << SecretNumber << ". Add it\n";
        wait(7);
        cout << "Now split the numbers into two parts.\n";
        wait(4);
        cout << "Give one part to " << God_name << "\nNow you have half part\n";
        wait(3);
        cout << "Now return the number which you have taken from " << friend_name << endl;
        wait(3);
        cout << "Your 'secret Number - taken no. from friend'\n";
        wait(4);
        cout << "Now you have " << value << " left.\n";
        wait(2);
        cout << "Hope you liked it.\nMade with love by Harsh vardhan";
    }

    return 0;
}
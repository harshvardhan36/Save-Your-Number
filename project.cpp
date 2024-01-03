#include "iostream" //For Input & Output
#include "string"   //For using string
#include "time.h"   //For time delay
#include "cstdlib"  //For generating random number
#include "ctime"    //For using time function in 'rand()'
using namespace std;

// Calling wait function
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
    // using srand for pseudo-random number generator.
    srand(static_cast<unsigned int>(time(0)));

    /*initiating SecretNumber which is equal to random number % 100 + 1
     Here we are taking 100 so that the random number will be between 1 to 100*/
    int SecretNumber = rand() % 100 + 1;

    /*Creating a string variable Your_name for storing the name of the user.
     Creating a string variable friend_name for storing the name of the user's friend
     Creating a string variable God_name for storing the name of the user's Justice*/
    string your_name, friend_name, God_name;

    float value = SecretNumber / 2;
    cout << "Welcome to the program\n Please enter your name below\n>";

    //Using getline function you can store the full name without using '_' for ex:- 'Harsh Vardhan'
    getline(cin, your_name);

    // using wait function we can delay the responding time of the compiler
    wait(1);
    cout << "Welcome! " << your_name << " to this game\n";
    wait(3);
    cout << "Before starting the game I would like to ask you one of your friend's name\n";
    wait(4);
    cout << "please enter your friend name\n>";
    getline(cin, friend_name);
    cout << "Thanks for letting us know. It will be used in game.\n";
    wait(2);
    cout << "Whom you make 'JUSTICE'? 'GOD' or any of your known ones?\nIF any please enter his/her name\n>";
    getline(cin, God_name);
    if (God_name == "GOD" || God_name == "God" || God_name == "god")
    {
        cout << "Please choose a Secret Number between 1 to 100. \n'Choosing lowest no. help in future'\n ";
        wait(4);
        cout << "KEEP THE CHOSEN NUMBER CONFIDENTIAL \n";
        wait(2);
        cout << "Now take the same 'SECRET' number from " << friend_name << endl;
        wait(2);
        cout << "Now add the both Number\n";
        wait(3);
        cout << "Now i am giving you " << SecretNumber << ". Add it\n";
        wait(4);
        cout << "Now split the numbers into two parts.\n";
        wait(2);
        cout << "Give one part to GOD. \nNow you have half part\n";
        wait(3);
        cout << "Now return the number which you have taken from " << friend_name << endl;
        wait(2);
        cout << "Your 'Remaining Number - taken no. from friend'\n";
        wait(4);
        cout << "Now you have " << value << " left.\n";
        wait(2);
        cout << "Hope you liked it.\nMade with love by Harsh Vardhan";
    }
    else
    {
        cout << "Please choose a Secret Number between 1 to 100. \n'Choosing lowest no. help in future'\n ";
        wait(4);
        cout << "KEEP THE CHOSEN NUMBER CONFIDENTIAL \n";
        wait(2);
        cout << "Now take the same 'SECRET' number from " << friend_name << endl;
        wait(2);
        cout << "Now add the both Number\n";
        wait(3);
        cout << "Now i am giving you " << SecretNumber << ". Add it\n";
        wait(4);
        cout << "Now split the numbers into two parts.\n";
        wait(2);
        cout << "Give one part to " << God_name << "\nNow you have half part\n";
        wait(3);
        cout << "Now return the number which you have taken from " << friend_name << endl;
        wait(2);
        cout << "Your 'Remaining Number - taken no. from friend'\n";
        wait(4);
        cout << "Now you have " << value << " left.\n";
        wait(2);
        cout << "Hope you liked it.\nMade with love by Harsh Vardhan";
    }

    return 0;
}

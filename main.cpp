#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Welcome to the boyfriend/girlfriend Application" << endl;

    string name;
    int age;
    string skinColor;
    string kids;
    string bodyShape;
    string Gender;

    cout << "What is your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have kids: ";
    cin >> kids;

    cout << "Which body shape would you say you fit in (slender, medium, chubby or fat): ";
    cin >> bodyShape;

    cout << "What is your gender: ";
    cin >> Gender;

    cout << "What is your skin Color (black, brown, yellow bone or white): ";
    cin >> skinColor;

    bool match = false;

    if (Gender == "female" && bodyShape == "chubby" && kids == "no" && skinColor == "yellow bone" && age >= 20 && age <= 30){

        match = true;
    }

    else if (Gender == "male" && bodyShape == "medium" && kids == "no" && skinColor == "black" && age >= 25 && age <= 30){

        match = true;
    }


    if (match){
        cout << "Congratulations, you are a perfect match!" << endl;
    }


    else{
        cout << "Sorry, you are not a match!" << endl;
    }

    return 0;
}

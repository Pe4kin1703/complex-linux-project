#include <iostream>
#include <string>
#include <convertor/upper.hpp>
#include <convertor/lower.hpp>
#include <climits>
#include <limits>

using namespace std;

void processInput()
{
    string inputText;
    int option = INT_MIN;
    cout<<"Please choose the option:\n \
            1) Convert text to upper case.\n \
            2) Convert text to lower case.\n \
            Choose your option.\n";
    cin >> option;
    cout << "Enter the text: \n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, inputText);
    cout << "User's text: " << inputText;

    if(option == 1) cout << "Text in upper case: " << toUper(inputText) << endl;
    else cout << "Text in lower case: " << toLower(inputText) << endl;

}

int main()
{
    processInput();

}
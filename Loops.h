#include <iostream>

using namespace std;

int main() {

int number;
string description;
int exit;

cout << "Welcome to your inventory system!\n";

do {

cout << "What would you like to add to inventory?\n";
cin >> description;

cout << "How many do you need to add?\n";
cin >> number;

cout << "To exit enter -1.";
cin >> exit;

} while (exit >=0);


return 0;

}
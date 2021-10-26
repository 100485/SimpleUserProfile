#include <iostream>
#include <string>
using namespace std;

int main()

{
//My User Profile.

string firstName;
string lastName;
string fullName;
string favoriteFood;
string favoriteMovie;

cout << "Input First Name:";
cin >> firstName;

cout << "Input Last Name:";
cin >> lastName;

fullName = firstName + lastName;

cout << "Input Favorite Food:";
cin.ignore();
getline(cin, favoriteFood);

cout << "Input Favorite Movie:";
//cin.ignore();
getline(cin,favoriteMovie);

cout<<"\n";
cout << ".....MY PROFILE.....\n";
cout << "First Name: " <<firstName << "\n";
cout << "Last Name: " <<lastName << "\n";
cout << "Full Name: " <<fullName << "\n";
cout << "Favotite Food: " <<favoriteFood << "\n";
cout << "Favorite Movie: " <<favoriteMovie << "\n";
cout <<"\n\n";

return 0;

}
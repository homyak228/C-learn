// Import section
#include <iostream>
#include <string>
// Config section
using std::cin;
using std::cout;
using std::endl;
using std::string;

// main function
int main() {
  char type;
  cout << "Enter mode: (l/r): "; // Getting mode
  cin >> type;

  typedef unsigned short int usint; // Creating a new type

  string name; // Creating variables
  string nameOrEmail;
  string password;
  string email;
  usint age;

  if (type == 'r') { // Registering code
    cout << "\tRegister form:" << endl;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your password: ";
    cin >> password;
    cout << "Enter your email: ";
    cin >> email;
    cout << "Enter your age: ";
    cin >> age;
    cout << "\tYou`ve been registered succefully!" << endl;
  } else if (type == 'l') { // Logging in code
    cout << "Enter user data to login: " << endl;
    cout << "Enter your name/email: ";
    cin >> nameOrEmail;
    cout << "Enter your password: ";
    cin >> password;

    if ((nameOrEmail == "Kate" && password == "mrkate") || (nameOrEmail == "Kate@gmail.com" && password == "mrkate")) { // Basic users
      cout << "Hello, Kate!" << endl;
    } else if ((nameOrEmail == "Bob" && password == "sirbob") || (nameOrEmail == "bobsmail@gmail.com" && password == "sirbob")) {
      cout << "Hello, Sir Bob, What do you want?" << endl;
    } else if ((nameOrEmail == "Nata" && password == "Nata7488") || (nameOrEmail == "dnn1983@gmail.com" && password == "Nata7488")) {
      cout << "Hi, Mom!" << endl;
    } else if ((nameOrEmail == "Alex" && password == "porgnez") || (nameOrEmail == "grebenchikov_al@gmail.com" && password == "poragnez")) {
      cout << "How do you do, Poragnez?" << endl;
    } else if (nameOrEmail == "guest" && password == "guest" ) {
      cout << "Hello, Guest! (btw, dou you wnat to register?)" << endl;
    } else { // Handle error
      cout << "Sorry, but our program doesn`t know user: " << nameOrEmail << " with password: " << password << "!" << endl;
    }

  } else { // Error handle
    cout << "Sorry, but our program doesn`t know this argument." << endl;
  }


  cout << "Thanks for using our program!" << endl; // Out message

  return 0; // Quit program
}

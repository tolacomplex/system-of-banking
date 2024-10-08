// System sign in for users
#include <iostream>
#include <string>
using namespace std;
// Profiles of user when they sign in
void signIn(int password, string f_name,string l_name, string email, string gender, string birthday)
{
  cout << "\n\n \t\t\t\t\t\t" << "YOUR PROFILE" << endl;
  cout << "\t\t\t\t" << "------------------------------------------------" << endl;
  cout << "\t\t\t\t" << "f_name : " << f_name << endl;
  cout << "\t\t\t\t" << "l_name : " << l_name << endl;
  cout << "\t\t\t\t" << "email: " << email << endl;
  cout << "\t\t\t\t" << "password: " << password << endl;
  cout << "\t\t\t\t" << "gender: " << gender << endl;
  cout << "\t\t\t\t" << "birthday: " << birthday << endl;
}
// Profiles of user sign in provate account
void acc(string acc_name, int acc_password) {
  cout << "\n\n \t\t\t\t\t\t YOUR PRIVATE ACCOUNT" << endl;
  cout << "\t\t\t\t" << "---------------------------------------------------" << endl;
  cout << "\t\t\t\t" << "Acc_name: " << acc_name << endl;
  cout << "\t\t\t\t" << "Acc_password: " << acc_password << endl;
  cout << "\n\n \t\t" << "Account is private !" << endl;
}

  int main(void) {
  system("clear");
  int password;
  string f_name;
  string l_name;
  string email;
  string gender;
  string birth;
  char profile;
// Declear for private account
  string acc_name;
  int acc_password;
  int i = 1;

  cout << "\n\n \t\t\t" << "Welcome to company sign in: " << endl;
  cout << "\t\t" << "|--------------------------------------------------------|" << endl;
  cout << "\t\t" << "|  1. sellect for common account                         |" << endl;
  cout << "\t\t" << "|  2. sellect for private account                        |" << endl;
  cout << "\t\t" << "|  3. check profile of account when sign in already      |" << endl;
  cout << "\t\t" << "|  4. check private of account when sign in already      |" << endl;
  cout << "\t\t" << "|  5. sellect for other account                          |" << endl;
  cout << "\t\t" << "|--------------------------------------------------------|" << endl;
  // loop
  do {
     cout << "\n\n Choice your number: ";
     cin >> profile;
     i++;
  // choose your option
  switch (profile)
  {
  case '1':
    cout << "\n\n \t\t\t\t\t\t" << "PLEASE REGISTER" << endl;
    cout << "\t\t\t\t" << "------------------------------------------------" << endl;
    cout << "\t\t\t\t" << "First name: ";
    cin >> f_name;
    cout << "\t\t\t\t" << "Last name: ";
    cin >> l_name;
    cout << "\t\t\t\t" << "Email: ";
    cin >> email;
    cout << "\t\t\t\t" << "Password: ";
    cin >> password;
    cout << "\t\t\t\t" << "Gender: ";
    cin >> gender;
    cout << "\t\t\t\t" << "Birth: ";
    cin >> birth;
    cout << "\n\n \t\t\tRegister is Succesful!" << endl;
    break;
  case '2':
    cout << "\n\n \t\t\t\t\t\t REGISTER PRIVATE ACCOUNT" << endl;
    cout << "\t\t\t\t" << "---------------------------------------------------" << endl;
    cout << "\t\t\t\t" << "Acc_name: ";
    cin >> acc_name;
    cout << "\t\t\t\t" << "Acc_password: ";
    cin >> acc_password;
    cout << "\n\n \t\t" << "Account is private !" << endl;
  break;
  case '3':
    signIn(password, f_name, l_name, email, gender, birth);
    break;
  case '4':
    acc(acc_name, acc_password);
  break;
  goto jump;
  default: 
    jump:
  break;
  }
  } while (i <= 5);
}
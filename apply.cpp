#include <iostream>
using namespace std;

int main(void) {
  system ("clear");
  string name, password;
  int code = 0101;

  cout << "Input name: ";
  cin >> name;
  cout << "Input password: ";
  cin >> password;

  if (name=="tola") {
    if (password=="1111") {
      cout << "Please verify code" << endl;
      if (code==0101) {
        cout << "Your code: ";
        cin >> code;
        cout << "login is successful" << endl;
      }
    }
  } else if (name == "Dara") {
    if (password == "2222") {
      cout << "Please verify" << endl;
        if (code ==1001) {
          cout << "Your code: ";
          cin >> code;
          cout << "Successful" << endl;
        }
    }
  } else {
    cout << "wrong" << endl;
  }
}
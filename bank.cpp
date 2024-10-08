// System banking
#include <iostream>
#include <string>
using namespace std;
class people{
  private:
    char account[15];
    int id;
    int phoneNumber;
  protected:
    double sum, paid, number;
  public:
    string message;
    public:
      void personal(char account[15], int id, int phoneNumber) {
        this-> account[15] = account[15];
        this-> id = id;
        this-> phoneNumber = phoneNumber;
        cout << "\tYour account : " << account << endl;
        cout << "\tYour id : " << id << endl;
        cout << "\tYour phone number : " << phoneNumber << endl;
        cout << "=======================================================" << endl;
      } 
      int getperson() {
        return (id != phoneNumber);
      }
};
class option: public people {
  public:
    void standard(double sum, double interest, double tax = 5) {
      this-> sum = sum;
      this-> paid = interest;
      this-> number = tax;
      if (sum >= 20000 && sum <= 50000) {
         double result= sum * interest - tax;
         cout << "Your money saving recieve per month : " << result << endl;
      } else if (sum >= 10000 && sum <= 19999) {
         double overall= sum * interest - tax; 
         cout << "Your money saving recieve per month : " << overall << endl;
      } else if (sum >= 5000 && sum <= 99999) {
         double sumup= sum * interest - tax;
         cout << "Your money saving recieve per month : " << sumup << endl;
      } else {
          double save= sum * interest - tax;
          cout << "Your money saving recieve per month : " << save << endl;
      }
    }
};
int main(void) {
  char name[15];
  int id;
  int phone;
  option bank;
  cout << "=====================================================" << endl;
  cout << "Please input follow by require" << endl;
  cout << "\nName : "; cin >> name[15];
  cout << "\nID : "; cin >> id;
  cout << "\nName : "; cin >> phone;
}
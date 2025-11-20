#include <iostream>
using namespace std;

int add(int a, int b){
  return a+b;
}

int subtract(int a, int b){
  return a-b;
}

void menu(){
    cout << "1. Add\n2. Subtract\n";

int main(){
  int choice;
  menu()
  cin >> choice;
  int x,y;
  cout << "Enter 2 numbers\n";
  cin >> x >> y;

  if (choice == 1)
        cout << add(x, y);
    else
        cout << subtract(x, y);
}

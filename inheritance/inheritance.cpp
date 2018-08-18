// An example of inheritance using the public scope
// all base class public members become accessable
// to the derived class.


#include <iostream>
using namespace std;

class base{
  int i, j;
public:
  void set(int a, int b) {i=a; j=b;}
  void show() { cout << i << " " << j << "\n"; }
};

// delcaring this private woud make the set() and show() members inaccessable
// and would not compile
class derived : public base{
  int k;
public:
  derived( int x) { k=x;}
  void showk() { cout << k << "\n"; }

};

int main()
{
  derived object(3);

  object.set(1,2); // access member of the base class
  object.show();   // access member of the base class

  object.showk();  // uses member of derived class


  return 0;
}

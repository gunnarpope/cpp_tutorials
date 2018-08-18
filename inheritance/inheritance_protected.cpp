// gunnar pope
// 8/18/18

// An example of inheritance using the protected scope
// all base class public members become accessable
// to the derived class.

// The protected scope allows a class to inherit the private
// members of the base class and access them from the derived class


// see C++ Complete Reference.pdf for these examples
#include <iostream>
using namespace std;

class base{
protected:
  int i, j; // private  to base, but accessible by derived

public:
  void set(int a, int b) {i=a; j=b;}
  void show() { cout << i << " " << j << "\n"; }
};

// delcaring this private woud make the set() and show() members inaccessable
// and would not compile
class derived : public base{
  int k;
public:

  derived(int num) {k=num;}
  // derived may access base's i and j variables
  void setk()  { k=i*j;}
  void showk() { cout << k << "\n"; }

};

int main()
{

  derived ob(3);
  ob.set(5,6); // access member of the base class
  ob.show();   // access member of the base class


  ob.setk();
  ob.showk();  // uses member of derived class


  return 0;
}

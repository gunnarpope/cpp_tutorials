// how to use a reference parameter
// these are used to explicitly pass the pointer to
// a variable to allow for pass-by-Reference

#include <iostream>
using namespace std;

void neg(int &i); //make i a Reference

int main()
{
  int x;

  x = 10;
  cout << "x= " << x << ". The negative of x is ";
  neg(x);
  cout << x << "\n";

  return 0;
}

void neg(int &i)
{
  i = -i; // i is a reference and changes to i
          // will automatically change the argument
          // passed
}

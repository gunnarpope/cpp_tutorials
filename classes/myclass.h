#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>

using namespace std;

class Customer{
  private:
   string name;
   string ID;

  public:
   // the constructor
   Customer();

   // an overloaded constructor
   Customer(string username, string userID);

   void printname();
   void printID();
};
#endif

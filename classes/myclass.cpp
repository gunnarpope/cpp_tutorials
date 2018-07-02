#include <iostream>
#include <string>
#include "myclass.h"

using namespace std;


Customer::Customer(){name = ""; ID = "";}
Customer::Customer(string username, string userID)
{
  name = username;
  ID   = userID;
}

void Customer::printname() {  cout << "Name: " << name << "\n";}
void Customer::printID() {  cout << "ID: " << ID << "\n";}

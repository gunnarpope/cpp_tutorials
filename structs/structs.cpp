#include <iostream>
using namespace std;

#include "structs.h"

int main(){

  Profile user;
  user.firstname = "Gunnar";

  cout << "Hello, " << user.firstname << "\n";
  return 0;
}

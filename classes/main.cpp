#include <iostream>
#include <string>
#include "myclass.h"

using namespace std;

int main()
{

  Customer user("Tom", "8IENVO3VN10N4030V3NA0V303NVQ3");
  user.printname();
  user.printID();

  return 0;
}

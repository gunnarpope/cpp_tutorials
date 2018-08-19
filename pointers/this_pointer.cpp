// how to use the this pointer
// p344 C++CompleteGuide.pdf

/*
""The this pointer points to the object that invoked pwr( ). Thus, this –>b refers to that
object's copy of b. For example, if pwr( ) had been invoked by x (as in x(4.0, 2)), then
this in the preceding statement would have been pointing to x. Writing the statement
without using this is really just shorthand.""
*/

#include <iostream>
using namespace std;

class pwr{
	double b;
	int e;
	double val;
public:
	pwr(double base, int exp);
	double get_pwr() { return this->val; }
};

pwr::pwr(double base, int exp)
{
	b = base;
	this->e = exp;
	val = 1;
	if(exp==0) return;
	for (; exp > 0; exp--) {val = val * b;}
}

int main()
{
	pwr x(4.0, 2), y(2.5, 1), z(5.7, 0);

	cout << x.get_pwr() << '\n';
	cout << y.get_pwr() << '\n';
	cout << z.get_pwr() << '\n';

	return 0;
}

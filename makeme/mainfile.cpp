#include "mainfile.h"

void X::fun()
{
	A a;
	B b;
	C c;
	a.fun();
	b.fun();
	c.fun();
}

int main()
{
	X x;
	x.fun();
	return 1;
}

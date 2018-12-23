#include <iostream>
#include "folder1.h"
#include <folder2.h>
#include <folder3.h>

using namespace std;

class X: public A,public B, public C
{
	public:
		void fun();
};

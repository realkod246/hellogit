#include 'pupil.h'

using namespace std;

string pupil::getinit()
{
	return init;
}

void pupil::setinit(string p)
{
	init = p;
}

int pupil::getage()
{
	return age;
}

void pupil::setage(int a)
{
	age = a;
}


pupil::pupil (int a, string p) //construtor
{
	age = a;
	string = p;
}

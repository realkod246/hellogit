#include 'pupil.h'
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector <int> mypupil;
	
	mypupil.push_back ({4, "ST"});
	mypupil.push_back ({6, "DM"});
	mypupil.push_back ({9, "FG"});
	mypupil.push_back ({8, "CS"});
	
	cout << "Pupils:";
	
	for (unsigned int i = 0; i < mypupil.size(); i++){}
	
	cout << mypupil[i].getage() << " " << mypupil[i].getinit() << endl;
	
	return 0;
	
};

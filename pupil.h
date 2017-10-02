#ifndef PUPILCLASS_H
#define PUPILCLASS_H

	class pupil
	{
			private:
				int age;
				string init = " ";
				
			public:
				pupil (int a , string p);
				int getage();
				void setage(int);
				string getinit();
				void setinit(string);
	};
	#endif

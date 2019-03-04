#include <iostream>
using namespace std;


class student { 

private:
	static int counter;
	int id;
	int quizcapacity;
	float *quizscore;
	int quiztaken;
	float gpa;

public:
	student();
	student(int a,float b);
	student(const student &a);
	~student();
	void addquizscore(float a);
	void setgpa(float a) ;
	float getgpa() const;
	void print ()const;
	bool compare(student a);
	void updatescore(int index,float score);

};



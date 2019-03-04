#include "Header.h"
#include <iostream>
using namespace std;

int main(){
	//PART 1 && Part 2
student s1;		//creating a new object
bool a=false;
s1.addquizscore(10);	 //adding score
s1.addquizscore(3);		//adding score 
s1.addquizscore(7);		//adding score
s1.addquizscore(1);		//adding score
s1.print();
student s2(4,2);		//creating new object by giving capacity and gpa
student s3(s1);			//creating new object by copying
s3.updatescore(1,3);	//updating score
s3.updatescore(10,3);		//updating score
a=s1.compare(s2);		//comparing gpa of 2 objects
s3.setgpa(3.0);		//setting gpa
s1.print();			//printing
s3.print();		//printing
	












}



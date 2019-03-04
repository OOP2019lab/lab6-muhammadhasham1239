#include "Header.h"
#include <iostream>
using namespace std;


int student::counter=0;

student :: student(){         //simple constructor
 id=counter+1;
 quizscore=new float[3];
	for(int i=0;i<3;i++){
		quizscore[i]=0;
}
quizcapacity=3;
quiztaken=0;
gpa=0;
}

student :: student(int a,float b){        //a is quiz capacity and b is gpa
 id=counter+1;
 quizscore=new float[a];
	for(int i=0;i<a;i++){
        quizscore[i]=0;
}
quizcapacity=a;
quiztaken=0;
gpa=b;
}

student :: student(const student &a){             //copy constructor
 id=counter+1;
 quizcapacity=a.quizcapacity;
 quiztaken=a.quiztaken;
 gpa=a.gpa;
 if(quiztaken!=0){
		quizscore=new float[quizcapacity];
	for(int i=0;i<quiztaken;i++){
			quizscore[i]=a.quizscore[i];
			}
	}else
 {}
}


student :: ~student(){          //destructor function
counter=-1;
id=-1;
delete[]quizscore;
quizcapacity=-1;
quiztaken=-1;
gpa=-1;
}

void student :: addquizscore(float a){            //adding quiz score to array of quizzes
		if(quizscore!=nullptr && quiztaken<quizcapacity){
				quizscore[quiztaken]=a;
				quiztaken=quiztaken+1;
	}
	else{
		if(quizscore==nullptr && quiztaken<quizcapacity){
			quizscore=new float[quizcapacity];
			quizscore[0]=a;
			quiztaken=quiztaken+1;
		}
		if(quiztaken>=quizcapacity){
		cout<<"There is no space to add another quiz"<<endl;
		}
	}
}

void student :: setgpa(float a){          //setter function of gpa
	gpa=a;
}

float student :: getgpa() const{           //getter function of gpa
	return gpa;
}

bool student :: compare(student a){           //comparing gpa of two students
	if(gpa>a.gpa){
	return true;
	}
	else{
	return false;
	}
}

void student :: updatescore(int b,float a){          //a is score and b is index 
	if(quizscore!=nullptr && b<quizcapacity && b<quiztaken+1){
		quizscore[b-1]=a;
	}else{
		cout<<"Invalid inputs can't update quiz"<<endl;
	}
}

void student :: print()const{
cout<<"Student Id:"<<id<<endl;
cout<<"Student GPA:"<<gpa<<endl;
cout<<"quizz taken:"<<quiztaken<<endl;
for(int i=0;i<quiztaken;i++){
cout<<"Quiz "<<i<<" score:"<<quizscore[i]<<endl;
}
cout<<endl;
}

//______________________________PART 3__________________________________________//


void printStudentArray(student A[], int size) {
	for (int i = 0; i < size; i++)
		A[i].print();
}

student* gpagreater2(student A[], int size) {
	int c = 0;
	student *temp = new student[c];
	for (int i = 0; i < size; i++) {
		if (A[i].getgpa() > 2) {
			c++;
		}
	}
	for (int i = 0; i < size; i++) {
		if (A[i].getgpa() > 2) {
			temp[i] = A[i];
		}
	}
	return temp;
}
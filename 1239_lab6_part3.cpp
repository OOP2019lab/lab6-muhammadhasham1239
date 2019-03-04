#include<iostream>
#include "Header.h"

using namespace std;

void printStudentArray(student A[], int size);
student* gpagreater2(student A[], int size);

int main() {
	student A[3] = { student(3, 2.0) , student(3, 3), student(4, 2.33) };
	A[0].addquizscore(1); 	A[0].addquizscore(4); 	A[0].addquizscore(10);
	A[1].addquizscore(10); 	A[1].addquizscore(4); 	A[1].addquizscore(9);
	A[2].addquizscore(9); 	A[2].addquizscore(8); 	A[2].addquizscore(7);

	student ** A2 = new student*[4];
	A2[0]->addquizscore(1); 	A2[0]->addquizscore(4); 	A2[0]->addquizscore(10);
	A2[1]->addquizscore(10); 	A2[1]->addquizscore(4); 	A2[1]->addquizscore(9);
	A2[2]->addquizscore(9); 	A2[2]->addquizscore(8); 	A2[2]->addquizscore(7);
}
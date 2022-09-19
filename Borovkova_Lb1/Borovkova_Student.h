#ifndef BOROVKOVA_STUDENT
#define BOROVKOVA_STUDENT

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class Borovkova_Student {
protected:
	string name;
	int age;
	int grade;
	string group;

public:
	friend istream& operator >> (istream& in, Borovkova_Student* borovkova_student);
	friend ostream& operator << (ostream& out, Borovkova_Student* borovkova_student);
	friend ifstream& operator >> (ifstream& in, Borovkova_Student* borovkova_student);
	friend ofstream& operator << (ofstream& out, Borovkova_Student* borovkova_student);
};
#endif
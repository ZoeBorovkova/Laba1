#include "Borovkova_Student.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

istream& operator >> (istream& in, Borovkova_Student* borovkova_student) {
	in >> borovkova_student->name;
	in >> borovkova_student->age;
	in >> borovkova_student->grade;
	in >> borovkova_student->group;
	return in;
}

ostream& operator << (ostream& out, Borovkova_Student* borovkova_student) {
	out << borovkova_student->name << endl;
	out << borovkova_student->age << endl;
	out << borovkova_student->grade << endl;
	out << borovkova_student->group << endl;
	return out;
}

ifstream& operator >> (ifstream& in, Borovkova_Student* borovkova_student) {
	in >> borovkova_student->name;
	in >> borovkova_student->age;
	in >> borovkova_student->grade;
	in >> borovkova_student->group;
	return in;
}
ofstream& operator << (ofstream& out, Borovkova_Student* borovkova_student) {
	out << borovkova_student->name << endl;
	out << borovkova_student->age << endl;
	out << borovkova_student->grade << endl;
	out << borovkova_student->group << endl;
	return out;
}
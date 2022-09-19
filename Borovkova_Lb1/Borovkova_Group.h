#ifndef BOROVKOVA_STUDENT1
#define BOROVKOVA_STUDENT1

#include <iostream>
#include <fstream>
#include <vector>
#include "Borovkova_Student.h"

using namespace std;

class Borovkova_Group {
protected:
	vector<Borovkova_Student*> list;

public:
	void add(Borovkova_Student* borovkova_student);
	void show();
	void readFromFile(ifstream& in);
	void printIntoFile(ofstream& out);
	void clear();
};
#endif
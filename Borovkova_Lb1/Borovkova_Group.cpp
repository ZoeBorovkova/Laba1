#include "Borovkova_Student.h"
#include "Borovkova_Group.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void Borovkova_Group::add(Borovkova_Student* borovkova_student) {
	// переопределение формального параметра Borovkova_Student* borovkova_student = new Borovkova_Student();
	list.push_back(borovkova_student);
}

void Borovkova_Group::show() {
	for (int i = 0; i < list.size(); i++) {
		cout << list[i];
	}
}

void Borovkova_Group::readFromFile(ifstream& in) {
	int counter;
	in >> counter;
	for (int i = 0; i < counter; i++) {
		Borovkova_Student* borovkova_student = new Borovkova_Student();
		in >> borovkova_student;
		list.push_back(borovkova_student);
	}
}

void Borovkova_Group::printIntoFile(ofstream& out) { //здесь  out 
	out << list.size() << endl;
	for (int i = 0; i < list.size(); i++) {
		out << list[i];
	}
}

void Borovkova_Group::clear() {
	for (int i = 0; i < list.size(); i++) {
		list[i]->~Borovkova_Student();
	}
	list.clear();
}

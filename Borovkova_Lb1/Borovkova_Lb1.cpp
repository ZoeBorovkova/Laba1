#include "Borovkova_Student.h"
#include "Borovkova_Group.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	Borovkova_Group group;
	Borovkova_Student* borovkova_student = new Borovkova_Student();
	int x;
	ifstream file_into("in.txt");
	ofstream file_out("out.txt");

	do {
		cout << "Please input 1 if you want to choose add element" << endl;
		cout << "Please input 2 if you want to choose show the list" << endl;
		cout << "Please input 3 if you want to choose read the list from file" << endl;
		cout << "Please input 4 if you want to choose write the list into file" << endl;
		cout << "Please input 5 if you want to choose clear the list" << endl;
		cout << "Please input 6 if you want to exit" << endl;
		cin >> x;
		switch (x) {
		case 1:
			cout << "Please input element to add in list" << endl;
			group.add(borovkova_student);
			cin >> borovkova_student;
			//group.add(borovkova_student);
			break;
		case 2:
			cout << "Show list" << endl;
			group.show();
			break;
		case 3:
			cout << "Read list into file" << endl;
			group.readFromFile(file_into);
			break;
		case 4:
			cout << "Print list into file" << endl;
			//file_out.clear();
			file_out.open("in.txt");
			if (file_into.is_open()) {
				//if (Borovkova_Student* borovkova_student ios::in) {

				//}
			file_into.close();
			}
			group.printIntoFile(file_out);
			//group.printIntoFile(file_into);
			break;
		case 5:
			cout << "Clear list" << endl;
			group.clear();
			break;
		case 6:
			cout << "Goodbye" << endl;
			break;
		default:
			cout << "Please input correct number from 1-6" << endl;
		}
	} while (x != 6);
}
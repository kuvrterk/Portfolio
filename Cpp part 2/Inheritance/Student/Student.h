//student.h
//The class for the Student class

#ifndef STUDENT_H
#define STIDENT_H

#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

class student
{
     public:
	student(string = "", string = "", string = "", string = "",
			double = 0.0, double = 0.0, double = 0.0);
	string getLastName() const;
	string getFirstName() const;
	string getID() const;
	void getCharges(double&, double&) const;
	double getBalance() const;
	string getMajor() const;
	double getGPA() const;
	void setName(string, string);
	void setID(string);
	void setMajor(string);
	void setCharges(double, double);
	void setGPA(double);
	void showStudent() const;
     private:
	bool checkID(string) const;
	string expandMajorCode(string) const;
	string lastName;
	string firstName;
	string studentID;
	string major;
	double gpa;
	double charges;
	double financialAid;
	double balance;
	static constexpr double MAX_CHARGES = 10000.0;
	static constexpr double MAX_GPA = 4.0;
};

#endif

/*
 Author:       Benjie
 Class:        CSI-240-03
 Assignment:   Lab9-8
 Date Created: Mar 31, 2022
 Description:
 Certification of Authenticity:
 I certify that this is entirely my own work, except where I have given
 fully-documented references to the work of others. I understand the
 definition and consequences of plagiarism and acknowledge that the assessor
 of this assignment may, for the purpose of assessing this assignment:
 - Reproduce this assignment and provide a copy to another member of
 academic staff; and/or
 - Communicate a copy of this assignment to a plagiarism checking
 service (which may then retain a copy of this assignment on its
 database for the purpose of future plagiarism checking)
 */
#ifndef GROCERIES_H_
#define GROCERIES_H_
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
class GroceryItem {
public:
	virtual string getDescription() = 0;
};

class Vegetable: public GroceryItem {
public:
	Vegetable();
	Vegetable(string name,double weight);
	string getDescription() override;
protected:
	string name;
	double weight;
};

class Pepper: public Vegetable {
public:
	Pepper(string name,double weight,int scoville,string color);
protected:
	string color;
	int scoville;
	string getDescription() override;
};

#endif /* GROCERIES_H_ */


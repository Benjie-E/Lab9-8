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
#include "groceries.h"
GroceryItem::GroceryItem() {
	// TODO Auto-generated constructor stub

}

GroceryItem::~GroceryItem() {
	// TODO Auto-generated destructor stub
}

Vegetable::Vegetable(string name) {
	this->name=name;
}

Vegetable::~Vegetable() {
	// TODO Auto-generated destructor stub
}

Vegetable::Vegetable() {
}

string Vegetable::getDescription() {
	cout << "HI";
	return this->name;
}

Pepper::Pepper(string color) {
	this->color=color;
	this->name="pepper";
}

Pepper::~Pepper() {
	// TODO Auto-generated destructor stub
}

Pepper::Pepper() {
}

string Pepper::getDescription() {
	return "PEPPER TEST";
}

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

Vegetable::Vegetable(string name,double weight) {
	this->name=name;
	this->weight=weight;
}

Vegetable::Vegetable() {
	name="Unknown";
	weight=0;
}

string Vegetable::getDescription() {
	stringstream desc;
	desc << name << " that weighs " << weight << "lbs";
	return desc.str();
}

Pepper::Pepper(string name,double weight,int scoville,string color) : Vegetable(name,weight) {
	this->color=color;
	this->scoville=scoville;
}

string Pepper::getDescription() {
	stringstream desc;
		desc << name <<" "<< "Pepper" << " that weighs " << weight << "lbs, has a scoville rating of "<<scoville <<", and is "<<color;
		return desc.str();
}

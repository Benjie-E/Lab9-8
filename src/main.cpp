/*
 Author:       Benjie
 Class:        CSI-240-03
 Assignment:   Lab9-8
 Date Created: Mar 31, 2022
 Description: Polymorphism - Grocery
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
#include <iostream>
#include <vector>
using namespace std;
void description(vector<GroceryItem*> basket){
	cout << "The groceries in my basket are:"<<endl;
	for(int i=0;i<basket.size();i++){
			cout << basket[i]->getDescription()<<endl;
		}
}

int main(){
	vector<GroceryItem*> basket;
	GroceryItem * item;
	item = new Vegetable("Eggplant",6.3);
	basket.push_back(item);
	item = new Pepper("Jalapeño",4.2,5000,"green");
	basket.push_back(item);
	item = new Vegetable("Basil",1.7);
	basket.push_back(item);
	item = new Pepper("Ghost",5.4,1000000,"red");
	basket.push_back(item);
	description(basket);
}


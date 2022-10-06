#ifndef GENERICITEM_H
#define GENERICITEM_H

// could also use the following line instead of the #ifndef
// #pragma once

#include <iostream>
#include <string>
using namespace std;

class GenericItem {
public:
	void SetName(string newName) {
		itemName = newName;
	};

	void SetQuantity(int newQty) {
		itemQuantity = newQty;
	};

	// should be virtual to support Polymorphism
	void PrintItem() {
		cout << itemName << " " << itemQuantity << endl;
	};

protected:
	string itemName;
	int itemQuantity;
};

#endif
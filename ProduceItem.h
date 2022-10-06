#ifndef PRODUCEITEM_H
#define PRODUCEITEM_H

#include <iostream>
#include <string>
#include "GenericItem.h"
using namespace std;

class ProduceItem : public GenericItem { // Derived from GenericItem
public:
	void SetExpiration(string newDate) {
		expirationDate = newDate;
	};

	string GetExpiration() {
		return expirationDate;
	};

	void PrintItem() {
		cout << itemName << " " << itemQuantity << endl;
		//GenericItem::PrintItem();
		cout << "  (Expires: " << expirationDate << ")" << endl;
	};

private:
	string expirationDate;
};

#endif
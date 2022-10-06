#include <iostream>
#include <string>
#include <vector>
#include "GenericItem.h"
#include "ProduceItem.h"
#include "BookItem.h"
using namespace std;

int main() {
	GenericItem* genericItemPtr = nullptr;
	ProduceItem* produceItemPtr = nullptr;
	BookItem* bookItemPtr = nullptr;
	
	genericItemPtr = new GenericItem;
	genericItemPtr->SetName("Smith Cereal");
	genericItemPtr->SetQuantity(9);

	produceItemPtr = new ProduceItem;
	produceItemPtr->SetName("Apple");
	produceItemPtr->SetQuantity(40);
	produceItemPtr->SetExpiration("May 5, 2012");

	bookItemPtr = new BookItem;
	bookItemPtr->SetName("Computer Ethics");
	bookItemPtr->SetQuantity(120);
	bookItemPtr->SetEdition(2);

	genericItemPtr->PrintItem();
	produceItemPtr->PrintItem();
	bookItemPtr->PrintItem();
	cout << endl;

	// More common: Collection (e.g., vector) of objs
	// Polymorphism -- Is the correct Print() called?
	vector<GenericItem*> inventoryList;
	inventoryList.push_back(genericItemPtr);
	inventoryList.push_back(produceItemPtr);
	inventoryList.push_back(bookItemPtr);

	cout << endl << "Inventory:" << endl;
	for (int i = 0; i < inventoryList.size(); i = i + 1) {
		inventoryList.at(i)->PrintItem();
	}

	return 0;
}
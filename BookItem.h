#ifndef BOOKITEM_H
#define BOOKITEM_H

#include <iostream>
#include "GenericItem.h"
using namespace std;

class BookItem : public GenericItem { // Derived from GenericItem
public:
	void SetEdition(int newEdition) {
		edition = newEdition;
	};

	int GetEdition() {
		return edition;
	};

	void PrintItem() {
		GenericItem::PrintItem();
		cout << "  (Edition: " << edition << ")" << endl;
	};

private:
	int edition;
};

#endif
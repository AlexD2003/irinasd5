#pragma once
#include "SortedIndexedList.h"


//DO NOT CHANGE THIS PART
class ListIterator{
	friend class SortedIndexedList;
private:
	const SortedIndexedList& list;
	ListIterator(const SortedIndexedList& list);

	//TODO - Representation
	int current;
public:
	void first();
	void next();
	bool valid() const;
	int getCurrent() const {
		return this->current;
	}
};



#pragma once
#include <iostream>
#include <memory>
#include <vector>
#define N '\n'

/*
TEDIOUS LINUX COMMAND:

cmake ../.. && make && ./cppStats

^ compile     ^make an exe   ^ run the exe
*/

int test(int a, int b);  //test function

void initialize();

template <typename T> //typename, 
//usually std::vector for the data cells, str or int for col/row names
struct cell {  //each cell, includes the columns and rows
	T data;
	std::shared_ptr<cell> right;
	std::shared_ptr<cell> down;
};

class table {
	

public:
	table();
	~table();

	void print();
	void print(table);
};



#pragma once
#include <iostream>
#include <memory>
#include <vector>
#define N '\n'

/*
TEDIOUS LINUX COMMAND:

cppStats/out/linuxBuild <- cd to this
cmake ../.. && make && ./cppStats


^ compile     ^make an exe   ^ run the exe
*/

int test(int a, int b);  //test function

void init();

template <typename T> 
struct cell {
	T data; //string for names, int vectors for data (usually)
	cell<T>* down;
	cell<T>* right;
};

class table {
	int rows;
	int cols;
	cell<std::string>* head;

	int get_Uint(const std::string& question);


	void makeCell();

public:
	table();
	~table();

	void print();
	void print(table);
};


#pragma once
#include <iostream>
#include <memory>
#include <vector>

#define N '\n'						//for debug
#define str_cell cell<std::string>	//annoying 
#define int_cell cell<int>
#define dbl_cell cell<double>

/*
TEDIOUS LINUX COMMAND:

cppStats/out/linuxBuild 
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
	int rows, cols;
	size_t rowLen, colLen;
	str_cell* colHead, rowHead;

	int get_Uint(const std::string& question);
	void len_check(const str_cell*& c, size_t& lenCounter);


	void makeCell();

public:
	table();
	~table();

	void print();
	void print(table);
};


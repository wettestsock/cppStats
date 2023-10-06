#pragma once
#include <iostream>
#include <memory>
#include <vector>

#define N '\n'						//for debug
#define str_ptr cell<std::string>	//annoying 
#define int_ptr cell<int>
#define dbl_ptr cell<double>

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
	int rows;
	int cols;
	static unsigned int rowLen;
	static unsigned int colLen;
	str_ptr* head;

	int get_Uint(const std::string& question);


	void makeCell();

public:
	table();
	~table();

	void print();
	void print(table);
};


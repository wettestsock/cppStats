// cppStats.h : Include file for standard system include files,
// or project specific include files.

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

int test(int a, int b);

template <typename T>
struct cell {
	T data;
	std::shared_ptr<cell> right;
	std::shared_ptr<cell> down;
	//std::shared_ptr<cell> right = std::make_shared<cell>();
	//std::shared_ptr<cell> down = std::make_shared<cell>();
};


// TODO: Reference additional headers your program requires here.

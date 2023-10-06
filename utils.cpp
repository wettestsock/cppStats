#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include "header.hpp"

int test(int a, int b) {
	int c = a * b;
	return a + b + c;

};

void init() {
	std::cout << "EFFICIENT TABLE DATA ANALYZER\nby Dmytro Moshkovskyi\n\n";
	table a;
}

//HELPER FUNCTIONS
int table::get_Uint(const std::string& question){
	std::string in;
	int out = 0;
	while (out == 0)
	{
		std::cout << question << '\n';
		std::cin >> in;
		try
		{
			out= abs(std::stoi(in));
		}
		catch (const std::invalid_argument&)
		{
			continue;
		}
		catch (const std::out_of_range&) {
			continue;
		}
	}
	std::cout << N;
	return out;
};

void table::len_ctr(const str_cell& c, size_t& lenCounter) {
	if (c.data.length() > lenCounter)
		lenCounter = c.data.length();
};




table::table(): 
//member initialization list
rows(get_Uint("How many rows?")),  //rows init
cols(get_Uint("How many columns?")),  //cols init
rowLen(1),
colLen(1),
rowHead(new str_cell),
colHead(new str_cell)
{
	//constructor body
	//TODO: add capabilities for multiple table storage

	//std::cout << head->data << N << head->right << N <<head->down<<N;
	
	//TODO: EVERYTHING


	str_cell* curr = rowHead;
	for (int i = 0; i < rows; ++i) {
		str_cell* n;
		//exception handle for rowHead
		if(curr!=nullptr)	n = new str_cell;

		std::cout << "Row " << i + 1 << " name:\n";
		std::getline(std::cin, curr->data);



	}




	//EARLIER VERSION:
	/*
	str_cell* c = rowHead;


	for (int i = 0; i < rows; ++i) {
		str_cell* newRow = new str_cell;


		std::cout << "Row " << i+1 << " name:\n";
		std::getline(std::cin, newRow->data);
		if (i==0) std::getline(std::cin, newRow->data); //TODO: wtf??????
		//row 1 doesnt work ??


		newRow->right = nullptr; //TODO: change
		newRow->down = nullptr;
		len_ctr(*newRow, rowLen);
		
		if (c == rowHead) {
			rowHead = newRow;
			continue;
		}
		c = newRow;
		c->down = newRow;

	}

	for (int i = 0; i < cols; ++i) {
		str_cell* newCol = new str_cell;

		std::cout << "Col " << i + 1 << " name:\n";
		std::getline(std::cin, newCol->data);

		newCol->right = nullptr; //TODO: change
		newCol->down = nullptr;
		len_ctr(*newCol, rowLen);

		if (c == colHead) {
			colHead = newCol;
			continue;
		}
		c = newCol;
		c->right = newCol;

	}
	c = nullptr;
	std::cout << "row len: " << rowLen << N << "col len: " << colLen<<N;
	*/




};


table::~table() {
	//destructor
	//deallocates all the raw pointers
	//TODO: DELETE ALL ROWS 
	
	str_cell* col_del = colHead;
	while (col_del != NULL) {
		

		str_cell* temp = col_del;
		col_del = col_del->down;
		delete temp;
	}
	colHead = nullptr; //makes head null
	//std::cout << "deleted the pointers"<< N;
}

void table::print() {
	str_cell* c = colHead;
	while (c!=nullptr)
	{
		std::cout << c->data;
		c = c->right;

	}
	std::cout << N;
}

void table::print(table) {

};

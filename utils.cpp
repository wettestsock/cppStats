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


int table::get_Uint(const std::string& question){
	std::string in;
	int out = 0;
	while (out < 1)
	{
		std::cout << question << '\t';
		std::cin >> in;
		try
		{
			out= std::stoi(in);
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

table::table(): 
//member initialization list
rows(get_Uint("How many rows?")),  //rows init
cols(get_Uint("How many columns?")),  //cols init
head(new str_ptr) //head cell init
{
	//constructor body

	*head = {"TABLE", nullptr, nullptr}; //head values init
	//TODO: add capabilities for multiple table storage
	
	//std::cout << head->data << N << head->right << N <<head->down<<N;

	
	str_ptr* c = head;
	rowLen = 1;
	for (int i = 0; i < rows; ++i) {
		str_ptr* newCell = new str_ptr;
		
		std::cout << "Row " << i + 1 << " name:\t";
		std::getline(std::cin, newCell->data);

		if (newCell->data.length() > rowLen)	
			rowLen = newCell->data.length();

		c->down = newCell;
		c = newCell;
		
	}

	c = head;
	colLen = 1;
	for (int i = 0; i < cols; ++i) {
		str_ptr* newCell = new str_ptr;
		std::cout << "Column " << i + 1 << " name:\t";
		std::getline(std::cin, newCell->data);

		if (newCell->data.length() > colLen)
			colLen = newCell->data.length();

		c->right = newCell;
		c = newCell;
	}
	std::cout << "row len: " << rowLen << N << "col len: " << colLen;





};


table::~table() {
	//destructor
	//deallocates all the raw pointers
	//TODO: DELETE ALL ROWS 

	str_ptr* col_del = head;
	while (col_del != NULL) {
		

		str_ptr* temp = col_del;
		col_del = col_del->down;
		delete temp;
	}
	head = nullptr; //makes head null

	//std::cout << "deleted the pointers"<< N;
}

void table::print() {

}

void table::print(table) {

};

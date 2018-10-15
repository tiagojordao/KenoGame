#include <iostream>
#include <stdexcept>
#include <vector>

using number_type = unsigned short int; //<! data type for a keno hit.
using multiplier = float;
using cash_type = float; // <! Defines  the  wage  type in this  application.
using set_of_numbers_type = std::vector< number_type >;
using set_of_numbers_mult = std::vector <multiplier>;

int main ( int argc, char * argv []){


// Verify if data file was added
	if (argc > 1){
		std::string file = argv[1];
	} else {
		// throw std::invalid_argument ("\n>>> Please, insert a Data file! (Reade \"readme\" file to know how to do it)"); //<-- Using std::cout to make error clear!
		std::cout << "\n>>> Please, insert a Data file! (Reade \"readme\" file to know how to do it)\n\n";
		return -1;
	}

// Hit multiplier array
	std::vector<set_of_numbers_mult> array_m = {
		{0,3},
        {0,1,9},
        {0,1,2,16},
        {0,0.5,2,6,12},
        {0,0.5,1,3,15,50},
        {0,0.5,1,2,3,30,75},
        {0,0.5,0.5,1,6,12,36,100},
        {0,0.5,0.5,1,3,6,19,90,720},
        {0,0.5,0.5,1,2,4,8,20,80,1200},
        {0,0,0.5,1,2,3,5,10,30,600,1800},
        {0,0,0.5,1,1,2,6,15,25,180,1000,3000},
        {0,0,0,0.5,1,2,4,24,72,250,500,2000,4000},
        {0,0,0,0.5,0.5,3,4,5,20,80,240,500,3000,6000},
        {0,0,0,0.5,0.5,2,3,5,12,50,150,500,1000,2000,7500},
        {0,0,0,0.5,0.5,1,2,5,15,50,150,300,600,1200,2500,10000}
	};

	

}
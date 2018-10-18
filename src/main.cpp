/*!KenoGame project
 * LP1 - IT - UFRN 2018.2
 * Author: Tiago Morais
*/
#include <iostream>
#include <stdexcept>
#include <vector>
#include <fstream>
#include <sstream>

using number_type = unsigned short int; //<! data type for a keno hit.
using multiplier = float;
using cash_type = float; // <! Defines  the  wage  type in this  application.
using set_of_numbers_type = std::vector< number_type >;
using set_of_numbers_mult = std::vector <multiplier>;

int main ( int argc, char * argv []){


// Verify if data file was added
	if (argc > 1){
                std::ifstream file;
                file.open(argv[1]);
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
// KenoTable
         set_of_numbers_type KenoTable = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10,
                                          11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                                          21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                                          31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                                          41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
                                          51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
                                          61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
                                          71, 72, 73, 74, 75, 76, 77, 78, 79, 80};

        KenoBet kenoBet;

// Implements Code ==\>

        // *tasks:
        // *read file
        std::cout << "\n\n>>>Preparing to read the bet file [ " /*<< file*/ << " ]. Please wait...\n";
        // **in file
        // *read inicial credits(IC)
        // *read number of rounds(NR)
        // *15x [
        // *read number
        // *validate number(in range[1,80], unique)
        // *if( invalid ) = ignore
        // *]( cont the amout of hits)
        std::cout << "       ---------------------\n";
        std::cout << "         Hits   |   Payout  \n";
        std::cout << "       ---------------------\n";

        std::cout << "Your bet has " /*<< num bets*/ << " numbers. They are [ " /*<< vector of ints*/ << " ]\n";
        //PRINT THE TABLE WITH THE INFO OF array_m
        // **The Game
        // *runs NR rounds
        // *pay IC/NR per round
        // *pick 20 random numbers
        // *compare numbers
        // *count the draw
        // *->Display on screen
        // *set the multiplicator

        //ROUND START COUT
        std::cout << "       \n--------------------------------------------------------------------------------------\n";
        std::cout << "       This is round #" /*<< round count*/ << " of " /*<< NR*/ << "and your wage is $" /*<< IC/NR*/ << ". Good luck!\n";
        std::cout << "       The hits are: [ " << vector of hits << " ]\n\n";
        std::cout << "       You hit the folllowing number(s) [ "  /*<< vector of matches*/ <<  " ], a total of " /*<< num of hits*/ << "out of " /*<< NR*/ << std::endl;
        std::cout << "       Payout rate is " /*<< payout rate*/ << "thus you came out with: " /*<< IC/NR * payout rate*/ << std::endl;
        std::cout << "       Your bet balance so far is: $" /*<< (IC - IC/NR) + IC/NR * payout*/ <<" dollars.\n";
        std::cout << "       \n--------------------------------------------------------------------------------------\n";
        //ROUND END COUT
        std::cout << ">>>End of rounds!\n";
        std::cout << "--------------------------------------------------------------------------------------\n";
        std::cout << "\n\n\n";
        std::cout << "===== SUMMARY =====\n\n";
        std::cout << ">>> You spent in this game a total of $" /*<< IC*/ << "dollars\n";
                //if the player wins something( even 1 buck )
        std::cout << ">>> Hooray, you won $" /*<< Final IC - Start IC*/ << " dollars. See ya later! ᕕ(⌐■_■)ᕗ ♪♬\n";
                //else
        std::cout << ">>> Too bad my friend try again ( ͡° ʖ̯ ͡°)\n";

        std::cout << ">>> You are leaving the Keno table with $" /*<< Final IC*/ << " dollars\n";
        std::cout << "\nWHΣИ $HΛLL WΣ †HЯΣΣ MΣΣ† ΛGΛ|И?\n";

}
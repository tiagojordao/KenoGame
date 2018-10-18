# KenoGame

KenoGame is a cassino game, in this game a player wager choosing until 15 numbers usualy betwen 1 and 80. 


Compile: To compile this game use the terminal go to root folder and execute the folowing code g++ -std=c++11 src/main.cpp src/kenobet.cpp -i include/kenobet.h.

Execute: to execute this, use ./a.out "file.dat". (This file must have on first line the amount of money to bet, on second line, the round number you'd like to play, on third, all the numbers you'd to pick, separeted by a space ' ').

OBS: We did the class that was necessary but we didn't finished the project, we didn't implement this on main.cpp, so the code is compiling and generating an error if the file won't be passed by argument and that's it.
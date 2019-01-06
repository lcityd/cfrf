
// Name of program mainreturn.cpp 
#include <iostream>
#include <iostream>
#include <string>
#include <vector> 
#include <string>     // std::string, std::stoi
#define _GLIBCXX_USE_C99 1
#include <string>
#include <sstream> // for std::stringstream
#include <cstdlib> // for exit()
 
int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		// On some operating systems, argv[0] can end up as an empty string instead of the program's name.
		// We'll conditionalize our response on whether argv[0] is empty or not.
		if (argv[0]){
            std::cout << "CfrF (Klaminite 2019) \nCommand Line Tool for Converting to Celcius or Farenhiet\n\n";
            std::cout << "Enter in the value you are given from any instrument after C or F, and it will convert to the chosen value";
			std::cout << "\nUsage: <Celcius (C) or Farenheit (F)> <value converting from>" << '\n';
        }
		else{
			std::cout << "Usage: <program name> <number>" << '\n';
        }
		exit(1);
	}
 
	std::stringstream convert(argv[2]); // set up a stringstream variable named convert, initialized with the input from argv[1]

   std::string ch = argv[1];
    if (ch == "f"){
        int c;
	    if (!(convert >> c)) // do the conversion
		    c = 0; // if conversion fails, set myint to a default value
        float z = (((9/5)*c)+32);
	    std::cout << "CfrF (F):\n " << z << '\n';
    }
    if (ch == "c"){
	    int x;
	    if (!(convert >> x)) // do the conversion
		    x = 0; // if conversion fails, set myint to a default value
        double z = ((x - 32)* 5/9);
	    std::cout << "CfrF (C):\n " << float(z) << '\n';
    }
	return 0;
}


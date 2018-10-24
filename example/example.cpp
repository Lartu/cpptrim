//Include CPPTrim
#include "../cpptrim.h" 

//Include other stuff
#include <iostream>

int main(){
    //With spaces
    std::string myString = "      Hello World!              ";
    std::cout << "Untrimmed: '" << myString << "'" << std::endl;
    trim(myString);
    std::cout << "Trimmed: '" << myString << "'" << std::endl;
    
    //With tabs
    myString = "   \t   Hello Tabs!     \t     \t        ";
    std::cout << "Untrimmed: '" << myString << "'" << std::endl;
    trim(myString);
    std::cout << "Trimmed: '" << myString << "'" << std::endl;
    
    //With carriage retuns and page feeds
    myString = "   \n   Hello CRLF!     \r     \n        ";
    std::cout << "Untrimmed: '" << myString << "'" << std::endl;
    trim(myString);
    std::cout << "Trimmed: '" << myString << "'" << std::endl;
}

#ifndef CPPTRIM
#define CPPTRIM
#include <string>

//Removes all trailing and ending whitespace from a std::string
void trim(std::string & line){
    //If the std::string is empty
    if(line.size() == 0) return;
    
    //If the std::string has only one character
    if(line.size() == 1 && line[0] != ' ' && line[0] != '\t' && line[0] != '\n' && line[0] != '\r') return;
    
    //Left trim
    int first = 0;
    for(int i = 0; i < line.size(); ++i){
        if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n' && line[i] != '\r'){
            first = i;
            break;
        }
    }
    
    //Right trim
    int last = 0;
    for(int i = line.size()-1; i > 0; --i){
        if (line[i] != ' ' && line[i] != '\t' && line[i] != '\n' && line[i] != '\r'){
            last = i+1;
            break;
        }
    }
    
    //Trim the std::string
    line = line.substr(first, last-first);
} 
#endif

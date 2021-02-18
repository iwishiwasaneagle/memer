#include "memer.h"

std::string upper_lower(std::string input){
    char c;
    for(int i=0;i<input.length();i+=2){
        char c = input[i];
        if(isalpha(c)){     
            input[i] = (char)toupper(input[i]);
        }else{
            i-=1;
        }
    }
    
    return input;
}

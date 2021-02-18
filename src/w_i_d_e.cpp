#include "memer.h"


std::string w_i_d_e(std::string input){
   std::string output = "";

   char c;
   for(int i=0;i<input.length();i++){
       output += " ";
       c = input[i];
       if(isalpha(c)){
           output += (char)toupper(c);
       }else{
           output += input[i];
       }
   }

   return output;

}

#include "memer.h"

void print_usage(char* path){
    std::string header = path;
    header += " <ARG> \"<STRING>\"";

    std::string underline = "";
    for(int i=0;i<header.length();i++){
        underline += "-";
    }

    std::cout << header << std::endl        
        << underline << std::endl << std::endl
        << "Usage:" << std::endl
        << "\t-h\tDisplay this message" << std::endl
        << "\t-u\tUpPeR LoWeR" << std::endl
        << "\t-s\tˢᵘᵖᵉʳˢᶜʳᶦᵖᵗ" << std::endl
        << "\t-w\tW I D E" << std::endl;
}

int main(int argc, char* argv[]){
    switch(getopt(argc, argv, "s:w:u:h")){
        case 'u':
            std::cout << upper_lower(optarg) << std::endl;
            break;
        case 's':
            std::cout << superscript(optarg) << std::endl;
            break;
        case 'w':
            std::cout << w_i_d_e(optarg) << std::endl;
            break;
        case 'h':
        default:
            print_usage(argv[0]);

    }
}

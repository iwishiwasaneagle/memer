#include "memer.h"

std::string superscript(std::string input){
    // Normal:      abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUV+-=()0123456789
    // Superscript: ᵃᵇᶜᵈᵉᶠᵍʰᶦʲᵏˡᵐⁿᵒᵖᵠʳˢᵗᵘᵛʷˣʸᶻᴬᴮᶜᴰᴱᶠᴳᴴᴵᴶᴷᴸᴹᴺᴼᴾᵠᴿˢᵀᵁⱽ⁺⁻⁼⁽⁾⁰¹²³⁴⁵⁶⁷⁸⁹    
    
    std::map<char,std::string> replacements;
    std::map<char,std::string>::iterator it;

    // Generated in python3.9 by: 
	// 		normal = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUV+-=()0123456789"
	//		superscript = "ᵃᵇᶜᵈᵉᶠᵍʰᶦʲᵏˡᵐⁿᵒᵖᵠʳˢᵗᵘᵛʷˣʸᶻᴬᴮᶜᴰᴱᶠᴳᴴᴵᴶᴷᴸᴹᴺᴼᴾᵠᴿˢᵀᵁⱽ⁺⁻⁼⁽⁾⁰¹²³⁴⁵⁶⁷⁸⁹"
	//		for (n,s) in zip(normal, superscript):
	//	    	print(f"replacements['{n}'] = std::string("{s}");")
    replacements['a'] = "ᵃ";
	replacements['b'] = "ᵇ";
	replacements['c'] = "ᶜ";
	replacements['d'] = "ᵈ";
	replacements['e'] = "ᵉ";
	replacements['f'] = "ᶠ";
	replacements['g'] = "ᵍ";
	replacements['h'] = "ʰ";
	replacements['i'] = "ᶦ";
	replacements['j'] = "ʲ";
	replacements['k'] = "ᵏ";
	replacements['l'] = "ˡ";
	replacements['m'] = "ᵐ";
	replacements['n'] = "ⁿ";
	replacements['o'] = "ᵒ";
	replacements['p'] = "ᵖ";
	replacements['q'] = "ᵠ";
	replacements['r'] = "ʳ";
	replacements['s'] = "ˢ";
	replacements['t'] = "ᵗ";
	replacements['u'] = "ᵘ";
	replacements['v'] = "ᵛ";
	replacements['w'] = "ʷ";
	replacements['x'] = "ˣ";
	replacements['y'] = "ʸ";
	replacements['z'] = "ᶻ";
	replacements['A'] = "ᴬ";
	replacements['B'] = "ᴮ";
	replacements['C'] = "ᶜ";
	replacements['D'] = "ᴰ";
	replacements['E'] = "ᴱ";
	replacements['F'] = "ᶠ";
	replacements['G'] = "ᴳ";
	replacements['H'] = "ᴴ";
	replacements['I'] = "ᴵ";
	replacements['J'] = "ᴶ";
	replacements['K'] = "ᴷ";
	replacements['L'] = "ᴸ";
	replacements['M'] = "ᴹ";
	replacements['N'] = "ᴺ";
	replacements['O'] = "ᴼ";
	replacements['P'] = "ᴾ";
	replacements['Q'] = "ᵠ";
	replacements['R'] = "ᴿ";
	replacements['S'] = "ˢ";
	replacements['T'] = "ᵀ";
	replacements['U'] = "ᵁ";
	replacements['V'] = "ⱽ";
	replacements['+'] = "⁺";
	replacements['-'] = "⁻";
	replacements['='] = "⁼";
	replacements['('] = "⁽";
	replacements[')'] = "⁾";
	replacements['0'] = "⁰";
	replacements['1'] = "¹";
	replacements['1'] = "¹";
	replacements['2'] = "²";
	replacements['3'] = "³";
	replacements['4'] = "⁴";
	replacements['5'] = "⁵";
	replacements['6'] = "⁶";
	replacements['7'] = "⁷";
	replacements['8'] = "⁸";
	replacements['9'] = "⁹";

    std::string output = "";
    for(int i=0;i<input.length();i++){
        it = replacements.find((char)input[i]);
        if(it != replacements.end()){
            output += it->second;
        }
        else{
            output += input[i];
        }
    }

    return output;
}

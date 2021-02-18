#!/bin/bash
superscript(){
    declare -A SUPERSCRIPTMAP
    # Normal:      abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUV+-=()0123456789
    # Superscript: ᵃᵇᶜᵈᵉᶠᵍʰᶦʲᵏˡᵐⁿᵒᵖᵠʳˢᵗᵘᵛʷˣʸᶻᴬᴮᶜᴰᴱᶠᴳᴴᴵᴶᴷᴸᴹᴺᴼᴾᵠᴿˢᵀᵁⱽ⁺⁻⁼⁽⁾⁰¹²³⁴⁵⁶⁷⁸⁹
    SUPERSCRIPTMAP=( ['a']='\u1d43' ['b']='\u1d47' ['c']='\u1d9c' ['d']='\u1d48' ['e']='\u1d49' ['f']='\u1da0' ['g']='\u1d4d' ['h']='\u02b0' ['i']='\u1da6' ['j']='\u02b2' ['k']='\u1d4f' ['l']='\u02e1' ['m']='\u1d50' ['n']='\u207f' ['o']='\u1d52' ['p']='\u1d56' ['q']='\u1d60' ['r']='\u02b3' ['s']='\u02e2' ['t']='\u1d57' ['u']='\u1d58' ['v']='\u1d5b' ['w']='\u02b7' ['x']='\u02e3' ['y']='\u02b8' ['z']='\u1dbb' ['A']='\u1d2c' ['B']='\u1d2e' ['C']='\u1d9c' ['D']='\u1d30' ['E']='\u1d31' ['F']='\u1da0' ['G']='\u1d33' ['H']='\u1d34' ['I']='\u1d35' ['J']='\u1d36' ['K']='\u1d37' ['L']='\u1d38' ['M']='\u1d39' ['N']='\u1d3a' ['O']='\u1d3c' ['P']='\u1d3e' ['Q']='\u1d60' ['R']='\u1d3f' ['S']='\u02e2' ['T']='\u1d40' ['U']='\u1d41' ['V']='\u2c7d' ['+']='\u207a' ['-']='\u207b' ['=']='\u207c' ['(']='\u207d' [')']='\u207e' ['0']='\u2070' ['1']='\u9' ['2']='\u2' ['3']='\u3' ['4']='\u2074' ['5']='\u2075' ['6']='\u2076' ['7']='\u2077' ['8']='\u2078' ['9']='\u2079' )
    
    new_word=""
    word=$@
    for (( i=0; i<${#word}; i++ )); do
        new_word="${new_word}${SUPERSCRIPTMAP[${word:$i:1}]}"
    done
    echo -e "$new_word"
}
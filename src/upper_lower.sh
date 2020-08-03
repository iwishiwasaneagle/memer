#!/bin/bash

upper_lower(){
    word="$@"
    new_word=""
    for (( i=0; i<${#word}; i++ )); do
        if [ $((i%2)) -eq 0 ]; then
            new_word="$new_word$(echo "${word:$i:1}" | tr a-z A-Z)"
        else
            new_word="$new_word${word:$i:1}"
        fi
    done
    echo $new_word
}

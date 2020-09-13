#!/bin/bash

w_i_d_e(){
    word="$@"
    new_word=""
    IFS=
    for (( i=0; i<"${#word}"; i++ )); do
        new_word="$new_word $(echo "${word:$i:1}" | tr a-z A-Z)"
    done
    echo $new_word
}


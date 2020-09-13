#!/bin/bash
i=0
total=5
status_msg(){
    echo "Test $i/$total"
    ((i=i+1))
}

status_msg
test "$(memer -u hello)" == "HeLlO"

status_msg
tmp="$(memer -u hi -h)"; test $? -eq 1

status_msg
tmp="$(memer -u hi)"; test $? -eq 0

status_msg
test "$(memer -s superscript)" == "ˢᵘᵖᵉʳˢᶜʳᶦᵖᵗ"

status_msg
test "$(memer -w wide)" == "W I D E"

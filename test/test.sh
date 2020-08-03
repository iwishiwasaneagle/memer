#!/bin/bash
i=0
total=3
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


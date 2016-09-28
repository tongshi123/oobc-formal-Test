#!/bin/sh

function echo_red
{
    local content=$1
    echo -e "\033[1;31m${content}\033[0m"
}

result=0
cd ./build
echo `pwd`
for case_bin in `ls | grep "test_"`
do
    echo ${case_bin}
    if [ -x ${case_bin} ];then
        ./${case_bin};
        if [ $? -eq 1 ];then
            echo_red " ${case_bin} failed"
            result=1
        fi
    else
        continue;
    fi
done
cd ..
exit $result 

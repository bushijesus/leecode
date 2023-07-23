//
// Created by Administrator on 2023/7/21.
//
#include <stdio.h>
#include <stdbool.h>
bool isHappy(int n){
    if(n <= 0)
    {
        return false;
    }
    int sum = 0;
    while(n > 0)
    {
        int dig = n % 10;
        sum += dig * dig;
        n /= 10;
    }
    if(sum == 1)
        return true;
    else
        return isHappy(sum);
}
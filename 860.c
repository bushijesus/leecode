//
// Created by Administrator on 2023/7/22.
//
#include <stdio.h>
#include <stdbool.h>

bool lemonadeChange(int* bills, int billsSize){

    int five = 0;
    int ten = 0;

    for(int i = 0; i < billsSize; i++) {
        if(bills[i] == 5) {
            five++;
        } else if(bills[i] == 10) {
            if(five == 0) return false;
            five--;
            ten++;
        } else {
            if(five > 0 && ten > 0) {
                five--;
                ten--;
            } else if(five >= 3) {
                five -= 3;
            } else {
                return false;
            }
        }
    }

    return true;
}
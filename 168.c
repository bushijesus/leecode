//
// Created by Administrator on 2023/7/21.
//
#include <stdlib.h>
char * convertToTitle(int columnNumber){
    int numOfA = columnNumber / 26;
    int len = 0;

    int temp = columnNumber;
    while (temp > 0) {
        len++;
        temp = (temp - 1) / 26;
    }

    char* res = (char*)malloc((len + 1) * sizeof(char));
    res[len] = '\0';

    while (len > 0) {
        len--;
        res[len] = (columnNumber - 1) % 26 + 'A';
        columnNumber = (columnNumber - 1) / 26;
    }

    return res;
}

int main(){
    char * res = convertToTitle(60);
    free(res);
    return 0;
}
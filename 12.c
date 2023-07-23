//
// Created by Administrator on 2023/6/9.
//

#include <stdio.h>
#include <string.h>
#include <malloc.h>
//char * intToRoman(int num){
//    static char arr[20] = "";
//    char Roman[20] ="MCMDCDCXCLXLXIXVIVI";
//    char* judge = Roman;
//    while(num)
//    {
//        if(num >= 1000)
//        {
//            strncat(arr,judge,1);
//            num -= 1000;
//            judge +1;
//            continue;
//        }
//        else if(num >= 900)
//        {
//            judge = Roman + 1;
//            strncat(arr,judge,2);
//            num -= 900;
//            judge +2;
//            continue;
//        }
//        else if(num >= 500)
//        {
//            judge= Roman + 3;
//            strncat(arr,judge,1);
//            num -= 500;
//            judge +1;
//            continue;
//        }
//        else if(num >= 400)
//        {
//            judge= Roman + 4;
//            strncat(arr,judge,2);
//            num -= 400;
//            judge +2;
//            continue;
//        }
//        else if(num >= 100)
//        {
//            judge = Roman + 6;
//            strncat(arr,judge,1);
//            num -= 100;
//            judge +1;
//            continue;
//        }
//        else if(num >= 90)
//        {
//            judge = Roman + 7;
//            strncat(arr,judge,2);
//            num -= 90;
//            judge +2;
//            continue;
//        }
//        else if(num >= 50)
//        {
//            judge = Roman + 9;
//            strncat(arr,judge,1);
//            num -= 50;
//            judge +1;
//            continue;
//        }
//        else if(num >= 40)
//        {
//            judge = Roman + 10;
//            strncat(arr,judge,2);
//            num -= 40;
//            judge +2;
//        }
//        else if(num >= 10)
//        {
//            judge = Roman + 12;
//            strncat(arr,judge,1);
//            num -= 10;
//            judge +1;
//        }
//        else if(num >= 9)
//        {
//            judge= Roman + 13;
//            strncat(arr,judge,2);
//            num -= 9;
//            judge +2;
//        }
//        else if(num >= 5)
//        {
//            judge= Roman + 15;
//            strncat(arr,judge,1);
//            num -= 5;
//            judge +1;
//        }
//        else if(num >= 4)
//        {
//            judge = Roman + 16;
//            strncat(arr,judge,2);
//            num -= 4;
//            judge +2;
//        }
//        else if(num >= 1)
//        {
//            judge= Roman + 18;
//            strncat(arr,judge,1);
//            num -= 1;
//            judge +1;
//        }
//        else
//        {
//            break;
//        }
//    }
//    return arr;
//}

char* intToRoman(int n) {
    int sym[13] = { 0 };
    int div[13] = { 1000,  900, 500,  400, 100,   90,  50,   40,  10,    9,   5,    4,   1 };
    char symCat[13][3] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
    int i;
    char* s = (char*)malloc(20 * sizeof(char));
    memset(s, 0, 20 * sizeof(char));
    for (i = 0; i < 13; i++) {
        if (n < div[i]) {
            continue;
        }
        sym[i] = n / div[i];
        n = n % div[i];
        while (sym[i]-- > 0) {
            strcat(s, symCat[i]);
        }
    }
    printf("%s", s);
    return s;
}
int main()
{
    int num = 0;
    scanf("%d", &num);
    char arr[100] = "";
    printf("%s", intToRoman(num));
}
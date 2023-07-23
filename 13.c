//
// Created by Administrator on 2023/6/9.
//

#include <stdio.h>
int romanToInt(char * s){
    int num = 0;
    while(*s)
    {
        if(*s == 'I')
        {
            if(*(s+1) == 'V')
            {
                num += 4;
                s += 2;
                continue;
            }
            else if(*(s+1) == 'X')
            {
                num += 4;
                s += 2;
                continue;
            }
            else
            {
                num += 1;
                s++;
                continue;
            }
        }
        if(*s == 'V')
        {
            num += 5;
            s++;
            continue;
        }
        if(*s == 'X')
        {
            if(*(s+1) == 'L')
            {
                num += 40;
                s += 2;
                continue;
            }
            else if(*(s+1) == 'C')
            {
                num += 90;
                s += 2;
                continue;
            }
            else
            {
                num += 10;
                s++;
                continue;
            }
        }
        if(*s == 'L')
        {
            num += 50;
            s++;
            continue;
        }
        if(*s == 'C')
        {
            if(*(s+1) == 'D')
            {
                num += 400;
                s += 2;
                continue;
            }
            else if(*(s+1) == 'M')
            {
                num += 900;
                s += 2;
                continue;
            }
            else
            {
                num += 100;
                s++;
                continue;
            }
        }
        if(*s == 'D')
        {
            num += 500;
            s++;
            continue;
        }
        if(*s == 'M')
        {
            num += 1000;
            s++;
            continue;
        }
        else
        {
            break;
        }
    }
    return num;
}
int main()
{
    char s[10] = "";
    scanf("%s", s);
    int num = romanToInt(s);
    printf("%d", num);
}
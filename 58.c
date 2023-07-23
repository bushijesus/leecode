//
// Created by Administrator on 2023/7/20.
//
#include <string.h>

int lengthOfLastWord(char * s){
    int s_len = strlen(s);
    int left = 0;
    int right = s_len - 1;
    while(s[right] == 32)
    {
        right--;
    }
    while(left <= right)
    {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
    int len = 0;
    int i = 0;
    while(s[i])
    {
        if(s[i] == 32)
            break;
        len++;
        i++;
    }
    return len;
}
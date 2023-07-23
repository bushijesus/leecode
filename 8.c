//
// Created by Administrator on 2023/7/11.
//

#include <stdio.h>
#include <stdlib.h>
int my_atoi(char* s){
    if(s == NULL){
        return 0;
    }
    int res = 0;
    int sign = 1;
    int i = 0;
    // 处理符号位
    if(s[0] == ' ')
        i++;
    if(s[i] == '-'){
        sign = -1;
        i++;
    }
    else if(s[i] == '+'){
        i++;
    }
    while(s[i] != '\0'){
        if(s[i] >= '0' && s[i] <= '9'){
            res = res * 10 + (s[i] - '0');
            i++;
        }
        else
            break;
    }
    int result = res* sign;
    if(result > 2e32 -1){
        result = 2e32 -1;
    }else if(result < -(2e32)){
        result = -(2e32);
    }

    return (int)result;
}
int main(){
    char str[] = " -42";
    int num = my_atoi(str);
    printf("%d",num);
}
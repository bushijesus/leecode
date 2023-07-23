//
// Created by Administrator on 2023/7/8.
//

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

bool isValid(char * s){
    int len = strlen(s);
    char * stack = (char*)malloc(sizeof(char) * (len + 1));
    int top = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            stack[top++] = s[i];
        }
        else if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if(top == 0){
                free(stack);
                return false;
            }
            stack[top] = s[i];
            char topChar = stack[top--];
            if((s[i-1] == '(' && topChar != ')') || (s[i-1] == '[' && topChar != ']') || (s[i-1] == '{' && topChar != '}')){
                free(stack);
                return false;
            }

        }
    }
    free(stack);
    return top == 0;
}

int main(){
    char s[] = "({{{{}}}))";
    int res = isValid(s);
    printf("%d\n", res);
}
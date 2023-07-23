//
// Created by Administrator on 2023/7/21.
//
#include <stdio.h>
#include <math.h>

int bitwiseComplement(int n){
    unsigned int binary = 0;  // 用于存储反码的二进制形式
    unsigned int bitmask = 1; // 位掩码，用于提取整数的每一位

    // 将整数转换为二进制数
    for (int i = 0; i < sizeof(n) * 8; i++) {
        int bit = (n & bitmask) ? 0 : 1; // 取反操作
        binary |= (bit << i);              // 将每一位bit拼接到二进制数上
        bitmask <<= 1;                     // 移位，提取下一位
    }

    return (int)binary; // 将得到的二进制数转换为十进制数
}

int main(){

}
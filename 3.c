#include <stdio.h>
#include <string.h>

int findMaxSubStrZ(char * str){
    if(str == NULL)
        return 0;
    int length = 0;
    int pre = 0; // 上一个位置向左推了多长
    int cur = 0; // 现在的位置可以向左推多长
    int size = strlen(str);
    int arr[128] = {0};
    memset(arr, -1, sizeof (int) * 128);
    for (int i = 0; i < size; ++i) {
        int p1 = i - arr[str[i]];
        int p2 = pre + 1;
        cur = p1 < p2 ? p1 : p2;
        length = length > cur ? length : cur;
        pre = cur;
        arr[str[i]] = i;
    }
    return length;
}
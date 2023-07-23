//
// Created by Administrator on 2023/7/10.
//

#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int data;
    struct ListNode* next;
};

struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    // 逆置单链表
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;
    struct ListNode* current = head;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    if(n < 1)
        return NULL;
    struct ListNode* p = current;
    int i = 0;
    while(p != NULL && i < n - 1){
        p = p->next;
        i++;
    }
    struct ListNode * q = p->next;
    p->next = q->next;
    free(q);
    return current;

}
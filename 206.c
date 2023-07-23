//
// Created by Administrator on 2023/7/22.
//

//
// Created by Administrator on 2023/7/22.
//
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *reverse(struct Node *head) {
    // 当前结点指向头结点
    struct Node *current = head;
    // 前驱节点初始化为 NULL
    struct Node *prev = NULL;
    // 循环反转当前节点和前驱节点的指针
    while (current != NULL) {
        // 临时节点保存当前节点的下一节点
        struct Node *temp = current->next;
        // 当前节点的下一节点指向前驱节点,实现反转
        current->next = prev;
        // 前驱节点更新为当前节点
        prev = current;
        // 当前节点更新为临时保存的下一节点
        current = temp;
    }
    // 前驱节点现在变成新的头节点
    return prev;
}

// 打印链表
void printList(struct Node* head) {

    struct Node *current = head;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}
int main(){
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    struct Node* fifth = NULL;

    // 创建5个节点
    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof(struct Node));
    third = (struct Node*) malloc(sizeof(struct Node));
    fourth = (struct Node*) malloc(sizeof(struct Node));
    fifth = (struct Node*) malloc(sizeof(struct Node));

    // 连接5个节点形成链表
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    printList(head);
    struct Node* tail = reverse(head);
    printList(tail);
}
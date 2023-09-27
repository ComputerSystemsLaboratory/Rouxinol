#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

typedef struct node {
    struct node* prev;
    struct node* next;
    int data;
} node_t;

void print_list(node_t* head) {
    node_t* node = head->next;
    while(node) {
        printf("%d", node->data);
        // cout << node->data;
        node = node->next;
        if (node) {
            printf("%s", " ");
        }
    }
    cout << endl;
}

node_t* init() {
    node_t* head = (node_t*)malloc(sizeof(node_t));
    head->prev = NULL;
    head->next = NULL;
    head->data = -1;
    return head;
}

node_t* insert(node_t* head, int data) {
    node_t* node = (node_t*)malloc(sizeof(node_t));
    node->data = data;
    node->prev = head;
    node->next = head->next;
    head->next = node;
    if (node->next) {
        node->next->prev = node;
    } else {
        head->prev = node;
    }
    return node;
}

int delete_key(node_t* head, int key) {
    node_t* node = head->next;
    while(node) {
        if (node->data == key) {
            node->prev->next = node->next;
            if (node->next) {
                node->next->prev = node->prev;
            } else {
                head->prev = node->prev;
            }
            free(node);
            return 1;
        }
        node = node->next;
    }
    return -1;
}

int delete_first(node_t* head) {
    node_t* node = head->next;
    if (node->next != NULL)
        node->next->prev = head;
    head->next = node->next;
    free(node);
    return 1;
}

int delete_last(node_t* head) {
    node_t* node = head->prev;
    if (node->prev != NULL)
        node->prev->next = NULL;
    head->prev  = node->prev;
    free(node);
    return 1;
}

int getKey(char* str, int length) {
    int key = 0;
    int l = length - 2;
    char c = str[l];
    int cnt = 1;
    while (c != ' ') {
        int v = c - '0';
        key += v * cnt;
        cnt *= 10;
        c = str[--l];
    }
    return key;
}

int main() {
    int n = 0;
    scanf("%d", &n);
    getchar();
    node_t* list = init();
    fflush(stdin);
    for(int i = 0; i < n; i++) {
        char str[20];
        fgets(str, sizeof(str), stdin);
        int len = strlen(str);
        if (str[6] == ' ') {
            if (str[0] == 'i') {
                insert(list, getKey(str, len));
                continue;
            }
            delete_key(list, getKey(str, len));
            continue;
        }

        if (len == 12) {
            delete_first(list);
            continue;
        }
        delete_last(list);
    }
    print_list(list);

    return 0;
}
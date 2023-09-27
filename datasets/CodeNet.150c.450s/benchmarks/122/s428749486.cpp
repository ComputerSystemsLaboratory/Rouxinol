#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

#define A_MAX 2000000
#define INVALID -2000000000

int A[A_MAX];

void insert(int i, int* start) {
    int parent = i / 2;
//    printf(" key[%d]  = %d, p key[%d] = %d\n", i, *(start+i-1), parent, *(start+parent-1));
    if (parent != 0) {
        if (*(start+i-1) > *(start+parent-1)) {
            int tmp = *(start+i-1);
            *(start+i-1) = *(start+parent-1);
            *(start+parent-1) = tmp;
            insert(parent, start);
        }
    }
}

void max_heapify(int i, int *start, int n) {
    int l = i * 2;
    int r = i * 2 + 1;
    int largest;
    if (l <= n && *(start+l-1) > *(start+i-1)) {
        largest = l;
    }
    else {
        largest = i;
    }
    if (r <= n && *(start+r-1) > *(start+largest-1)) {
        largest = r;
    }

    if (largest != i) {
        int tmp = *(start+i-1);
        *(start+i-1) = *(start+largest-1);
        *(start+largest-1) = tmp;
        max_heapify(largest, start, n);
    }
}

void extract(int *start, int n) {
    int parent = n / 2;
    
    // copy last key to root
    *start = *(start + n - 1);

    max_heapify(1, start, n-1);
}

void build_max_heap(int *start, int n) {
    for (int i = n/2; i > 0; i--) {
        max_heapify(i, start, n);
    }
}


void print_queue(int *start, int n) {
    for (int i = 0; i < n; i++) {
        printf(" %d", *(start+i));
    }
    printf("\n");
}


int main() {
    int* start = A;
    int* end = A;
    int n = 0;
    char order[10];
    int key;

    while (1) {
        scanf("%s", order);
        if (strcmp(order, "insert") == 0) {
            cin >> key;
            *end = key;
            n++;
//            printf("insert %d\n", key);
            insert(n, start);
            end++;
        }
        else if (strcmp(order, "extract") == 0) {
            key = *start;
            extract(start, n);
            end--;
            n--;
            cout << key << endl;
        }
        else if (strcmp(order, "end") == 0) {
            break;
        }
//        print_queue(start, n);
    }
        
    return 0;
}


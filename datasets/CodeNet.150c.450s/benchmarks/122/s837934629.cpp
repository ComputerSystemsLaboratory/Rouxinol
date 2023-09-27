#include <stdio.h>
#include <iostream>
#include <string>
#define NUM 10000000
#define NIL -1
#define ll long long

using namespace std;

ll heap[NUM];
int H;

void increaseKey(int index){
    if(index == 1)
        return;
    
    if(heap[index / 2] < heap[index]){
        swap(heap[index / 2], heap[index]);
        increaseKey(index / 2);
    }

    return;
}

void maxHeapify(int index){
    int max_index;
    if(heap[index * 2] < heap[index * 2 + 1]){
        max_index = index * 2 + 1;
    }else{
        max_index = index * 2;
    }

    if(heap[max_index] > heap[index]){
        swap(heap[index], heap[max_index]);
        maxHeapify(max_index);
    }

    return;
}

void insert(ll num){
    H++;
    heap[H] = num;
    increaseKey(H);
}

void extract(){
    printf("%lld\n", heap[1]);
    swap(heap[1], heap[H]);
    heap[H] = NIL;
    H--;

    maxHeapify(1);
}

void init(){
    H = 0;
    for(int i = 0; i < NUM; i++){
        heap[i] = NIL;
    }
}

int main(void){
    init();

    string s;
    cin >> s;

    while(s != "end"){
        if(s == "insert"){
            ll num;
            scanf("%lld", &num);
            insert(num);
        }else if(s == "extract"){
            extract();
        }else{
            printf("unknow command\n");
        }

        cin >> s;
    }

    return 0;
}


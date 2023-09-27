//
//  main.cpp
//  priority_queue
//
//  Created by ???????????? on 2017/10/17.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#define MAX 200000000

using namespace std;

int h, A[MAX];


void max_heepify(int ind){
    int left = ind*2;
    int right = ind*2+1;
    int largest;
    if (left <= h && A[left] > A[ind] ){
        largest = left;
    }
    else{
        largest = ind;
    }
    if(right <= h && A[right] > A[largest]){
        largest = right;
    }
    
    if(largest != ind){
        int temp = A[ind];
        A[ind] = A[largest];
        A[largest] = temp;
        
        max_heepify(largest);
    }
}

void heap_increasekey(int i, int key){
    if(key < A[i]) cout << "Error: New key is smaller than current key"<<endl;
    A[i] = key;
    while(i > 1 && A[i/2] < A[i]){
        int temp = A[i];
        A[i] = A[i/2];
        A[i/2] = temp;
        
        i = i/2;
    }
}

void insert(int key){
    h++;
    A[h] = -MAX;
    heap_increasekey(h, key);
}

int heap_extramax(){
    if (h < 1) {
        cout << "Heap underflow" <<endl;
        return 0;
    }
    int max = A[1];
    A[1] = A[h];
    h--;
    max_heepify(1);
    return max;
}


int main(int argc, const char * argv[]) {
    char command[10];
    int key;
    h = 0;
    while(true){
        scanf("%s", command);
        if(command[0] == 'i'){
            scanf("%d", &key);
            insert(key);
        }
        else if(command[0] == 'e' && command[1] == 'x'){
            cout << heap_extramax() << endl;
        }
        else{
            break;
        }
    }
    
//    std::cout << "Hello, World!\n";
    return 0;
}
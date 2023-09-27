//
//  main.cpp
//  maximum_heap
//
//  Created by ???????????? on 2017/10/16.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>

using namespace std;

int n;
int A[500010];

void max_heepify(int A[], int ind){
    int left = ind*2;
    int right = ind*2+1;
    int largest;
    if (left <= n && A[left] > A[ind] ){
        largest = left;
    }
    else{
        largest = ind;
    }
    if(right <= n && A[right] > A[largest]){
        largest = right;
    }
    
    if(largest != ind){
        int temp = A[ind];
        A[ind] = A[largest];
        A[largest] = temp;
        
        max_heepify(A, largest);
    }
    
}

void build_maxheep(int A[]){
    for(int i = n/2; i> 0; i--){
        max_heepify(A, i);
    }
}

int main(int argc, const char * argv[]) {
    scanf("%d", &n);
//    int A[n];
    for(int i = 1; i <= n; i++ ){
        scanf("%d", &A[i]);
    }
    build_maxheep(A);
    
    for(int i = 1; i<=n; i++){
        cout<<" ";
        cout<<A[i];
    }
    cout <<endl;
//    std::cout << "Hello, World!\n";
    return 0;
}
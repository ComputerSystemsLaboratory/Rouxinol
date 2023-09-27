//
//  main.cpp
//  quick_sort
//
//  Created by ???????????? on 2017/10/08.
//  Copyright ?? 2017 ????????????. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <cmath>
#include <climits>

using namespace std;

struct Card{
    char suit;
    int num;
};

void swap(Card *a, Card *b){
    Card temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Card cards[], int p, int r){
    int x = cards[r].num;
    int i = p - 1;
    for(int j = p; j < r; j ++){
        if(cards[j].num <= x){
            i++;
            swap(cards[i], cards[j]);
        }
    }
    swap(cards[i+1], cards[r]);
    return i+1;
}

void quick_sort(Card cards[], int p, int r){
    if (p < r){
        int q = partition(cards, p, r);
        quick_sort(cards, p, q-1);
        quick_sort(cards, q+1, r);
    }
}

void merge(Card S[], int left, int mid, int right){
    int i, j, k, n1, n2;
    n1 = mid - left;
    n2 = right - mid;
    Card L[n1+1], R[n2+1];
    for (i = 0; i < n1; i++){
        L[i] = S[left+i];
        
    }
    for (i = 0; i < n2; i++){
        R[i] = S[mid+i];
    }
    L[n1].num = INT_MAX;
    R[n2].num = INT_MAX;
    
    
    i = 0;
    j = 0;
    
    for( k = left; k < right; k++ ){
        if(L[i].num <= R[j].num){
            
            S[k] = L[i];
            i++;
        }
        else{
            S[k] = R[j];
            j++;
        }
    }
}


void merge_sort(Card S[], int left, int right){
    if (left+1 < right){
        int mid = (left + right)/2;
        merge_sort(S, left, mid);
        merge_sort(S, mid, right);
        merge(S, left, mid, right);
    }
}

int main(int argc, const char * argv[]) {
    int n, i;
    scanf("%d", &n);
    Card cards[n], copy[n];
    for(i = 0; i < n; i++){
        scanf("%s %d", &cards[i].suit, &cards[i].num);
        copy[i] = cards[i];
    }
    quick_sort(cards, 0, n - 1);
    merge_sort(copy,  0, n );
    
    int is_stable = 1;
    for(i = 0; i < n; i++){
        if(copy[i].suit!=cards[i].suit)is_stable = 0;
    }
    if(is_stable)cout << "Stable" <<endl;
    else cout << "Not stable" << endl;
    
    
    for(i = 0; i < n; i++){
        cout << cards[i].suit << " " << cards[i].num << endl;
    }
    
    return 0;
}
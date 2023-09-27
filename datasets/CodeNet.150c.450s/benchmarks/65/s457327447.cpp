#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <cstdint>
#include <unordered_set>
#include <unordered_map>
using namespace std;
typedef long long i64;
typedef vector<int> ivec;
typedef vector<string> svec;

struct Card {
    char suit;
    int value;
};

void bubblesort(struct Card A[], int N){
    int flag = 1;
    while(flag){
        flag = 0;
        for(int j = N-1; j > 0; j--){
            if (A[j].value < A[j-1].value){
                swap(A[j], A[j-1]);
                flag = 1;
            }
        }
    }
}

void selectionsort(struct Card A[], int N){
    for(int i=0; i<N; i++){
        int minj = i;
        for(int j=i; j<N; j++){
            if (A[j].value < A[minj].value) minj =j;
        }
        if(i != minj){
            swap(A[i], A[minj]);
        }
    }
}

void presentation_card(struct Card A[], int N){
    for(int i=0; i<N; i++){
        if(i > 0) printf(" ");
        printf("%c", A[i].suit);
        printf("%d", A[i].value);
    }
    printf("\n");
}



int main(){
    //?????°?????£?¨?
    Card A1[36];
    Card A2[36];
    int N;
    bool stable = true;

    //?????????????????????
    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf(" %c%d", &A1[i].suit, &A1[i].value);
    for(int i = 0; i < N; i++) A2[i] = A1[i];

    //?????????


    //??¢?????´?????????
    bubblesort(A1, N);
    selectionsort(A2, N);
    for (int i=0; i<N; i++){
        if (A1[i].suit != A2[i].suit) stable = false;
    }


    //??????
    presentation_card(A1, N);
    printf("Stable\n");
    presentation_card(A2, N);
    if (stable) printf("Stable\n");
    else printf("Not stable\n");
    return 0;
}
#include<iostream>

#define MAX 100000

typedef unsigned long long ULL;

using namespace std;

int main(){
    int N,Q;
    int i;
    ULL *count;
    ULL sum;
    int A,B,C;

    cin >> N;
    count = new ULL[MAX];
    sum = 0;
    for(i=0;i<MAX;i++){
        count[i] = 0;
    }
    for(i=0;i<N;i++){
        cin >> A;
        count[A-1]++;
        sum += A;
    }
    cin >> Q;
    for(i=0;i<Q;i++){
        cin >> B >> C;
        sum += count[B-1] * (C - B);
        count[C-1] += count[B-1];
        count[B-1] = 0;
        cout << sum << endl;
    }
}
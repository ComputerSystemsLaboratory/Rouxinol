#include<stdio.h>
#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

const int MAX = 200000;

int main(){
    int N,K;
    int A[MAX];

    cin >> N >> K;
    for(int i = 0;i < N;i++){
        cin >> A[i];
    }

    for(int i = 0;i < N - K;i++){
        if(A[i] < A[K + i])cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}
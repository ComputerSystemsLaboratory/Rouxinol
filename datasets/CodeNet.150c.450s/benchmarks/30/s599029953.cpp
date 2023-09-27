
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

void presentation_array(int A[], int N){
    for(int i=0; i<N; i++){
        if(i > 0) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
}

int main(){
    //?????°?????£?¨?
    int A[100];
    int N;
    int ans;

    //?????????????????????
    scanf("%d", &N);
    for(int i = 0; i < N; i++) scanf("%d", &A[i]);

    //?????????


    //??¢?????´?????????
    for(int i=0; i<N; i++){
        int minj = i;
        for(int j=i; j<N; j++){
            if (A[j] < A[minj]) minj =j;
        }
        if(i != minj){
            swap(A[i], A[minj]);
            ans++;
        }
        
    }

    //??????
    presentation_array(A, N);
    printf("%d\n", ans);
    return 0;
}

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

int main(){
    //?????°?????£?¨?
    int R[100];
    int N;

    //?????????????????????
    scanf("%d", &N);
    for (int i=0; i<N; i++) scanf("%d", &R[i]);

    //?????????


    //??¢?????´?????????

    for (int k=0; k<N-1; k++) printf("%d ", R[k]);
    printf("%d",R[N-1]);
    printf("\n");

    for (int i=1; i<N; i++){

        int v = R[i];
        int j = i-1;

        while (j >= 0 && R[j] > v){
            R[j+1] = R[j];
            j--;
        }

        R[j+1] = v;

        for (int k=0; k<N-1; k++) printf("%d ", R[k]);
        printf("%d",R[N-1]);
        printf("\n");

    }

    //??????

    return 0;
}
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<queue>
#include<functional>
#include<map>
#include<set>
#include<cstring>
#include<string>
#include<stack>
#include<math.h>
#include<stdlib.h>
using namespace std;
#define int long long
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<int, char> pic;
typedef priority_queue<pii, vector<pii>, greater<pii> > RPQ;
#define mk make_pair
#define INF (1 << 30)
#define INFL (1ll << 60ll)
#define mod 1000000007

int N, heap[600000];

void maxheapify(int i){
    if(i > N / 2)return;
    int l = i * 2;
    int r = i * 2 + 1;
    int largest = i;
    if(heap[i] < heap[l] && l <= N){
        largest = l;
    }
    if(r <= N){
        if(heap[largest] < heap[r])largest = r;
    }
    if(largest != i){
        swap(heap[i], heap[largest]);
        maxheapify(largest);
    }
}

signed main(){
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> heap[i];
    }
    for(int i = N / 2; i >= 1; i--){
        maxheapify(i);
    }
    for(int i = 1; i <= N; i++){
        printf(" %lld", heap[i]);
    }
    printf("\n");


    return 0;
}

/*

*/

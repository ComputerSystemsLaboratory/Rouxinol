#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;

struct Card {
    char suit,value;
};

void bubble_sort(Card C[],int n) {
    rep(i,n) {
        for(int j=n-1;j>=i+1;j--) {
            if(C[j].value < C[j-1].value) swap(C[j-1], C[j]);
        }
    }
}
void selection_sort(Card C[], int n) {
    rep(i,n) {
        int min_idx = i;
        for(int j=i+1;j<n;j++) {
            if(C[j].value < C[min_idx].value) min_idx=j;
        }
        swap(C[i],C[min_idx]);
    }
}

bool is_stable(Card C1[],Card C2[],int n) {
    bool res=true;
    rep(i,n) res&=C1[i].suit == C2[i].suit;
    return res;
}

int main() {
    int n;
    Card C1[40],C2[40];
    cin>>n;
    rep(i,n) cin>>C1[i].suit>>C1[i].value;
    rep(i,n) C2[i]=C1[i];
    bubble_sort(C1,n);
    selection_sort(C2,n);
    rep(i,n) cout<<(i==0?"":" ")<<C1[i].suit<<C1[i].value;
    cout<<endl;
    cout<<"Stable"<<endl;
    rep(i,n) cout<<(i==0?"":" ")<<C2[i].suit<<C2[i].value;
    cout<<endl;
    if(is_stable(C1,C2,n)) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    return 0;
}
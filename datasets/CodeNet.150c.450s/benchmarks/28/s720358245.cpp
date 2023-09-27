#include <iostream>
#include <queue>
using namespace std;
bool check(queue<int> q, long long middle,int k){
    int cnt = 0;
    long long tmp = 0;
    while(!q.empty()){
        if(middle < q.front()) return false;
        tmp += q.front();
        if(tmp <= middle) q.pop();
        else{
            tmp = 0;
            cnt++;
        }
    }
    cnt++;
    return (cnt <= k);
}
int main(void){
    int n,k; cin >> n >> k;
    queue<int> q;
    int xnum = 0;
    for(int i=0; i<n; ++i){
        int x; cin >> x;
        q.push(x);
        xnum =max(xnum,x);
    }
    long long first = 0, last = xnum*n/k+1;
    while(last - first > 1){
        long long middle = (long long)(first + last)/2;
        if(check(q,middle,k)) last = middle;
        else first = middle;
    }
    cout << last << endl;
    return 0;
}

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

long merge_cnt(vector<int> &a) {
    if (a.size() <= 1) {
        return 0;
    }
    
    long cnt = 0;
    vector<int> b(a.begin(), a.begin()+ a.size() / 2);
    vector<int> c(a.begin()+ a.size() /2, a.end());
    
    cnt += merge_cnt(b);
    cnt += merge_cnt(c);
    
    int ai = 0, bi = 0, ci = 0;
    
    while (ai < a.size()) {
        if ( bi < b.size() && (ci == c.size() || b[bi] <= c[ci]) ) {
            a[ai++] = b[bi++];
        } else {
            cnt += a.size() / 2 - bi;
            a[ai++] = c[ci++];
        }
    }
    return cnt;
}

int main(void){
    int length;
    long num;
    vector<int> a;
    
    cin >> length;
    for(int i = 0;i < length;++i){
        int n;
        cin >> n;
        a.push_back(n);
    }
    num = merge_cnt(a);
    printf("%ld\n",num);
}

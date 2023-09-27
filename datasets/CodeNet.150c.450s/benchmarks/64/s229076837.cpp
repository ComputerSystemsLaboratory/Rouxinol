#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

bool A[2001] = {true};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, t;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>t;
        for(int j=2000-t; j>=0; j--) {
            if(A[j]) A[j+t]=true;
        }
    }
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>t;
        if(A[t]) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
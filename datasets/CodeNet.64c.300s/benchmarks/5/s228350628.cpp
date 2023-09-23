#include <iostream>
#include <utility>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h[10];
    for(int i=0; i<10; i++) {
        cin>>h[i];
    }
    for(int i=0; i<3; i++) {
        for(int j=9; j>i; --j) {
            if(h[j-1]<h[j]) swap(h[j-1], h[j]);
        }
    }
    for(int i=0; i<3; i++) cout<<h[i]<<'\n';
    return 0;
}


#include <iostream>
#include <utility>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a[5];
    cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    for(int i=4; i>=0; i--) {
        for(int j=0; j<i; j++) {
            if(a[j]<a[j+1]) swap(a[j], a[j+1]);
        }
    }
    cout<<a[0]<<' '<<a[1]<<' '<<a[2]<<' '<<a[3]<<' '<<a[4]<<'\n';
    return 0;
}
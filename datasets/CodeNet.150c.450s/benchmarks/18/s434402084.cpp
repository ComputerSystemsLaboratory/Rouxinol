/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0007&lang=jp*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,r=100;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        r=ceil(r*1.05);
    }
    cout<<r*1000<<endl;
    return 0;
}
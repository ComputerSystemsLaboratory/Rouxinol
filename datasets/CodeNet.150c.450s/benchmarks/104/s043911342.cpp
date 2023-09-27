#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int s[50]={},w,n,a,b,i;
    cin >> w;
    for(i=1;i<=w;i++){
        s[i] = i;
    }
    cin >> n;
    for(i=1;i<=n;i++){
        scanf("%d,%d",&a,&b);
        swap(s[a],s[b]);
    }
    for(int i=1;i<=w;i++){
        cout << s[i] << endl;
    }
    return 0;
}
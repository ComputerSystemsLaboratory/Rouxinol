#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define _GLIBCXX_DEBUG
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int x,y,z;
    cin >> x >> y >>z;
    if(x<y&&y<z)printf("%s\n","Yes");
    //else if(x>y)printf("%s\n","a > b");
    else printf("%s\n","No");
    }

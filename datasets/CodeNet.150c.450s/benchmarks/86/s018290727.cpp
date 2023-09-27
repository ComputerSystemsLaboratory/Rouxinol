#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#include<string>
#include<cmath>
#include<set>
#include<stack>

using namespace std;
typedef unsigned long long ll;

int main(){
    int n,m,p;
    while(cin>>n>>m>>p,n){
        int x,y;
        int tot=0;
        for(int i=0;i<n;i++){
            cin>>x;
            tot+=x;
            if(i==m-1){
                y=x;
            }
        }
        cout<<(y==0?0:(tot*100*(100-p)/100)/y)<<endl;
    }
    return 0;
}
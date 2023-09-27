#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int main(){
    int e;
    while(1){
        cin>>e;
        if(e==0)return 0;
        set<int>S[3];
        int a=0,b=0;
        int mi=1e9;
        while(a*a*a<=e)a++;
        while(b*b<=e)b++;
        a--;b--;
        for(int i=a;i>=0;i--){
            for(int j=b;j>=0;j--){
                if(e-(i*i*i)-(j*j)<0)continue;
                mi=min(mi,i+j+(e-(i*i*i)-(j*j)));
                break;
            }
        }
        cout<<mi<<endl;
    }
}
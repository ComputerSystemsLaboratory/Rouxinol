#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    while(cin>>n,n){
        int a[150];
        for(int i=0;i<150;i++)a[i]=0;
        while(n--){
            char x,y;
            cin>>x>>y;
            a[x]=y;
        }
        int m;
        queue<char>Q;
        cin>>m;
        while(m--){
            char z;
            cin>>z;
            if(a[z]!=0)z=a[z];
            Q.push(z);

        }
        while(Q.size()){
            cout<<Q.front();
            Q.pop();
        }
        cout<<endl;
    }
    return 0;
}
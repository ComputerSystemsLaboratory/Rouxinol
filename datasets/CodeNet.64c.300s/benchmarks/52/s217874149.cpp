#include<iostream>
using namespace std;
int cnt=0,s;
void kumiawase(int i,int n,int ALL){
    for(;i<10;i++){
        if(n==1){
            if(s==ALL+i){
                cnt++;
            }
            continue;
        }
        kumiawase(i+1,n-1,ALL+i);
    }
}

int main()
{
    int n,i=0;
    while(cin>>n>>s){
        if(n==0&&s==0) break;
        if(i==50) break;
        kumiawase(0,n,0);
        cout<<cnt<<endl;
        cnt=0;
        i++;
    }
}
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>
#define pr(x) cout<<#x<<" "<<x;
#define pl(x) cout<<#x<<" "<<x<<endl;
#include<math.h>
#include<algorithm>
using namespace std;
int num[10];
bool dfs(int step,int btop,int ctop){
    if(step==9){
        if(num[step]>btop||num[step]>ctop){
            return true;
        }
        else return false;
    }
    bool b = false;
    bool c = false;
    if(num[step]>btop){b = dfs(step+1,num[step],ctop);}
    if(num[step]>ctop){c = dfs(step+1,btop,num[step]);}

    return (b||c);

}

int main(){
    int t;
    cin>>t;
    while(t--){
      memset(num,0,sizeof(num));
      for(int i = 0;i<10;i++){
        cin>>num[i];
      }
      bool ans = dfs(0,0,0);
      if(ans){cout<<"YES"<<endl;continue;}
      else{cout<<"NO"<<endl;continue;}


    }

}
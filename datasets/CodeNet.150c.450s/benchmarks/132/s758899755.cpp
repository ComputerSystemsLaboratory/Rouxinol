#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define rep(i,j,k) for(int i=j;i<k;i++)
int main(void){
    while(1){
    int n,p,index=0,wan;
    cin>>n>>p;
    if(n==0 && p==0)break;
    vector<int> v(n,0);
    wan=p;
    
    while(1){
       index++;
       if(index>n-1)index=0;
       
       if(wan!=0){
           v[index]++;
           wan--;
           if(wan==0){
               bool judge=true;
               rep(i,0,n){
                   if(v[i]!=0 && i!=index){
                       judge=false;
                       break;
                   }
               }
               if(judge){
                   cout<<(((index-1)>=0)?(index-1):(n-1))<<endl;
                   break;
               }
           }
       }else {
           wan=v[index];
           v[index]=0;
       }
    }
    }
    
    return 0;
}
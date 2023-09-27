#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,p,a[51];
  while(cin>>n>>p){
    if(n==0&&p==0){break;}
    for(int i=0; i<n; i++){
    	a[i]=0;
    }
    int x=0,ans;
    int k=p;
    while(1){
    	if(k>0){
      		a[x%n]++;
          	k--;
          	if(a[x%n]==p){ans=x%n; break;}
        }
    	else{
      		k=a[x%n];
      		a[x%n]=0;
        }
      	x++;
    }
    cout<<ans<<endl;
  }
}
      
    
    

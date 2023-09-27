#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include<queue>
#include<cmath>
#include<math.h>
using namespace std;
int main(){
    long int a[200005],n,k;
    memset(a,0,sizeof(a));
    cin>>n>>k;
    for(long int i=0;i<n;i++){
    	cin>>a[i];
	}
    for(long int i=k;i<n;i++){
    	if(a[i]>a[i-k])cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;
	}
    
    
    
    return 0;
}

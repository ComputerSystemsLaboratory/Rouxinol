#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(void){
	while(1){
int n;
cin>>n;
if(n==0)break;
int ans=0,w=0;
for(int i=1;i<n/2+1;i++){
	w=0;
	for(int j=i;j<n;j++){
	w+=j;
	if(w==n)ans++;
	if(w>=n){
		w=0;
		break;
	}
	}


}
	
cout<<ans<<endl;
}
return 0;
}


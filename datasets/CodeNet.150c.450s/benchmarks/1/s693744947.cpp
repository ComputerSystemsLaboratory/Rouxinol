#include<iostream>
#include<algorithm>
#include<climits>
 
using namespace std;
 
int ans[100001]={-1};
 
int main(){
    int n=0;
    cin>>n;
	for(int i=1;i<n+1;i++){
		ans[i]=INT_MAX;
	}
    for(int i=0;i<n;i++){
        int input=0;
        cin>>input;
		ans[lower_bound(ans,ans+n,input)-ans]=input;
	}
	cout<<lower_bound(ans,ans+n+1,INT_MAX)-ans-1<<endl;
    return 0;
}
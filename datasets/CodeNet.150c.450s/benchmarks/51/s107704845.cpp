#include<iostream>//aoj511
#include<algorithm>
using namespace std;
int main(void)
{
	int n[30],i,j=1,cnt=0;
	for(i=0;i<28;i++) cin>>n[i];
	sort(n,n+28);
	for(i=0;i<28;i++){
		if(n[i]!=j){
			cout<<j<<endl;
			cnt++;
			j++;
		}
		j++;
	}
	if(cnt==1) cout<<"30"<<endl;
	return 0;
}

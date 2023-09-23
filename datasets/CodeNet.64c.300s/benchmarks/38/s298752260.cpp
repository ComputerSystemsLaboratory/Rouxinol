#include <iostream>
using namespace std;
int N,a[10];
bool ans;
bool test(int i){
	int b=0,c=0;
	for(int j=0;j<10;j++){
		if(i>>j&1){
			if(b>a[j])return false;
			else b=a[j];
		}else{
			if(c>a[j])return false;
			else c=a[j];
		}
	}
	return true;
}
int main()
{
    cin>>N;
	while(N--){
		ans=false;
		for(int i=0;i<10;i++)cin>>a[i];
		for(int i=0;i<1<<10;i++){
			if(test(i)){
				ans=true;
				break;
			}
		}
		if(ans)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
    return 0;
}
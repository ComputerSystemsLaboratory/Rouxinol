#include <iostream>
using namespace std;

int main()
{	
	while(true){
		int n,a[10000]={},b[10000]={},ascore=0,bscore=0;
		cin>>n;
		if(n==0) break;
		for(int i=0;i<n;i++){
			cin>>a[i];
			cin>>b[i];
			if(a[i]>b[i]){
				ascore+=a[i]+b[i];
			}else if(a[i]<b[i]){
				bscore+=a[i]+b[i];
			}else if(a[i]==b[i]){
				ascore+=a[i];
				bscore+=b[i];
			}
		}
		cout<<ascore<<" "<<bscore<<endl;
	}
	return 0;
}
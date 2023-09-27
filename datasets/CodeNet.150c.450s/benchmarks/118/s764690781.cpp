#include<iostream>
#include<vector>
using namespace std;
int main(void){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y,m,d;
		cin>>y>>m>>d;
		int ans;
		if(m%2==0&&y%3!=0){
			d=19-d;
		}else{
			d=20-d;
		}
		if(y%3==0){
			m=(10-m)*20;
		}else{
			m=((11-m)/2)*19+((10-m)/2)*20;
		}
		y=999-y;
		
		
		ans=((y+2)/3)*5+y*195+m+d+1;
		cout<<ans<<endl;
	}
	return 0;
}

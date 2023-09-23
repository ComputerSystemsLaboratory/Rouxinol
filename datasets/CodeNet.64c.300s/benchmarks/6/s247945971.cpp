#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,b,f,r,v;  //??¶????\????????????¨?±?????????°
	int a[4][3][10]={0};
	int i,j,x,y;
	
	cin>>n;
	for(i=0;i<n;i++){
		cin>>b>>f>>r>>v;
		a[b-1][f-1][r-1]+=v;
	}
	
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			for(x=0;x<10;x++)
					cout<<" "<<a[i][j][x];
			cout<<endl;
		}
		if(i==3)
			break;
		cout<<"####################\n";
	}
}
	
#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,x=0,y=0;
	cin>>n;
	for(int i=0;i<n;i++){
		string a,b;
		cin>>a>>b;
		int r=a.compare(b);
		if(!r)++x,++y;
		else if(r>0)x+=3;
		else y+=3;
	}
	cout<<x<<" "<<y<<endl;
	return 0;
}
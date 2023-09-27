#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,a,b,c,x;
	while(true){
		cin>>n>>a>>b>>c>>x;
		if(n==0)
			break;
		int y,count=0;
		for(int i=0;i<n;i++){
			cin>>y;
			while(true){
			if(x==y){
				x=(a*x+b)%c;
				count++;
				break;
			}
			if(count>10001||count==-1)
				break;
			x=(a*x+b)%c;
			count++;
			}
			if(count>10001)
				count=-1;
		}
		if(count==-1)
			cout<<"-1"<<endl;
		else
			cout<<count-1<<endl;
	}
    return 0;
}
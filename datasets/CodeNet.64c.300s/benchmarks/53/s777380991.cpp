#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c,i,j,count=0;
	cin>>a>>b>>c;
	for(i=a;i<=b;i++){
		if(a>b){
		break;
		}
		j=c%i;
		if(j==0){
			count++;
		}
	}
	cout<<count<<endl;
}
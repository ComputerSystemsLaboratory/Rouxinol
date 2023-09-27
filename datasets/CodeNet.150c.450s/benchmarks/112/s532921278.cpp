#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m;
	char a[100],b[100],c[100001];
	while(true){
	cin>>n;
	if(n==0)
		break;
	for(int i=0;i<n;i++)
		cin>>a[i]>>b[i];
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>c[i];
		int j=0;
		while(true){
			if(a[j]==c[i]){
				c[i]=b[j];
				break;
			}
			j++;
			if(j==n)
				break;
		}
	}
	for(int i=0;i<m;i++)
		cout<<c[i];
	cout<<endl;
	}
    return 0;
}
 
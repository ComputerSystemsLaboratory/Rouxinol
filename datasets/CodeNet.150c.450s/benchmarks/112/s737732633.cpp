#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	
	while(1){
	int i,j;
	int n,m;
	string a,b;
	vector<string> c,d;
	string x;
	vector<string> y;
	
		cin>>n;
		if(n==0) break;
		for(i=0;i<n;i++){
			cin>>a;
			cin>>b;
			c.push_back(a);
			d.push_back(b);
		}

		cin>>m;
		for(i=0;i<m;i++){
			cin>>x;
			for(j=0;j<n;j++){
				if(x==c[j]){
					x=d[j];
					break;
				}
			}
			y.push_back(x);
		}
		
		for(i=0;i<m;i++) cout<<y[i];
		cout<<endl;
	}
return 0;
}
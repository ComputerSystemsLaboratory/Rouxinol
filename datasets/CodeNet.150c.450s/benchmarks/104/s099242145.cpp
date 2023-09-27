#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int w,n;
	cin>>w>>n;
	int c[31];
	int a,b;
	for(int x=1;x<=w;x++){
		c[x]=x;
	}
	for(int y=0;y<n;y++){
		scanf("%d,%d",&a,&b);
		swap(c[a],c[b]);
	}
	for(int z=1;z<=w;z++){
		cout<<c[z]<<endl;
	}
	return 0;
	}


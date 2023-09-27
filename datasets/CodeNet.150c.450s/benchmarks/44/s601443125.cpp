#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a[4],b[4],hit=0,brow=0;
		while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
			hit=0;
			brow=0;
		for(int j=0;j<4;j++)cin>>b[j];
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(i==j&&a[i]==b[j])hit++;
				else if(a[i]==b[j])brow++;
			}
		}
		cout<<hit<<' '<<brow<<endl;
}
}
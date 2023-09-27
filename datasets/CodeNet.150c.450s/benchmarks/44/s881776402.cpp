#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	bool num[10];
	int a[4],b[4],hit,blow;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
		cin>>b[0]>>b[1]>>b[2]>>b[3];
		hit=0;blow=0;
		for(int i=0;i<10;i++){
			num[i]=false;
		}
		for(int i=0;i<4;i++){
			num[a[i]]=true;
		}
		for(int i=0;i<4;i++){
			if(b[i]==a[i])hit++;
			else if(num[b[i]])blow++;
		}
		cout<<hit<<" "<<blow<<endl;
	}
	return 0;
}
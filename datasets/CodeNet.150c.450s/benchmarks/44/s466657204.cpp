#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a[4],b[4];
	int hit,blow;
	
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
		hit = blow = 0;
		
		for(int i=0;i<4;++i)if(a[i]==b[i])++hit;
		for(int i=0;i<4;++i)for(int j=0;j<4;++j)if(i!=j)if(a[i]==b[j])++blow;
		
		cout<<hit<<" "<<blow<<endl;
	}
	return 0;
}
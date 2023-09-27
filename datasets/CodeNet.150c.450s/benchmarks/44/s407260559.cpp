#include <iostream>
using namespace std;

int main()
{
	
	int a[4], b[4];
	while(cin>>a[0]){
		
		int i,j;
		for(i=1;i<4;i++){
			cin>>a[i];
		}
		for(i=0;i<4;i++){
			cin>>b[i];
		}
		
		int hit = 0;
		int blow = 0;
		for(i=0;i<4;i++){
			if(a[i] == b[i]){
				hit++;
			}
		}
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(a[i] == b[j] && i != j){
					blow++;
				}
			}
		}
		cout<<hit<<' '<<blow<<endl;
	}
	return 0;
}
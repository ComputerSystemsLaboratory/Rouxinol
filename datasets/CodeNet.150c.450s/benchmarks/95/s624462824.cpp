#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int a=0,k=0,pre=0;
		if(n==0) break;
		string f;
		for(int i=0;i<n;i++){
			cin>>f;
			if(f=="lu") a=a+1;
			if(f=="ld") a=a-1;
			if(f=="ru") a=a+10;
			if(f=="rd") a=a-10;
			if(pre==0&&a==11){
				k++;
				pre=11;
			}
			if(pre==11&&a==0){
				k++;
				pre=0;
			}
		}
		cout<<k<<endl;
	}
    return 0;
}
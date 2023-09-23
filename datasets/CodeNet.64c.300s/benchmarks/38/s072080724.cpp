#include <iostream>
#define MAX(a,b) ((a>b)?(a):(b))
using namespace std;

int main(void){
	int a,b;
	int n;
	int k[10];
	int i;
	cin>>n;
	while(n--){
		a=b=-1;
		for(i=0;i<10;i++) cin>>k[i];
		for(i=0;i<10;i++){
			if(a>k[i]&&b>k[i])break;
			if(k[i]>a&&k[i]>b){
				if(a>b)a=k[i];
				else b=k[i];
			}else if(k[i]>a)a=k[i];
			else if(k[i]>b)b=k[i];
		}
		if(i==10)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
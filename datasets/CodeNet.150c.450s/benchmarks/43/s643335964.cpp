#include <iostream>
using namespace std;

int main(){
	int i,n,a,b;
	long apoint=0,bpoint=0;
	while(1){
		cin >> n;
		if(!n) break;
		for(i=0;i<n;i++){
			cin >> a;
			cin >> b;
			if(a>b){apoint+=a;apoint+=b;}
			else if(b>a){bpoint+=a;bpoint+=b;}
			else {apoint+=a;bpoint+=b;}
		}
		cout << apoint <<' ' << bpoint << endl;
		apoint=0;bpoint=0;
	}
	return 0;
}
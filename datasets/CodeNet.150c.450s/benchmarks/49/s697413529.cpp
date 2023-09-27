#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int a[100];
	int b,sum=0,point;
	while(1){
		cin >> b;
		if(b==0) break;
		for(int i=0;i<b;i++){
			cin >> a[i];
			
		}
		sort(a,a+b);
		for(int j=1;j<b-1;j++){
			sum+=a[j];
		}
		point=sum/(b-2);
		cout << point << endl;
		sum=0;
		
	}
	return 0;
}
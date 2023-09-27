
#include <iostream>
#include <string>
using namespace std;


int main(){
	
	string a;
	while(1){
		cin >> a;
		if(a[0] == '0')break;
		
		int b[10] = {};
		for(int i = 0;i < 1000;i++){
			if(!a[i])break;
			if(a[i] == '1')b[1]++;
			else if(a[i] == '2')b[2]++;
			else if(a[i] == '3')b[3]++;
			else if(a[i] == '4')b[4]++;
			else if(a[i] == '5')b[5]++;
			else if(a[i] == '6')b[6]++;
			else if(a[i] == '7')b[7]++;
			else if(a[i] == '8')b[8]++;
			else if(a[i] == '9')b[9]++;
		}
		int ans = 0;
		ans = 0;
		for(int i = 1;i < 10;i++)ans += b[i]*i;
		cout << ans << "\n";
		
	}
	
	
	return 0;
}
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		int y,m,d,cnt=0;
		cin>>y>>m>>d;
		if(y % 3 == 0) {
				cnt += (21 - d);
		}
		else {
				cnt += ((m % 2 == 0 ? 20 : 21) - d);
		}
		for(int i = m + 1; i <= 10; i++) {
				if(y % 3 == 0) {
						cnt += 20;
				}
				else{
						if(i % 2 == 0) {
								cnt += 19;
						}
						else {
								cnt += 20;
						}
				}

		}
		for(int i = y + 1; i <= 999; i++) {
				if(i % 3 == 0) {
						cnt += 20 * 10;
				}
				else {
						cnt += 20 * 5 + 19 * 5;
				}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
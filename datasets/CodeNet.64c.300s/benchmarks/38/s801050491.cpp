#include<iostream>
using namespace std;

int main(){

	int a, b, n, m, ball[10];
	
	cin >> n;
	
	while(cin >> ball[0]){
		for(int i=1; i<10; i++){
			cin >> ball[i];
		}
		
		a = 0;
		b = 0;
		for(int i=0; i<10; i++){
			if(ball[i] < a && ball[i] < b){
				cout << "NO" << endl;
				break;
			}
			else if(a < ball[i] && ball[i] < b){
				a = ball[i];
			}
			else{
				b = ball[i];
			}
			
			if(i == 9) cout << "YES" << endl;
		}
	}

	return 0;

}
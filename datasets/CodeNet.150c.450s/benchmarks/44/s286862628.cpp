#include <iostream>
using namespace std;

int main(){
	int a[4],t;
	
	while(cin >> a[0] && a[0] != -1){
		int blow=0,hit=0;
		for(int i=1;i<4;i++)
			cin >> a[i];
		for(int i=0;i<4;i++){
			cin >> t;
			if(a[i] == t)hit++;
			else for(int i=0;i<4;i++)if(a[i]==t)blow++;
		}
		cout << hit << " " << blow << endl;
	}
}
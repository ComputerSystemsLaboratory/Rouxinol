#include <iostream>
using namespace std;
int n;
int main(){
	while(cin >> n){
		for(int i=1;i<=n;i++){
			bool judge = false;
			if(i%3==0) judge = true;
			int j = i;
			while(j>0 && !judge){
				if(j%10==3) judge = true;
				j /= 10;
			}
			if(judge) cout << " " << i;
		}
		cout << endl;
	}
}

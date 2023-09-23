#include <bits/stdc++.h>
#include <vector>
using namespace std;
int hit, blow;
string a, b;
int main(){
	while(getline(cin, a)){
		getline(cin, b);
		hit = 0;
		blow = 0;
		for(int i = 0; i < 7; i += 2){
			if(b[i] == a[i]){
				hit++;
			}
			else if(a.find(b[i]) != -1){
				blow++;
			}
		}
		cout << hit << " " << blow << endl;
	}
	
	return 0;
}
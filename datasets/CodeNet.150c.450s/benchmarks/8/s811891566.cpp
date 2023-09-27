#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,las,ras,t=0,h=0;
	string l, r;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> l >> r;
		
		
		for (int j = 0; j < 100; j++){
			if (l == r){
				t++;
				h++; break;
			}
			las = l[j] - 'a';
			ras = r[j] - 'a';
			
			 if (las > ras){
				 t += 3; break;
			}
			 else if (las < ras){
				 h += 3; break;
			 }
		}
	}
	cout << t << " " << h << endl;
	return 0;
}
#include<iostream>
using namespace std;

int main(){
	int b, c, n, a, i, j;
	bool executable;
	cin >> n;
	for(i=0;i<n;i++){
		executable = true;
		cin>>a;
		b=a;
		c=0;
		for(j=1;j<10;j++){
			cin>>a;
			if(a-b < 0){
				if(a-c < 0){
					executable = false;
				}else{
					c = a;
				}
			}else{
				if(a-c < 0){
					b = a;
				}else{
					if(c < b){
						b = a;
					}else{
						c = a;
					}
				}
			}
		}
		if(executable){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
	return 0;
}
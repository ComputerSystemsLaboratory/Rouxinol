#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int n,an=0,bn=0;
	cin >> n;
	string a,b;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		if(a==b){
			an += 1;
			bn += 1;
		}else if(a<b){
			bn += 3;
		}else if(a>b){
			an += 3;
		}
	}
	cout << an << ' ' << bn << endl;
	return 0;
}
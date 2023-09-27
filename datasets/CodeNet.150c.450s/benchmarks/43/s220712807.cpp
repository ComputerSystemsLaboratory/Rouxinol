#include <iostream>
using namespace std;

int main() {
		int n;
		int a;
		int b;
	while( true ){
		int sa=0;
		int sb=0;
		cin >> n;
		
		if(n == 0){
			return 0;
		}
		for(int i=0;i<n;i++){
			cin >> a >> b;
			if(a>b){
				sa+=a+b;
			}else{
				if(a<b){
				sb+=a+b;	
				}else{
					sa+=a;
					sb+=b;
				}
			}
		}
		cout << sa << " " << sb << endl;
	}
}
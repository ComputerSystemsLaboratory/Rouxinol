#include<iostream>
using namespace std;
int n,p;

int main(){
	int i;
	while( cin >> n >> p ){
		if(!n)break;
		
		int table=p;
		int temoto[50] = {0};
		int cor=0;
		
		while(1){
			int cnt=0;
			if( table == 0 ){
				table = temoto[cor];
				temoto[cor] = 0;
			}
			else{
				table--;
				temoto[cor]++;
			}
			if( table == 0 ){
				for( i = 0; i < n; i++ ){
					if( temoto[i] ){
						cnt++;
					}
				}
				if( cnt <= 1 ){
					cout << cor << endl;
					break;
				}
			}
			cor++;
			if( cor == n )
				cor = 0;
		}
	}
	return 0;
}
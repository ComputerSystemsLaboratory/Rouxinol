#include <iostream>
using namespace std;

int main(){
	int n,s,r,bit;
	int sum;
	
	while(cin >> n >> s && n || s){
		r = 0;
		for(int i=0;i < (1<<10) ;i++){
			sum = bit = 0;
			for(int j=0;j<10;j++)
				if( i & (1<<j) )bit++;
			if(bit != n)continue;
			
			for(int j=0;j<10;j++){
				if( i & (1<<j) )sum+=j;
			}

			if( sum == s )r++;
		}
		cout << r << endl;
	}
}
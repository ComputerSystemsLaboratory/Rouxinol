#include <iostream>
using namespace std;

int numofbits5(long bits) {
  bits = (bits & 0x55555555) + (bits >> 1 & 0x55555555);
  bits = (bits & 0x33333333) + (bits >> 2 & 0x33333333);
  bits = (bits & 0x0f0f0f0f) + (bits >> 4 & 0x0f0f0f0f);
  bits = (bits & 0x00ff00ff) + (bits >> 8 & 0x00ff00ff);
  return (bits & 0x0000ffff) + (bits >>16 & 0x0000ffff);
}

int main(){
	int n,s,ret,sum;
	while(cin >> n >> s && n || s){
		ret = 0;
		for(int i=0;i<(1<<10);i++){
			sum = 0;
			if(numofbits5(i)!=n)continue;
			for(int j=0;j<10;j++){
				if( (1<<j) & i )sum += j;
			}
			if(sum == s)ret++;
		}
		cout << ret << endl;
	}
}
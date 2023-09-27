#include <iostream>

using namespace std;

int main(){

    int x,y,s,a,b,k,sum;

    while(1){
	cin >> x >> y >> s;
	if(x == 0 && y == 0 && s == 0) break;
	sum = 0;
	for(int i=1;i<s;i++){
		k=0;
		a=i*(100+x)/100;
		b=s-a;
		for(int j=1;j<=s-a;j++){
			if(j*(100+x)/100==b) k=j;
			if(sum < i*(100+y)/100+k*(100+y)/100) sum = i*(100+y)/100+k*(100+y)/100;
		}
	}
	cout << sum << endl;
    }
	return 0;
}
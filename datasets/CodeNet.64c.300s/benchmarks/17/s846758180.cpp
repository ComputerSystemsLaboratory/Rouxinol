#include<iostream>

using namespace std;

int x, y, s;

int extax(int p_a, int x){
	//?¨?????????????????±???????
	int res = 0;
	int tmp;
	do{
		tmp = (++res)*(100+x)/100;
		if(tmp > p_a) return 0;
	}while(tmp!=p_a);

	return res;
}

int intax(int p_b, int y){
	//?¨????????????????
	return p_b*(100+y)/100;
}

int main(){
	while(cin >> x >> y >> s,s){
		int a, b;
		int maxn = 0;
		for(int i=1;i<=s/2+1;i++){
			a = intax(i,x);
			b = s - a;
			if(a * b <= 0) continue;
			int sum_b = a + b;
			int sum_a = intax(i,y) + intax(extax(b,x),y);
			if(sum_a > maxn){
				//cout << a << " " << b << " " << sum_a << " " << sum_b << endl;
				maxn = sum_a;
			}
		}
		cout << maxn << endl;
	}
				
	return 0;
}
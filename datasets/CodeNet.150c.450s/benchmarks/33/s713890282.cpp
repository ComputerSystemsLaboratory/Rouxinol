#include <bits/stdc++.h>
using namespace std;

int main(){
	int x,y,s;
	int i,j;
	int max;
	int tmp_1,tmp_2;
	
	while(1){
		cin >> x >> y >> s;
		max=0;
		if(x==0&&y==0&&s==0){
			break;
		}
		for(i = 1 ; i < s ; i++){
			for(j = 1 ; j < s ; j++){
				tmp_1=(i*(100+x)/100)+(j*(100+x)/100);
				if(tmp_1==s){
					tmp_2 =(i*(100+y)/100)+(j*(100+y)/100);
				if(tmp_2 > max){
					max = tmp_2;
					}
				}
			}
		}
		cout << max << endl;
	}
		return 0;
}
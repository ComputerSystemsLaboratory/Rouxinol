#include <bits/stdc++.h>
using namespace std;

int main(){
	int C,R,i,j,k,s=0,count=0,MAX=0,flag;
	cin >> R >> C;
	int O[10][10000];
	while(R!=0&&C!=0){
		for(i=0;i<R;i++){
			for(j=0;j<C;j++){
				cin >> O[i][j];
				if(O[i][j] == 0){MAX++;}
			}
		}
		k = pow(2,R);
		for(flag=0;flag<k;flag++){
			for(j=0;j<C;j++){
				for(i=0;i<R;i++){
					if((flag & (1 << i)) != 0){if(O[i][j]==1){s++;}}
					else if(O[i][j]==0){s++;}
				}
				if(s>(R-s)){count += s;}
				else{count += (R-s);}
				s=0;
			}
			if(count>MAX){MAX = count;}
			count = 0;
		}
		cout << MAX << endl;
		cin >> R >> C;
		MAX=0;
	}
	return 0;
}
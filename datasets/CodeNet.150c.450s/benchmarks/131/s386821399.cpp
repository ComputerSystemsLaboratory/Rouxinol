#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){

	int l,j,i;
	char str[10];
	int memo[22];

	while(cin>>str>>l, l){
		memo[i=0]=atoi(str);
		while(++i){
			while(strlen(str)!=l) strcat(str, "0");
			sort(str,str+l);
			memo[i]=atoi(str);
			sort(str,str+l,greater<char>());
			memo[i] = atoi(str) - memo[i];

			sprintf(str, "%d", memo[i]);
	
			for(j=0;j<i;j++) if(memo[j]==memo[i])break;
			if(j<i) break;
		}
		cout << j << ' ' << memo[i] << ' ' << i-j << endl;
	}
	
	return 0;
}
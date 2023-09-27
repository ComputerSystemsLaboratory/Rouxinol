#include <bits/stdc++.h>
#define INT(name) int name; scanf("%d",&name);
#define VINT(name,n) vector<int> name(n); for(int i = 0;i < n;i++) scanf("%d",&name[i]);

using namespace std;

int main(int argc, char const *argv[]){
	INT(n)
	int a,b,c;
	while(n--){
		VINT(data,3)
		sort(data.begin(),data.end());
		if(pow(data[2],2) == pow(data[0],2) + pow(data[1],2)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}

	}
}
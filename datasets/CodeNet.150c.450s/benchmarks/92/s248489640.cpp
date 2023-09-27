#include <bits/stdc++.h>
#define INT(name) int name; scanf("%d",&name);
#define VINT(name,n) vector<int> name(n); for(int i = 0;i < n;i++) scanf("%d",&name[i]);

using namespace std;

int main(int argc, char const *argv[]){
	int a,b;
	vector<int> answer;
	while(cin >> a >> b){
		printf("%d\n",(int)log10(a+b) + 1);
	}
}
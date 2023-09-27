#include <stdio.h>
#include <map>

using namespace std;

int main(){
	while(1){
		map<char, char> data;
		int n,i;
		scanf("%d", &n);
		if(n==0) break;

		char a,b;
		for(i=0;i<n;i++) {
			scanf(" %c %c", &a, &b);
			data.insert(pair<char,char>(a,b));
			
		}

		scanf("%d", &n);
		for(i=0;i<n;i++){
			scanf(" %c", &a);
			if(data.find(a) != data.end())
				printf("%c", data[a]);
			else
				printf("%c", a);
		}
		puts("");
	}
}
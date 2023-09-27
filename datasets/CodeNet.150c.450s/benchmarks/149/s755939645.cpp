#include <stdio.h>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
	int n,q,label,com,x,y,to_change1,to_change2;

	scanf("%d %d",&n,&q);
	int table[n];

	for(int i = 0; i < n; i++)table[i] = i;
	label = n;

	for(int i = 0; i < q; i++){
		scanf("%d %d %d",&com,&x,&y);

		if(com == 1){
			if(table[x] == table[y])printf("1\n");
			else{
				printf("0\n");
			}
		}else{
			to_change1 = table[x];
			to_change2 = table[y];

			for(int i = 0; i < n; i++){
				if(table[i] == to_change1 || table[i] == to_change2){
					table[i] = label;
				}
			}
			label++;
		}
	}

    return 0;
}
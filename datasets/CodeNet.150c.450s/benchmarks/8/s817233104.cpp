#include <stdio.h>

using namespace std;

int main(){
	int n,taro_point = 0,hanako_point = 0,j;
	char taro_card[101],hanako_card[101];
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%s %s",taro_card,hanako_card);
		for(j = 0; taro_card[j] != '\0' && hanako_card[j] != '\0' && taro_card[j] == hanako_card[j];j++);
		if(taro_card[j] == '\0'){
			if(hanako_card[j] == '\0'){
				taro_point += 1;
				hanako_point += 1;
			}else{
				hanako_point += 3;
			}
		}else if(hanako_card[j] == '\0'){
			taro_point += 3;
		}else if(hanako_card[j] > taro_card[j]){
			hanako_point += 3;
		}else{
			taro_point += 3;
		}
	}
	printf("%d %d\n",taro_point,hanako_point);
}
#include <stdio.h>
#include <algorithm>
using namespace std;
int score;
int use(int money, int coin){
	int ans = money / coin;
	score += ans;
	return ans;
}

int main(){
	while (1){
		score = 0;
		int money;
		scanf("%d", &money);
		if (money == 0) return 0;
		money = 1000 - money;
		money -= use(money, 500) * 500;
		money -= use(money, 100) * 100;
		money -= use(money, 50) * 50;
		money -= use(money, 10) * 10;
		money -= use(money, 5) * 5;
		money -= use(money, 1) * 1;
		printf("%d\n", score);
	}
}
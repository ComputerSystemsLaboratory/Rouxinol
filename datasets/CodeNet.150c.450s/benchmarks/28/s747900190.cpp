#include<cstdio>
typedef long long LL;//64ビット以上のサイズ
LL Baggage[100000];
int n,k;

int check(LL P){//トラックに荷物を乗せていく
	int num = 0;
	for(int j = 0; j < k; j++){
		LL s = 0;
		while(s + Baggage[num] <= P){//最大積載量を超えないように処理をする
			s += Baggage[num];
			num++;
			if(num == n){
				return n;
			}
		}
	}
	return num;
}

int solve(){//2分探索で適切な最大積載量の値を求める
	LL lower_limit = 0;//下限
	LL upper_limit = 100000 * 10000;//上限
	LL mid;
	while(upper_limit - lower_limit > 1){
		mid = (lower_limit + upper_limit) / 2;
		if (check(mid) >= n){
			upper_limit = mid;
		}
		else{
			lower_limit = mid;
		}
	}
	return upper_limit;//求めた値を返す
}

int main(){
	scanf("%d %d", &n, &k);//荷物の個数とトラックの台数を入力
	for(int i = 0; i< n; i++){
		scanf("%lld", &Baggage[i]);//配列に入力する
	}
	LL ans = solve();
	printf("%lld\n", ans);//ansを出力
	return 0;
}

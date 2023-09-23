#include <stdio.h>
#include <math.h>


int main();
bool prime_chk(int num);



int main(){
	
	int a[1000] = {0};
	int d[1000] = {0};
	int n[1000] = {0};
	int result[1000] = {0};
	int n_series;
	int s_series;
	int nth_prime_num;
	int i,i_dataset;
	
	bool prime_flg;
	
	
	//データ入力
	i_dataset = 0;
	while(1){
		scanf("%d %d %d", &a[i_dataset], &d[i_dataset], &n[i_dataset]);
		
		if( a[i_dataset] == 0 && d[i_dataset] == 0  && n[i_dataset] == 0) break; //0 0 0が入力されると処理終了
		else i_dataset++; //データ数を記録
	}
	
	
	//計算開始
	
	for (i=0;i<i_dataset;i++){
		
		nth_prime_num = 0;
		n_series = 1;
		
		while(1){
			if (n_series == 1) s_series = a[i];
			else s_series = a[i] + (n_series - 1) * d[i];
			
			prime_flg = prime_chk (s_series);
			if (prime_flg==true) nth_prime_num++;
			
			if (nth_prime_num == n[i]) {
				result[i] = s_series;
				break;
			}
			
			n_series++;
		}
	}
	
	for(i=0;i<i_dataset;i++){
		printf("%d\n",result[i]); //結果出力
	}
	
	return 0;
}

bool prime_chk(int num) {
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrt_num = sqrt(num);
    for (int i = 3; i <= sqrt_num; i += 2){
        if (num % i == 0){
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

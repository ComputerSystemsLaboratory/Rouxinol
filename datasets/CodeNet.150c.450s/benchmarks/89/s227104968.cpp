#include<iostream>
#include<vector>
#include<cmath>

// #define     _DEBUG_01

#ifdef _DEBUG_01
#define     MAX_PRIME_NUMBER     100
#else
#define     MAX_PRIME_NUMBER     1000000
#endif

using namespace std;

unsigned int MyGCD(const unsigned int, const unsigned int);

int main(){
	vector <int> PrimeNumber;
	vector <int> input_a, input_d, input_n;
	int i, j;
	int a, d, n, cnt;

	// 素数表の作成
	PrimeNumber.push_back(2);
	for(i=3;i <= ((int)(MAX_PRIME_NUMBER));i+=2){
		// i の平方根を求める
		const int rooti = (int)sqrt((double)i);
		// i を素数表に加える
		PrimeNumber.push_back(i);
		// 3 以上 i^(1/2) 以下の素数で i を割った余りをチェック
		for(j=1;(j < (int)PrimeNumber.size()) && (PrimeNumber[j] <= rooti);j++){
			if((i % PrimeNumber[j]) == 0){				// 余りが 0 になることがあれば
				PrimeNumber.pop_back();					// i を素数表から削除して
				break;									// 内側のループから抜ける
			}
		}
	}

#ifdef _DEBUG_01
	// 素数表を出力して終了
	cout << PrimeNumber[0];
	for(i=1;i < (int)PrimeNumber.size();i++){
		cout << "," <<PrimeNumber[i];
	}
	cout << endl;

	return 0;
#endif

	// 入力ループ
	cin >> a >> d >> n;
	for(cnt=0;(a > 0) && (d > 0) && (n > 0);cnt++){
		// a と d が互いに素であるかチェック
		if(MyGCD((unsigned int)a, (unsigned int)d) != 1){
			cerr << a << "と" << d << "は互いに素ではありません" << endl;
			cin >> a >> d >> n;
			continue;
		}

		// 入力値を蓄える
		input_a.push_back(a);
		input_d.push_back(d);
		input_n.push_back(n);

		// 入力
		cin >> a >> d >> n;
	}

	// 条件を満たす素数を求め、出力する
	for(i=0;i<cnt;i++){
		int how_many_prime_numbers = 0, p;
		// 等差数列の各項が素数かどうかチェック
		for(j=input_a[i];how_many_prime_numbers<input_n[i];j+=input_d[i]){
			int a = 0, b = (int)PrimeNumber.size() - 1, m;
			// 素数表を検索
			while(a<=b){
				m = (a + b) / 2;
				if(PrimeNumber[m] == j){
					p = j;
					how_many_prime_numbers++;
					break;
				}else if(PrimeNumber[m] > j){
					b = m - 1;
				}else if(PrimeNumber[m] < j){
					a = m + 1;
				}
			}
		}
		// 結果を出力する
		cout << p << endl;
	}

	return 0;
}

unsigned int MyGCD(const unsigned int a, const unsigned int b){
	unsigned int s = ((a >= b) ? a : b), t = ((a >= b) ? b : a);
	unsigned int buf;

	while((s % t) != 0){
		buf = s % t;
		s = t;
		t = buf;
	}

	return t;
}
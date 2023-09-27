#include<iostream>
#include<algorithm>
using namespace std;

/*
#if 0
	手法
	
	縦の道と横の道は、それぞれ2本で片方の辺の長さが定まり、もう片方の辺には影響を与えない。
	そのため、縦の道を2本選ぶのを全てやって、長さiの辺の生成回数x[i]をカウントし、横の道も同様にy[i]とすると、
	x[i]*y[i]が辺の長さiの正方形の数になるため、これを全てのiに対して足せばよい。
	2本道の組み合わせを全て作って各長さを集計して全x[i]を求めるのにO(N^2)、同様に全y[i]を求めるのにO(M^2) N,Mは10^3ちょっとぐらい 
	x[i]*y[i]を足し合わせるのにO(i)かかる iは高々最も遠い道同士の距離なので1500*1000≒10^6
	これらを順次行うのでオーダーは足してO(N^2+M^2+i)、10^6ちょっとぐらいなので解ける

	道路間距離を求めるのに前の距離を利用できたのはよかった。

#endif
*/

int N, M;
int h[1510],w[1510];//問題文に寄せて添え字1スタートなので注意
//入力

const int distantmax=1500*1000;//2本の道の距離のありうる最大値、1500*1000
int x[distantmax + 10] = { 0 };
int y[distantmax + 10] = { 0 };


void solve(){
	for (int i = 0; i < distantmax + 10; i++){
		x[i] = 0;
		y[i] = 0;
	}
	//x[i]とy[i]を求める

	//i番目とj+1番目の道路の間の距離を求める
	for (int i = 1; i <= N; i++){
		int sum = 0;//各iに対し、jを1ずつ増やしてfor文を回すことを利用し、前の計算結果を利用して距離を求めていく
					//これにより、道路間距離を求めるのにforをもう1つ回さないで良くなり、オーダーがN^2
		for (int j = i; j+1 <= N+1; j++){
			sum += h[j];
			x[sum]++;
		}
	}

	for (int i = 1; i <= M; i++){
		int sum = 0;
		for (int j = i; j + 1 <= M+1; j++){
			sum += w[j];
			y[sum]++;
		}
	}

	//x[i]+y[i]を足し合わせて終わり
	//答えの最大値は多めに想定するとできる四角形の数であり、つまり多めに見てN^2*M^2 10^12≒2^40 念のため大きい整数型にしておく
	long long answer = 0;
	for (int i = 1; i <= distantmax; i++){
		answer += x[i] * y[i];
	}
	cout<<answer<<endl;
	return;
}


int main(){
	while (cin >> N >> M && N>0){
		for (int i = 1; i <= N; i++){
			cin >> h[i];
		}
		for (int i = 1; i <= M; i++){
			cin >> w[i];
		}
		solve();
	}

	return 0;
}

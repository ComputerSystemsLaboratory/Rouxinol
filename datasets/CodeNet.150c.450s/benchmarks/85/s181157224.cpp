//  AOJ Algorithms and Data Structures I - Dynamic Programming - Matrix Chain Multiplication
// s 2013 0925 1640
// e 

/* 2014 0329 1621

イメージ的には
---------------------
|M11|M12|M13|   |   | 
---------------------
|   |M22|M23|   |   | 
---------------------
|   |   |M33|   |   |  
---------------------
|   |   |   |M44|   |
---------------------
|   |   |   |   |M55|
---------------------

-------------------
|r1|r2|r3|r4|r5|r6|
-------------------

この二つを作って使う

*/


#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;


//コストの計算 costを参照渡しで持ってきて、直接入れる
// s eはstart end の略でcostの配列添え字
void cal_cost(vector< vector<int> >& cost, vector<int> r, int s, int e){
	int ans;
	int k; //切る場所 (k=2 なら、　1|234 )

	if(s==e){ cost[s][e]=0; } //Miiのコストは0
	else{
		cost[s][e]=2000000000; //最小値求めるためのセンチネル　数値は適当
		for(k=s+1; k<=e; k++){
			ans = cost[s][k-1] + cost[k][e] + r[s]*r[k]*r[e+1];
			if(ans<cost[s][e]) cost[s][e] = ans;
		}
	}
}


//http://algorithms.blog55.fc2.com/blog-entry-66.html
//このホームページ見て正解っぽく動的計画法で書いてみる版
int DP_myself( vector< vector<int> > A, int n){
	int i, diff;

	//最終的な出力は最小コストだけでいいので、かけ算の順番は保存しない。するとしたら、cost配列を構造体にして、ルーツの保存しとけば、それでたどれると思う
	// (cost[][]の使い方)  M_ijのコストをcost[i][j]に入れる (M11, M22等はコスト0)
	vector< vector<int> > cost(n,vector<int>(n)); //Mijにかかるコスト（最少）

	//行とか列の長さを入れる配列
	vector<int> r(n+1);

	//rを埋めてく
	for(i=0;i<n;i++){
		r[i]=A[i][0];
	}
	r[n]=A[n-1][1];

	//costを埋めていく(右斜め下に進んで。ピラミッド状に)
	for(diff=0; diff<n; diff++){
		for(i=0; i+diff<n; i++){
			// デバッグ用printf("%d,%d,%d\n", diff,i,i+diff);
			cal_cost(cost, r, i, i+diff); //コストの計算
		}
		
	}

	cout << cost[0][n-1] << endl;

	return 0;
}


int main(){
	int i;
	int n;
	int num_multi=0;
	
	cin >> n;
	//dequeやlistでなくても、途中の要素の削除できるんでvectorでいい。
	// C++で2次元配列を動的に確保する方法 http://samidarehetima.blog9.fc2.com/blog-entry-95.html
	//連鎖行列はA[0][] ~ A[n-1][] まで。
	vector<vector<int> > A(n,vector<int>(2)); //[][0]=r, [][1]=c
	for(i=0;i<n;i++){
		cin >> A[i][0];
		cin >> A[i][1];
	}


	DP_myself(A,n);

    return 0;
}
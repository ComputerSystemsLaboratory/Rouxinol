/* ICPC2008 国内予選問題 Problem A */
// http://sparth.u-aizu.ac.jp/icpc2008/d_problem.php?lang=jp#section_A
// filename = a.c
// アルゴリズム：
//  ts = 太郎が最初に持っているカードの合計点、
//  hs = 花子が最初に持っているカードの合計点、
//  t = 太郎が花子に渡すカード、 h = 花子が太郎の渡すカード とすると
//  題意より ts - t + h = hs + t - h が成立しなければならない。
//  これを整理すると、ts - hs = 2 (t - h) なので
//  ts - hs が奇数の時は題意を満たす交換は存在しない。
//  ts - hs が偶数の時は t - h = (ts - hs)/2 を満たす最小の t, h を探す。
//  このためには、太郎と花子が持っているカードをソートし、小さい方から探す。

#include <stdio.h>

int n;		// 太郎が最初に持っているカードの枚数,  1 <= n <= 100
int m;		// 花子が最初に持っているカードの枚数,  1 <= m <= 100
int tc[100];	// 太郎が持っているカードを記憶する配列,  0 <= tc[i] <= 100
int hc[100];	// 花子が持っているカードを記憶する配列,  0 <= hc[i] <= 100

// 配列 c に入っている nc 個の整数を昇順にソート（バブルソート）
void sort(int c[], int nc)
{
  int i, j;
  for(i=nc-1; i>0; i--){
    for(j=0; j<i; j++){
      if(c[j] > c[j+1]){	// c[j] > c[j+1] なら c[j] と c[j+1] を交換
	int tmp;
	tmp = c[j];
	c[j] = c[j+1];
	c[j+1] = tmp;
      }
    }
  }
}

void solve()
{
  int i, j, t, h, ts=0, hs=0;	// ts, hs は各々太郎と花子が持っているカードの合計点
  int df, found;
  for(i=0; i<n; i++) ts += tc[i];
  for(i=0; i<m; i++) hs += hc[i];
  df = ts - hs;
  if(df & 1){		// df = ts - hs が奇数
    printf("-1\n");	// 交換方法無し
    return;
  }
  sort(tc,n);	// 太郎の持っているカードを昇順にソート
  sort(hc,m);	// 花子の持っているカードを昇順にソート
  found = 0;
  for(i=0; i<m; i++){
    h = hc[i];		// h = 花子が持っているカード
    t = h + df/2;	// t = 太郎が持っているべきカード
    if(t < 0 || t > 100)	// 太郎は負や100を超える値のカードを持っていない
      continue;
    for(j=0; j<n; j++){
      if(t == tc[j]){	// 太郎はその値のカードを持っていた
	found = 1;
	break;
      }
      if(t < tc[j])	// 太郎のカードはソートされているのでこれ以上探しても無駄
	break;
    }
    if(found) break;
  }
  if(found)
    printf("%d %d\n", t, h);
  else
    printf("-1\n");
}

int main()
{
  int i;
  while(1){
    scanf("%d %d", &n, &m);		// n, m を入力
    if(n == 0 && m == 0) break;		// 両方とも0なら終了
    for(i=0; i<n; i++) scanf("%d", &tc[i]);	// 太郎のカードを読み込む
    for(i=0; i<m; i++) scanf("%d", &hc[i]);	// 花子のカードを読み込む
    solve();		// この問題を解く
  }
}


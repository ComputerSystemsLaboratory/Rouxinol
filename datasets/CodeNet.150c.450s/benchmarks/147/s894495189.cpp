#include "bits/stdc++.h"

typedef long long ll;
#define all(x) (x).begin(), (x).end()  // sortなどの引数を省略
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define max3(x, y, z) max(x, max(y, z))
#define min3(x, y, z) min(x, min(y, z))

#ifdef _MSC_FULL_VER  //デバッグ出力
#define dout cout
#define debug() if (true)
#define check(x) std::cout << "★" << #x << "の値:" << (x) << endl
#define pass(x) std::cout << "☆" << x << endl
#else
#define dout \
  if (false) cout
#define debug() if (false)
#define check(x) \
  if (false) cout << "★" << #x << "の値:" << (x) << endl
#define pass(x) \
  if (false) cout << "☆" << x << endl
#endif

using namespace std;
int main(){ 
  vector<int> l(75000);
  for (int i = 1; i < 110; i++) {
    for (int j = 1; j < 110; j++) {
      for (int k = 1; k < 110; k++) {
        l[i*i+j*j+k*k+i*j+j*k+i*k]++;
      }
    }
  }
  int N;
  cin >> N;
  for ( int i = 1; i <=N; i++) {
    cout << l[i] << endl;
  }
}
/*
//よく使うやつ
int N;
cin >> N;
vector<int> list(N);
rep(i,N) {
  cin >> list[i];
}
//配列(スタックとしても使える)
vector<int> list;
list.at(i)
vector<vector<int>> list(10, vector<int>(10));
//ソート クイックだからO(NlogN)
sort(all(list));
sort(all(list), greater<int>());

//配列の内容表示
dout << "====listの内容====\n";
for (int edp = 0; edp < N; edp++) dout << list[edp] << endl;
dout << "====ここまで====\n";


//配列の最小最大(Nは要素数)
*min_element(all(c))
*max_element(all(c))

//a[0]からa[N]を逆順にする(計算量はO(N))
reverse(all(a));
//listの末尾に要素を追加
list.push_back(10);
//listの末尾から要素を削除
list.pop_back();
//空ですか？
list.empty()



//キュー(待ち行列)
//定義
queue<int> a;
//追加
a.push(x);
//取る
a.pop();
//チェック
a.front()
//サイズ
a.size()
//空ですか
a.empty()



//優先度付きキュー※全部計算量がO(NlogN)あるので注意
// int 型の要素を持ち、最も小さい値を取り出す形の priority_queue を定義
priority_queue<int, vector<int>, greater<int>> Q1;
// double 型の要素を持ち、最も大きい値を取り出す形の priority_queueを定義
priority_queue<double, vector<double>, less<double>> Q2;
//追加
a.push(x);
//取る
a.pop();
//一番小さいの教えて下さい
a.top()
//サイズ
a.size()
//空ですか
a.empty()



//部分文字列
//添字3から5文字
s.substr(3,5)
//添字3から全部
s.substr(3)

//入れ替え
swap(a,b);



// int 型の番地に string 型の変数を記録する場合（2^31 要素の
string型配列と同じような感じ） map<int, string> mp; for (auto itr =mp.begin();
itr != mp.end(); itr++) {
    //順番にマップを眺める。itr->firstでキー、itr->secondがバリュー
}

//ソート済みのaの中で初めてx以上になるインデックスを返す
lower_bound(all(a), x) - a

//next_permutation
do {
  //ここにパーテーションがくる
} while (next_permutation(s.begin(), s.end()));

//set
set<int> hoge;
hoge.insert(50);  //hogeに挿入。重複は無視される。
hoge.insert(20);  //内部は小さい順に並ぶ
hoge.erase(50);   //hogeから消し去る。
//40以上である最小の要素を指すイテレーターを返す。
//もちろんそんなものはないからEndが出力される
auto itr1 = Set.lower_bound(40);
if (itr1 == Set.end()) cout << "End" << endl;
else cout << (*itr1) << endl;

//pair
//たくさんつくる
vector<pair<int,string>> hoge(10);
//参照
hoge[0].first
sort(all(hoge), greater<pair<int, string>>());




*/

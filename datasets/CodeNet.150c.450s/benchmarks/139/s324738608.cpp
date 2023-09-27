//ABC146 //二分探索
/*int main() {
  ll a,b,x;
  cin >> a >> b >> x;
  ll left = 0;
  ll right = 1000000001;
  while(right - left > 1){
    ll mid = (left + right ) /2;
    if(a * mid + b * ketasuu(mid) > x) right = mid;
    else left = mid;
//    cout << left << " " << right  << endl;
  }
  cout << left << endl;
}
*/

//ABC_128_B// pair型の中にpair型
/*int main() {
  int n;
  cin >> n;
  vector<pair<pair<string,int>,int>> a(n);
  for(int i=0;i<n;i++){
    string s;
    cin >> s;
    int num;
    cin >> num;
    num = num * -1;

    a.at(i).first.first  = s;
    a.at(i).first.second = num;
    a.at(i).second 		 = i;
  }
  sort(a.begin(), a.end());
  for(int i=0;i<n;i++){
    cout <<   a.at(i).second +1 << endl;
  }
}
*/
//ABC_058_Cのように
// s.at(j) == a のとき
//cout << s.at(j)-'0' - 49 << endl;
//とすると、「0」を出力してくれる。　→もっといいほかの方法はないの？

//全bit探索を入れよう!!
/*ABC_167_C skill up などを参考に…
//https://qiita.com/hareku/items/3d08511eab56a481c7db
int main() {
    int n = 3;

    // {0, 1, ..., n-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<n); ++bit) {
        vector<int> S;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { // 列挙に i が含まれるか
                S.push_back(i);
            }
        }

        cout << bit << ": {";
        for (int i = 0; i < (int)S.size(); ++i) {
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }
}
*/
//next_permutation（順列列挙）
/*https://note.com/memenekokaburi/n/nf0201d6002cd
//https://scrapbox.io/ganariya/AtCoderGrandContest022_A%E5%95%8F%E9%A1%8C300%E7%82%B9%E3%80%8CDiverse_Word%E3%80%8D_(copy)
//https://atcoder.jp/contests/agc022/tasks/agc022_a
ABC_150_Cなど。
int main() {
  int n;
  cin >> n ;
   vector<int>array = {};
   for(int i=0;i<n;i++){
    array.push_back(i);
   }
  do{
        for(int i=0; i<n; i++){
            cout << array.at(i);
            if(i!=n-1)cout<<" ";
        }
        cout<<endl;
    }while(next_permutation(array.begin(),array.end()));
    return 0;
}
*/

//ABC126_Cのように関数でdouble型で返ってきてほしい場合はdouble kan_halfのようにかく
/*
//ABC_041_C// pair型
int main() {
  int n;
  cin >> n;
  vector<pair<int,int>>a(n);
  for(int i=0;i<n;i++){
    int num;
    cin >> num;
    a.at(i).first  = num;
    a.at(i).second = i;
  }
  sort(a.begin(), a.end());
  reverse(a.begin(),a.end());
  for(int i=0;i<n;i++){
    cout << a.at(i).second + 1<< endl;
  }
}
*/
/*ABC_068_C //boolの配列を使って
bool s[200050] = {};
bool t[200050] = {};
int main() {
	ll n, m; cin >> n >> m;
	for (int i = 0; i < m; i++){
		ll a, b; cin >> a >> b;
		if (a == 1) {
			t[b] = true;
		}
		if (b == n) {
			s[a] = true;
		}
	}
	for (int i = 0; i < 200050; i++){
		if (s[i] && t[i]) {
			cout << "POSSIBLE" << endl;
			return 0;
		}
	}
	cout << "IMPOSSIBLE" << endl;
	return 0;
}
*/

//int32	4	signed, signed int, int	-2,147,483,648 ～ 2,147,483,647 = 2*10^9
//再帰関数 ABC_029_C
/*
void f(int rest , string s){
  if(rest == 0){
    cout << s << endl;
  }
  else{
    for(char moji = 'a' ;moji <='c' ; moji++){
      f(rest-1,s+moji);
    } 
  }
}
 
int main() {
  int n;
  cin >> n;
  f(n, "");
}
*/
  //連想配列 ARC_081_Cの解答 //ABC073でも復習できます。
/*
int main() {
  ll n;
  cin >> n;
  vector<ll>a(n);
  rep(i,n) cin>>a.at(i);
  map<ll,ll>mp;
  rep(i,n){
    mp[a.at(i)]++;
  }
  ll one  = 0;
  ll two = 0;
  for(auto p:mp){
//    cout << p.first << " " << p.second << endl;
    if(p.second >= 2){
      if(one <= p.first){
        two = one;
        one = p.first;
      }
    }
    if(p.second >= 4){
      if(one <= p.first){
        two = p.first;
        one = p.first;
      }
    }
  }
//  cout << one << endl;
//  cout << two << endl;
//  cout << endl;
  cout << one * two << endl;
}
*/

//#define pi 3.14159265359
//桁数を指定して出力する方法
//#include <iomanip>//これをincludeしておかないといけない
//cout << fixed << setprecision(20)<< ans << endl;

//  s.at(0) = toupper(s.at(0));//小文字なら大文字へ//大文字の場合はそのまま
//  s.at(i) = tolower(s.at(i));//大文字なら小文字へ//小文字の場合はそのまま
//getline(cin, s); //空白文字を含むものをまとめて入力できる。
//s配列に格納した単語を、辞書順にソートする
//  sort(s.begin(), s.end());
//  string t = "keyence";//で文字列を格納できる
//s.empty() //emptyなら1を出力 入っていれば0を出力
/*//ABC018-B 部分的にreverseをかける解法
int main() {
  string s; cin >> s;
  int n; cin >> n;
  vector<int>a(n); vector<int>b(n);
  rep(i,n) cin>>a.at(i)>>b.at(i);
  rep(i,n)a.at(i)--;  rep(i,n)b.at(i)--;
  string t;
  rep(i,n){
    t = s;
    for(int k=0;k<=b.at(i)-a.at(i);k++){
      t.at(a.at(i)+k) = s.at(b.at(i)-k);
    }
    s = t;
  }
  cout << s << endl;
}
*///ABC018-B
//  cout << char(i+48) << endl;//なぜかaは47と得る時がある。+48で出力もaにできる。
//  cout << char(97) << endl;//アスキーコードでaを出力
// sort(b.begin(), b.end());//bという配列を小さい方からソート
// reverse(b.begin(), b.end());//bという配列をリターン
/*01 02 03 12 13 23　と６回見ていくパターン 
for(int i=0;i<n-1;i++){
  for(int j=i+1;j<n;j++){
    }
  }
*/
//vector<vector<int>> a(3, vector<int>(4));//int型の2次元配列(3×4要素の)の宣言
//10のi乗pow(10, i);//ただしdouble型のため注意
/*string s; stringでの文字列を数字型に変える方法
  cin >> s;
  rep(i,s.size()-2) {
  int a= (s.at(i)-'0')*100 + (s.at(i+1)-'0')*10+ s.at(i+2) -'0';
*/
#include <bits/stdc++.h>
#include <iomanip>//これをincludeしておかないといけない
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
using Graph = vector<vector<int>>;
typedef long long ll;
typedef long double lld;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define PI 3.14159265359
ll gcd(ll a, ll b){
   if (a%b == 0){
       return(b);
   }
   else{
       return(gcd(b, a%b));
   }
}

ll lcm(ll a, ll b){
//   return a * b / gcd(a, b);
     return a / gcd(a, b)* b;
}

int kan_hyaku(int n){
  int kurai = 0;
  for(int i=0;i<3;i++){
    kurai = n%10;
    n /=10;
  }
  return kurai;
}
int kan_ju(int n){
  int kurai = 0;
  for(int i=0;i<2;i++){
    kurai = n%10;
    n /=10;
  }
  return kurai;
}
int kan_ichi(int n){
  int kurai = 0;
  for(int i=0;i<1;i++){
    kurai = n%10;
    n /=10;
  }
  return kurai;
}

ll keta(ll n){
  ll wa = 1;
  while(n>0){
    wa *=10;
    n--;
  }
  return wa;
}

double kan_half(int n){
  double wa = 1;
  while(n>0){
//    cout << "TEST"<<endl;
    wa *= 0.5;
//    cout << wa << endl;
    n--;
  }
  return wa;
}

ll facctorialMethod(ll k){
    ll sum = 1;
    for (ll i = 1; i <= k; ++i)
    {
        sum = sum%1000000007 * i%1000000007;
    }
    return sum;
}

int zorocheck(string s){
  int count = 0;
  rep(i,s.size()){
    if(s.at(i) == s.at(0)) count++;
  }
  if(count ==s.size()){
    return 1;
  }
  else{
    return 0;
  }
}

int sannobekijou(int n){
  int wa = 1;
  while(n>0){
    n--;
    wa *=3;
  }
  return wa;
}
ll ketasuu(ll k){
  ll wa = 0;
  while(k > 0){
    k /=10;
    wa++;
  }
  return wa;
}


/*
  int n;
  cin >> n;
  vector<int>a(n);
  rep(i,n) cin >> a.at(i); 
*/
//cout << fixed << setprecision(10)<< ans << endl;
//数字から文字列に変換  a.at(0) = std::to_string(111);

int main() {
    // 頂点数と辺数
    int N, M; cin >> N >> M;

    // グラフ入力受取 (ここでは無向グラフを想定)
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        --a; --b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // BFS のためのデータ構造
    vector<int> dist(N, -1); // 全頂点を「未訪問」に初期化
    queue<int> que;
    vector<int> prev(N, -1); //ABC168-Dのため

    // 初期条件 (頂点 0 を初期ノードとする)
    dist[0] = 0;
    que.push(0); // 0 を橙色頂点にする

    // BFS 開始 (キューが空になるまで探索を行う)
    while (!que.empty()) {
        int v = que.front(); // キューから先頭頂点を取り出す
        que.pop();

        // v から辿れる頂点をすべて調べる
        for (int nv : G[v]) {
            if (dist[nv] != -1) continue; // すでに発見済みの頂点は探索しない

            // 新たな白色頂点 nv について距離情報を更新してキューに追加する
            dist[nv] = dist[v] + 1;
            prev[nv] = v;
            que.push(nv);
        }
    }

    // 結果出力 (各頂点の頂点 0 からの距離を見る)
  //for (int v = 0; v < N; ++v) cout << v << ": " << dist[v] << endl;//ABC168-Dには不要
    cout <<"Yes"<<endl;
    for (int v = 1; v < N; ++v){
      int ans = prev[v];
      ++ans;
      cout << ans << endl;
    }
}
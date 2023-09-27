#include "bits/stdc++.h"
using namespace std;
using ll = long long;

template <typename T>
void print_vec(const vector<T>& v, bool is_reverse=false, int num=0){
  if(num == 0) num = (int)v.size();
  if(is_reverse) for(int i=num-1; i>=0; i--){ cout<<v[i]; if(i!=0) cout<<" ";}
  else for(int i=0; i<num; i++){ cout<<v[i]; if(i!=num-1) cout<<" ";}
  cout << endl;
}

template <typename T>
void print_pairvec(const vector<T> &v, int num=0){
  if(num == 0) num = (int)v.size();
  cout << endl;
  for(int i=0; i<num; i++){ cout << v[i].first << " " << v[i].second << endl;}
}

template <typename T>
void print_vec2(const vector<vector<T>>& v){
  cout << endl; cout << "       ";
  for(int i=0; i<v[0].size(); i++) cout << i << "   "; 
  cout << endl;
	for(int i=0; i<v.size(); i++){
		cout << "i=" << i << ":   ";
		for(int j=0; j<v[i].size(); j++){
			if(v[i][j] == 0) cout << "\x1B[0m" << v[i][j] << "   ";
      else cout << "\x1B[31m" << v[i][j] << "   ";//https://stackoverrun.com/ja/q/12618775
		}
		cout << "\x1B[0m" << endl;
	}
}

template <typename T>
int partition(vector<T> &a, int left, int right){// right基準で　[left, right)を分割してrightの入れるindexを返す
  T x = a[right];
  int part = left;//partitionの位置
  for(int i=left; i<right; i++){//基準x以外の数字をpartitionの左か右かを検討する
    if(a[i] <= x){// 基準x以下の数字なら，
      swap(a[part], a[i]);//partitionの位置の数字と交換して
      part++;//partitionを1つ右にずらす
    }
  }
  swap(a[part], a[right]);//最後に基準xをpartitionの位置に入れるためにpartitionの位置の数字と交換
  return part;

}

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];

  int part = partition(a, 0, n-1);
  for(int i=0; i<n; i++){
    if(i == part)cout << "[" << a[part] << "] ";
    else if(i==n-1) cout << a[i] << endl;
    else cout << a[i] << " ";
  }

  return 0;  
}




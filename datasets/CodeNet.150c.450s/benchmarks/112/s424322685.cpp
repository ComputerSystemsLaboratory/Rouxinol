#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
#define MAX_M 100000000

int n;//変換表の行数
int m;//変換するデータの行数
char D[MAX_M];//変換するデータを格納する
char a,b;
int use[MAX_M];//すでに変換した行かどうか調べる

typedef pair<char,char> P;

vector<P> A;

int main(){
  while(true){
  scanf("%d",&n);
  if(n ==0)
    break;
  for(int i = 0;i < n;i++){
    cin >>a>>b;
    A.push_back(P(a,b));
  }
  scanf("%d",&m);
  for(int i = 0;i < m;i++){
    cin >>D[i];
    use[i] = 0;//使用配列初期化
  }
  for(int i=0;i<n;i++){
   a = A[i].first;
   b = A[i].second;
   for(int j = 0;j < m;j++){
     if(D[j] == a && use[j]==0){
       D[j] = b;
       use[j] = 1;
     }
     }
  }
  printf("%s\n",D);
  A.clear();
  }
  return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int N, M;
  int h[1500], w[1500];
  vector<int> k;
  //kの要素iについて、(X,Y)からy=xに下ろした垂線の足Hの座標を(i/2,i/2)とする。
  //つまりi=X+Yで、kは各iを集めた配列。
  int X[1501], Y[1501];
  int sum, temp;
  while(cin >> N >> M && N>0){
    for(int i=0;i<N;i++)
      cin >> h[i];
    for(int i=0;i<M;i++)
      cin >> w[i];

    X[0]=0; Y[0]=0;
    for(int i=0;i<M;i++)
      X[i+1] = X[i] + w[i];
    for(int i=0;i<N;i++)
      Y[i+1] = Y[i] + h[i];
    
    k.clear();
    for(int i=0;i<M+1;i++)
      for(int j=0;j<N+1;j++)
        k.push_back(X[i]+Y[j]);
    sort(k.begin(), k.end());
    
    sum=0;
    temp=1;
    for(int i=1;i<k.size();i++){
      if(k[i] == k[i-1])
        temp++;
      else{
	sum += temp*(temp-1)/2;
	temp = 1;
      }
    }
    cout << sum << endl;
  }
}


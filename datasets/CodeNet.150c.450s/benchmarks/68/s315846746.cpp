#include <bits/stdc++.h>
using namespace std;
#include <iostream>
/*cout <<"Debug"
cout <<x-30<<' '<<y-30<<endl;*/
typedef pair<pair<int ,int>, int> P;
vector<pair<pair<int ,int>, int> > v_ans;
vector<long int>v;
vector<long int>v_ansl;
/*taro tenn,hanako_ten,sum*/

bool cmp(P h, P r){
  return h.second < r.second;
}
int main(){
    int N;
    cin >>N;
    while(N != 0){
      for (int i = 0;i<N;i++){
        long int x;
        cin >>x;
        v.push_back(x);
      }
      for(int i = 0;i < N;i++){
        for(int j = i+1; j < N;j++){
          if(i == j)continue;
          v_ansl.push_back(abs(v[i]-v[j]));
        }
      }
      sort(v_ansl.begin(),v_ansl.end());
      cout <<v_ansl[0]<<endl;

      v_ansl.clear();
      v.clear();


      cin >>N;
    }
  return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  int N,M;
  int a;

  while(1){
    vector<int> v1;
    vector<int> v2;
    vector<int> vh;
    vector<int> vw;
    int count = 0;
    int k = 0;
    int check = 0;
    int l = 0;

    cin>>N>>M;

    if(N == 0 && M == 0){
      break;
    }

    for(int i = 0;i < N;++i){
      cin>>a;
      v1.push_back(a);
    }

    for(int i = 0;i < M;++i){
      cin>>a;
      v2.push_back(a);
    }

    for(int i = 0;i < N;++i){
      int temp1 = 0;

      for(int j = i;j < N;++j){
	temp1 += v1[j];
	vh.push_back(temp1);
      }
    }

    for(int i = 0;i < M;++i){
      int temp2 = 0;

      for(int j = i;j < M;++j){
        temp2 += v2[j];
        vw.push_back(temp2);
	++l;
      }
    }

    sort(vh.begin(),vh.end());
    sort(vw.begin(),vw.end());

    for(auto e : vh){
      while(1){
        if(k == l){
	  break;
        }
        if(e == vw[k]){
	  ++count;
        }
        else if(e < vw[k]){
	  break;
        }
        else{
	  check = k+1;
        }
        ++k;
      }
      k = check;
    }
    cout<<count<<endl;
  }

  return 0;
}
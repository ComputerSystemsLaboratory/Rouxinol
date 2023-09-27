#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N,M,l;
  vector<int> h(1<<11),v(1<<11),h_l(1<<21),v_l(1<<21);
  cin >> N >> M;
  while(N!=0 && M!=0){
    for(int i=0;i<h_l.size();i++){
      h_l.at(i)=0;v_l.at(i)=0;
    }
    for(int i=0;i<N;i++) cin >> h.at(i);
    for(int i=0;i<M;i++) cin >> v.at(i);
    for(int i=0;i<N;i++){
      l=0;
      for(int j=i;j<N;j++){
	l+=h.at(j);
	h_l.at(l)+=1;
      }
    }
    for(int i=0;i<M;i++){
      l=0;
      for(int j=i;j<M;j++){
	l+=v.at(j);
	v_l.at(l)+=1;
      }
    }
    int ans=0;
    for(int i=1;i<h_l.size();i++){
      ans+=(h_l.at(i)*v_l.at(i));
    }
    cout << ans << endl;;
    cin >> N >> M;
  }
}


#include <iostream>
#include <map>
using namespace std;

int main(){
  int N,M;
  while(cin >> N >> M && !(N==0 && M==0)){
    map<int,int> hor,ver;
    int h[1500], w[1500];
    for(int i=0;i<N;i++){
      cin >> h[i];
      int s=0;
      for(int j=i;j>=0;j--){
	s+=h[j];
	ver[s]++;
      }
    }
    for(int i=0;i<M;i++){
      cin >> w[i];
      int s=0;
      for(int j=i;j>=0;j--){
	s+=w[j];
	hor[s]++;
      }
    }

    int count=0;
    for(map<int,int>::iterator p=ver.begin();p!=ver.end();++p)
      count+=(p->second)*(hor[p->first]);

    cout << count <<endl;
  }

  return 0;
}
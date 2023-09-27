#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int m,max,min,point;

  while(1){
    vector<int> P;

    cin>>m;
    cin>>min;
    cin>>max;

    if(m == 0 && min == 0 && max == 0){
      break;
    }

    for(int i = 0;i < m;++i){
      cin>>point;
      P.push_back(point);
    }

    sort(P.begin(),P.end(),greater<int>());

    int Pmax,Pmin,Gap,n;
    int a = min - 1;

    for(int i = min - 1;i < max;++i){
      Pmax = P.at(i);
      Pmin = P.at(i+1);

      if(i == a){
        Gap = Pmax - Pmin;
        n = i + 1;
      }
      else{
        if(Gap <= Pmax - Pmin){
          Gap = Pmax - Pmin;
          n = i + 1;
        }
      }
    }

    cout<<n<<endl;
  }

  return 0;
}

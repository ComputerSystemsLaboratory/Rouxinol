#include <iostream>
#include <string>
#include <vector>
#include <cmath>

#define INF pow(10,10)

using namespace std;

int main(){
  int cnt=0;
  vector<int> R;
  int maxSub=-INF;
  int max=-INF;
  int min=INF;
  int n;
  cin >> cnt;
  for(int j=0;j<cnt;j++){
    cin >> n;
    R.push_back(n);

    int sub = n - min;
    if(sub > maxSub){
      maxSub = sub;
    }
    
    // first time
    if(j==0){
      min = max = n;
      continue;
    }

    if(min>n){min=n;}
    if(max<n){max=n;}

      

    
    // for(int i=0;i<R.size()-1;i++){
      // int sub = R.back() - R[i];
      // if(sub > Max){
    //    Max = sub;
    //}
    //    }

    // cout << "M: " << Max << endl;
  }

  cout << maxSub << endl;
}
    

    
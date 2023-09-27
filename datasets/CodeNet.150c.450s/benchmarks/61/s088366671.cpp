#include<bits/stdc++.h>

using namespace std;

int main()
{
  while(1){
    int N,A,B,C,X;
    cin>>N>>A>>B>>C>>X;

    if(N == 0 && A == 0 && B == 0 && C == 0 && X == 0){
      break;
    }

    vector<int> Y;
    for(int i = 0;i < N;++i){
      int temp;
      cin>>temp;
      Y.push_back(temp);
    }

    int X_d;
    int f = 0;
    int s = 0;
    for(int e : Y){
      while(1){
        if(s == 0 && e == X){
          break;
        }
        else{
          if(f == 10000){
            f = -1;
            break;
          }
          else{
            X_d = (A*X + B) % C;
            X = X_d;
            ++f;
          }
        }

        if(X_d == e){
          break;
        }
      }
      if(f == -1){
        break;
      }
      s = 1;
    }

    cout<<f<<endl;
  }
  return 0;
}





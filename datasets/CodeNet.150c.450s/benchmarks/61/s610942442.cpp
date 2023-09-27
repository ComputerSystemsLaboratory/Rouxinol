#include<bits/stdc++.h>

using namespace std;

int main()
{
  while(1)
  {
    int N,A,B,C,X;
    cin>>N>>A>>B>>C>>X;
    if(N == 0 && A == 0 && B == 0 && C == 0 && X == 0){
      break;
    }

    vector<int> n;
    for(int i = 0;i < N;++i){
      int j;
      cin>>j;
      n.push_back(j);
    }

    int flame = 0;

    int check = 0;
    for(int e : n){
      if(check == 0){
        check = 1;
        if(e == X){
          continue;
        }
        else{
          while(1){
            ++flame;
            if(flame > 10000){
              break;
            }

            int x = (A * X + B) % C;
            X = x;

            if(x == e){
              break;
            }
          }
        }
      }
      else{
        while(1){
          ++flame;
          if(flame > 10000){
            break;
          }

          int x = (A * X + B) % C;
          X = x;

          if(x == e){
            break;
          }
        }
      }
    }

    if(flame > 10000){
      cout<<-1<<endl;
    }
    else{
      cout<<flame<<endl;
    }
  }

  return 0;
}

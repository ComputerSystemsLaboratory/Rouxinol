#include<bits/stdc++.h>

using namespace std;

int main()
{
  while(1){
    int n;
    cin>>n;
    if(n == 0){
      break;
    }

    vector<int> step;
    for(int i = 0;i < n;++i){
      string s;
      cin>>s;

      if(s == "lu"){
        step.push_back(0);
      }
      else if(s == "ld"){
        step.push_back(1);
      }
      else if(s == "ru"){
        step.push_back(2);
      }
      else{
        step.push_back(3);
      }
    }

    bool left = 0;
    bool right = 0;
    bool cases = 0; 
    int ans = 0;
    for(int e : step){
      if(e == 0){
        left = 1;
      }
      else if(e == 1){
        left = 0;
      }
      else if(e == 2){
        right = 1;
      }
      else{
        right = 0;
      }

      if(cases == 0 && left == 1 && right == 1){
        ++ans;
        cases = 1;
      }
      else if(cases == 1 && left == 0 && right == 0){
        ++ans;
        cases = 0;
      }
    }

    cout<<ans<<endl;
  }
  
  return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
  while(1){
    int e;
    cin>>e;
    if(e == 0){
      break;
    }

    int ans;
    bool check = false;
    for(int z = 0;z * z * z <= e;++z){
      for(int y = 0;y * y <= e - z * z * z;++y){
        int x = e - ((y * y) + (z * z * z));

        if(check == false){
          ans = x + y + z;
          check = true;
        }
        else{
          ans = min(ans,x+y+z);
        }
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}

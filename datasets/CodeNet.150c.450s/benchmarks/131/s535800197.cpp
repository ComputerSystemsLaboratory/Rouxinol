#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#define rep(i,x,y) for(int (i)=(x);(i)<(y);(i)++)

int main()
{
  while(true){
    int a,l;
    cin>>a>>l;
    if(a==0&&l==0){
      break;
    }

    vector<int> an;
    an.push_back(a);

    string s=to_string(a);
    rep(i,s.size(),l){
      s="0"+s;
    }

    bool flag=false;
    while(flag==false){
      sort(s.rbegin(),s.rend());
      int maxs=stoi(s);
      sort(s.begin(),s.end());
      int mins=stoi(s);

      int ans=maxs-mins;
      rep(i,0,an.size()){
        if(ans==an[i]){
          cout<<i<<" "<<an[i]<<" "<<an.size()-i<<endl;
          flag=true;
          break;
        }
      }
      an.push_back(ans);
      s=to_string(ans);
      rep(i,s.size(),l){
        s="0"+s;
      }
    }
  }

  return 0;
}
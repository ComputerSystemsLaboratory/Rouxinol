#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define rep(i,x,y) for(int (i)=(x);(i)<(y);(i)++)

int main()
{

  while(true){
    vector<int> H[5];
    int n;

    cin>>n;
    if(n==0){
      break;
    }
    rep(i,0,n){
      rep(j,0,5){
        int temp;
        cin>>temp;
        H[j].insert(H[j].begin(),temp);
      }
    }

    int score=0;
    bool flag=true;
    while(flag==true){
      flag=false;
      rep(i,0,n){
        rep(j,0,3){
          if(H[j][i]==-1||H[j][i]==-2){
            continue;
          }
          int count=1;
          int k=j;
          while(true){
            k++;
            if(k>=5){
              break;
            }
            if(H[j][i]==H[k][i]){
              count++;
            }else{
              break;
            }
          }
          if(count>=3){
            flag=true;
            score+=count*H[j][i];
            rep(ii,j,k){
              H[ii][i]=-1;
            }
            break;
          }
        }
      }

      rep(i,0,5){
        int cnt=0;
        auto iter=H[i].begin();
        while(iter!=H[i].end())
          if(*iter==-1){
            iter=H[i].erase(iter);
            cnt++;
          }else{
            iter++;
          }
        rep(j,0,cnt){
          H[i].push_back(-2);
        }
      }
    }

    cout<<score<<endl;
  }
  return 0;
}
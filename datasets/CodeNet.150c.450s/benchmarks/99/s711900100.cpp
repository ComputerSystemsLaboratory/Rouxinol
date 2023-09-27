#include "bits/stdc++.h"
using namespace std;

const string number={'2','3','4','5','6','7','8','9'};
const string moji={'i','x','c','m'};

void hantei(string MCXI,int *digit){
  // for(int i=4;i>0;--i)cout << MCXI[i] <<endl;
  for(int i=MCXI.size();i>1;--i){//?°?????????????????????????????????????????????\??§?????????
    if(MCXI[i-1]==moji[0]){
      digit[0]=1;
      for(int j=0;j<number.size();++j){
        if(MCXI[i-2]==number[j]){
          digit[0]=j+2;
          --i;
          break;
        }
      }
    }else if(MCXI[i-1]==moji[1]){
      digit[1]=1;
      for(int j=0;j<number.size();++j){
        if(MCXI[i-2]==number[j]){
            digit[1]=j+2;
            --i;
            break;
          }
        }
      }else if(MCXI[i-1]==moji[2]){
        digit[2]=1;
        for(int j=0;j<number.size();++j){
          if(MCXI[i-2]==number[j]){
            digit[2]=j+2;
            --i;
            break;
          }
        }
      }else if(MCXI[i-1]==moji[3]){
      digit[3]=1;
      for(int j=0;j<number.size();++j){
        if(MCXI[i-2]==number[j]){
          digit[3]=j+2;
          --i;
          break;
        }
      }
    }
  }
  if(MCXI[0]==moji[0])digit[0]=1;
  else if(MCXI[0]==moji[1])digit[1]=1;
  else if(MCXI[0]==moji[2])digit[2]=1;
  else if(MCXI[0]==moji[3])digit[3]=1;
}

string answer(int *digit1,int *digit2){
  string ans;
  int ans_digit[4]={(digit1[0]+digit2[0])%10,
                (digit1[1]+digit2[1]+(digit1[0]+digit2[0])/10)%10,
                (digit1[2]+digit2[2]+(digit1[1]+digit2[1]+(digit1[0]+digit2[0])/10)/10)%10,
                digit1[3]+digit2[3]+(digit1[2]+digit2[2]+(digit1[1]+digit2[1]+(digit1[0]+digit2[0])/10)/10)/10};
  // for(int i=4;i>0;--i)cout << ans_digit[i-1] <<endl;
    for(int i=4;i>0;--i){
      if(ans_digit[i-1]==1)ans.push_back(moji[i-1]);
      else if(ans_digit[i-1]>1){
        ans.push_back(number[ans_digit[i-1]-2]);
        ans.push_back(moji[i-1]);
        }
      }
    return ans;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  string MCXI1,MCXI2;

  cin >> n;
  while(n){
    int digit1[4]={0};
    int digit2[4]={0};
    cin >> MCXI1 >>MCXI2;
    hantei(MCXI1,digit1);
    hantei(MCXI2,digit2);
    // for(int i=4;i>0;--i)cout << digit1[i-1] << " " << digit2[i-1] <<endl;
    cout << answer(digit1,digit2) << endl;
    n--;
  }
  return 0;
}
#include<iostream>
#include<string>
#include<cctype>

#define rep(i,start,n) for(int i=start;i<n;i++)                 //??????????????????

using namespace std;

int main(){

  int count=0;
  string word,sent;

  cin >> word ;                //???????????§?????????????????????

  rep(i , 0 , word.length()){                                  // ???????????????
    if(isupper(word[i])){
      word[i] = tolower(word[i]);                        //??????????°????????????????
    }
  }

  while(cin >> sent){                                      //???????????\???
    if(sent == "END_OF_TEXT") break;                       //?????????????????????
    rep(i , 0 , sent.length()){                         //??????????°??????????????????????????????????????????????
      if(isupper(sent[i])){
        sent[i] = tolower(sent[i]);
      }
    }
    if(word == sent){
      count++;                            //???????????????????????°?????????????????????
    }
  }

  cout << count << endl;

  return 0;

}
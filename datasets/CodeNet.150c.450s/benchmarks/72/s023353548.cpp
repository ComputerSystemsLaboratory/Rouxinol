#include<iostream>
#include<string>
#include<cctype>
#include<fstream>
#define rep(i,start,n) for(int i=start;i<n;i++)    //http://peroon.hatenablog.com/entry/20091123/1258966199????????§
//???for()????????????????????????????????¨??§?°??????????????????¨????????????rep???repetition?????\??§??????????????§?????????//

using namespace std;

int main(){

  string sentence;                    //????????????????´????????????°?????????

  getline(cin,sentence);              //???????????¨?????°???cin?????¨??????????????????????´?

  rep(i,0,sentence.length()){                //for()??¨?????????????????????????????????????????¶??????????????????????????§???
    if(islower(sentence[i])){                //sentence???????´??????????????????????????????????????°?????????????????????????
      sentence[i] = toupper(sentence[i]);   //?°????????????´???????????????????????§???????????????
    }
    else{                                   //??????????????´????????\???????????????????????§???????????´??????
      sentence[i] = tolower(sentence[i]);   //??§???????????´???????°????????????????
    }
  }

  cout << sentence << endl;                  //??????

  return 0;

}
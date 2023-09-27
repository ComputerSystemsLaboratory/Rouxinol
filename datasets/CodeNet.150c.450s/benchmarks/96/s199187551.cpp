#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
  int N;
  cin >> N;
  for(int i=0;i<N;i++){
    string S;
    cin >> S;
    map<char,int> loop;
    map<char,map<int,char> > mp;
    mp['1'][0]='.';loop['1']=5;
    mp['1'][1]=',';
    mp['1'][2]='!';
    mp['1'][3]='?';
    mp['1'][4]=' ';
    mp['2'][0]='a';loop['2']=3;
    mp['2'][1]='b';
    mp['2'][2]='c';
    mp['3'][0]='d';loop['3']=3;
    mp['3'][1]='e';
    mp['3'][2]='f';
    mp['4'][0]='g';loop['4']=3;
    mp['4'][1]='h';
    mp['4'][2]='i';
    mp['5'][0]='j';loop['5']=3;
    mp['5'][1]='k';
    mp['5'][2]='l';
    mp['6'][0]='m';loop['6']=3;
    mp['6'][1]='n';
    mp['6'][2]='o';
    mp['7'][0]='p';loop['7']=4;
    mp['7'][1]='q';
    mp['7'][2]='r';
    mp['7'][3]='s';
    mp['8'][0]='t';loop['8']=3;
    mp['8'][1]='u';
    mp['8'][2]='v';
    mp['9'][0]='w';loop['9']=4;
    mp['9'][1]='x';
    mp['9'][2]='y';
    mp['9'][3]='z';
    char set='0';
    int count=0;
    for(int i=0;i<S.size();i++){
      if(S[i]=='0'){
        if(set!='0'){
          cout << mp[set][count%loop[set]];
          set='0';
        }
        count = 0;
      }else if(S[i]==set){
        count++;
      }else{
        set=S[i];
      }
    }
    cout << endl;
  }
}


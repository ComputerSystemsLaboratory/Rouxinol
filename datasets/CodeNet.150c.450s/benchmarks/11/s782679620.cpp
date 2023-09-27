#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::endl;
using std::map;
int n,i,j,rank;
char suit;
bool card[4][13];
// map<char,int> suit2id={{'S',0},{'H',1},{'C',2},{'D',3}};
// map<int,char> id2suit={{0,'S'},{1,'H'},{2,'C'},{3,'D'}};
map<char,int> suit2id;
char id2suit[4]={'S','H','C','D'};
int main(void){
  suit2id['S']=0;
  suit2id['H']=1;
  suit2id['C']=2;
  suit2id['D']=3;
  cin>>n;
  for(i=0;i<n;i++){
    cin>>suit>>rank;
    card[suit2id[suit]][rank-1]=true;
  }
  for(i=0;i<4;i++){
    for(j=0;j<13;j++){
      if(!card[i][j])cout<<id2suit[i]<<" "<<j+1<<endl;
    }
  }
  return 0;
}


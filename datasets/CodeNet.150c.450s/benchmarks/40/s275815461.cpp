#include <iostream>
#include <string>
using namespace std;
class DICE{
private:
  int foo;
  int temp;
public:
  int dice[6];
  void rollN(){roll(1,5,4);}
  void rollS(){roll(4,5,1);}
  void rollW(){roll(2,5,3);}
  void rollE(){roll(3,5,2);}
  void roll(int a,int b,int c){
    temp=dice[0]; dice[0]=dice[a];
    dice[a]=dice[b]; dice[b]=dice[c];
    dice[c]=temp;
  }
  void fi(char ch){
    if(ch=='N'){rollN();}
    if(ch=='S'){rollS();}
    if(ch=='W'){rollW();}
    if(ch=='E'){rollE();}
  }
};
int main(){
  int i;
  DICE c;
for(i=0;i<6;i++){
  cin>>c.dice[i];
}
string com;
cin>>com;
for(i=0;i<com.length();i++){
  c.fi(com[i]);
}
cout<<c.dice[0]<<endl;
  return 0;
}
/*N 1->2 2->6 6->5 5->1
  S 1->5 5->6 6->2 2->1
  W 1->3 3->6 6->4 4->1
  E 1->4 4->6 6->3 3->1
*/
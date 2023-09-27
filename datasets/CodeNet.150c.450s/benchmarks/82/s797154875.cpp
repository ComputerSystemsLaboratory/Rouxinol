#include <iostream>
using namespace std;
const int UP=0;
const int FLONT=1;
const int RIGHT=2;
const int LEFT=3;
const int BACK=4;
const int DOWN=5;
class Dice{
 public:
  Dice();~Dice();
  int num[6];
  void set_num(int n,int i);
  void spin(char c);
  int get_num(int n);
};
Dice::Dice(){}
Dice::~Dice(){}
void Dice::set_num(int n,int i){num[i]=n;}
int Dice::get_num(int n){return num[n];}
void Dice::spin(char c){
  int temp;
  if(c=='S'){
    temp=num[0];
    num[0]=num[4];
    num[4]=num[5];
    num[5]=num[1];
    num[1]=temp;
  }if(c=='N'){
temp=num[0];
    num[0]=num[1];
    num[1]=num[5];
    num[5]=num[4];
    num[4]=temp;
  }if(c=='W'){
    temp=num[0];
    num[0]=num[2];
    num[2]=num[5];
    num[5]=num[3];
    num[3]=temp;
  }if(c=='E'){
temp=num[0];
    num[0]=num[3];
    num[3]=num[5];
    num[5]=num[2];
    num[2]=temp;
  }if(c=='X'){
    temp=num[1];
    num[1]=num[2];
    num[2]=num[4];
    num[4]=num[3];
    num[3]=temp;
  }
}
int main(){
  //char c[102];                                                                
  int q,a,b;
  Dice *m_Dice;
  m_Dice=new Dice;
  for(int i=0; i<6; i++){
    int n;
    cin>>n;
    m_Dice->set_num(n,i);
  }
  cin>>q;
  for(int i=0; i<q; i++){
    cin>>a; cin>>b;
    for(int j=0; j<3; j++){
      if(a==m_Dice->get_num(UP))break;
      else m_Dice->spin('S');
    }
    for(int j=0; j<3; j++){
      if(a==m_Dice->get_num(UP))break;
      else m_Dice->spin('E');
}
    for(int j=0; j<3; j++){
      if(b==m_Dice->get_num(FLONT))break;
      else m_Dice->spin('X');
    }
    cout<<m_Dice->get_num(RIGHT)<<endl;
  }
  //for(int i=0; i<6; i++)cout<<m_Dice->get_num(i)<<endl;                       
  delete m_Dice;
  return 0;
}
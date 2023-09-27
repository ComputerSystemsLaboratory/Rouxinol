#include<iostream>
#include<string>
using namespace std;

class Cube{
public:
  int f[6];
  Cube(){}
  void roll_z(){roll(1,2,4,3);}
  void roll_y(){roll(0,2,5,3);}
  void roll_x(){roll(0,1,5,4);}
  void roll(int i,int j,int k, int l){
      int t=f[i];f[i]=f[j];f[j]=f[k];f[k]=f[l];f[l]=t;
  }
  void move(char ch){
      if(ch=='E')for(int i=0;i<3;i++)roll_y();
      if(ch=='W')roll_y();
      if(ch=='N')roll_x();
      if(ch=='S')for(int i=0;i<3;i++)roll_x();
  }
};

int main(){
    Cube c;
    string com;
    for(int i=0;i<6;i++){
        cin>>c.f[i];
    }
    cin>>com;
    for(int i=0;i<com.size();i++)c.move(com[i]);
    cout<<c.f[0]<<endl;
    return 0;
}

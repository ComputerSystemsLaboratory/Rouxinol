#include<iostream>
using namespace std;
struct Cube{
    /**
    *   0
    * 3 1 2 4
    *   5
    * <:y ^:x <>:z
    **/
    Cube(){}
    int d[6];
    void roll(int i,int j,int k,int l){
        int t=d[i];d[i]=d[j];d[j]=d[k];d[k]=d[l];d[l]=t;
    }
    
    void z(){roll(1,2,4,3);}
    void y(){roll(0,2,5,3);}
    void x(){roll(0,1,5,4);}
    
    void n(){x();}
    void s(){x(),x(),x();}
    void e(){y(),y(),y();}
    void w(){y();}
    
    int getRight(int top,int front){
        int right;
        for(int i=0;i<6;++i){
            for(int j=0;j<4;++j){
                if(d[0]==top&&d[1]==front)right=d[2];
                z();
            }
            if(i&1)x();
            else y();
        }
        return right;
    }
};
int getRight(Cube c,int top,int front){
    int right;
    for(int i=0;i<6;++i){
        for(int j=0;j<4;++j){
            if(c.d[0]==top&&c.d[1]==front)return c.d[2];
            c.z();
        }
        if(i&1)c.x();
        else c.y();
    }
    return right;
}
int main(){
  Cube c;
  int n;
  for(int i=0;i<6;++i)cin>>c.d[i];
  cin>>n;
  for(int i=0;i<n;++i){
    int x,y;
    cin>>x>>y;
    cout<<getRight(c,x,y)<<endl;
  }
  return 0;
}
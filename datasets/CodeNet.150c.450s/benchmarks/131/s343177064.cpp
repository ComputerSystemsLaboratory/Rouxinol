#include<iostream>

using namespace std;


int main(){
  int a,l,b1[10],b2[10],num,max,min,lop4=0,lop5=0;
  int bk[10][10],bkn[10],i[20];

  cin>>a;
  cin>>l;
  while(a!=0 || l!=0){

    for(int lop=0;lop<10;lop++){
      b1[lop]=0;
      b2[lop]=0;
      bkn[lop]=0;
      i[lop]=-1;
      for(int lop2=0;lop2<10;lop2++){
        bk[lop][lop2]=-1;
      }
    }
    for(int lop=10;lop<20;lop++){
      i[lop]=-1;
    }
    lop4=1;
    i[0]=a;
    while(1){
      for(int lop=l;lop>0;lop--){
        if(a==0){
          bk[0][bkn[0]]=0;
          bkn[0]++;
        }else{
          num=a%10;
          a/=10;
          bk[num][bkn[num]]=num;
          bkn[num]++;
        }
      }
      /*for(int lop=0;lop<10;lop++){
        cout<<bkn[lop]<<endl;
      }
      for(int lop=0;lop<10;lop++){
        for(int lop2=0;lop2<10;lop2++){
          cout<<bk[lop][lop2]<<' ';
        }
        cout<<'\n';
      }*/
      max=0;min=0;
      for(int lop=9;lop>=0;lop--){
        num=0;
        while(bk[lop][num]!=-1){
          max+=lop;
          max*=10;
          num++;
        }
      }
      max/=10;
      for(int lop=1;lop<10;lop++){
        num=0;
        while(bk[lop][num]!=-1){
          min+=lop;
          min*=10;
          num++;
        }
      }
      min/=10;
      a=max-min;
      i[lop4]=a;
      lop5=0;
      while(i[lop5]!=-1){
        if(i[lop5]==i[lop4] && lop5!=lop4){
          cout<<lop5<<' '<<a<<' '<<lop4-lop5<<endl;
          break;
        }
        lop5++;
      }
      if(i[lop5]==i[lop4] && lop5!=lop4){
        break;
      }
      lop4++;
      max=0;
      min=0;
      for(int lop=0;lop<10;lop++){
        b1[lop]=0;
        b2[lop]=0;
        bkn[lop]=0;
        for(int lop2=0;lop2<10;lop2++){
          bk[lop][lop2]=-1;
        }
      }
    }




    cin>>a;
    cin>>l;
  }

  return 0;
}
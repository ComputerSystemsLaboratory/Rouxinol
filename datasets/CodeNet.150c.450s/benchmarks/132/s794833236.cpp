#include<iostream>

using namespace std;

int main(){
  int P,N,ndata[55],wan,lop,a;
  while(1){
    cin>>N;
    cin>>P;
    if(N==0&&P==0){
      break;
    }
    for(lop=0;lop<50;lop++){
      ndata[lop]=0;
    }
    lop=0;
    wan=P;
    while(1){
      /*if(N==3&&P==3){
        lop=0;
        cout<<lop<<endl;
        break;
      }*/
      for(lop=0;lop<N;lop++){
        if(wan!=0){
          wan--;
          ndata[lop]++;
        }else{
          wan=wan+ndata[lop];
          ndata[lop]=0;
        }
        /*cout<<"wan="<<wan<<endl;
        for(int lop2=0;lop2<N;lop2++){
          cout<<lop2<<"  "<<ndata[lop2]<<endl;
        }
        cout<<endl;
        cin>>a;*/
        if(ndata[lop]==P&&wan==0){
          break;
        }
      }
      if(ndata[lop]==P&&wan==0){
        cout<<lop<<endl;
        break;
      }
    }

  }
  return 0;
}
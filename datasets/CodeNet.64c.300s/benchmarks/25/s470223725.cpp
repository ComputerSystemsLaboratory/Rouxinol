#include <iostream>
using namespace std;
int d[4];
int main (){
      while(cin>>d[0]){
            int tmp,x=0,y=0;
            for(int j=1;j<4;j++)cin>>d[j];
            for(int j=0;j<4;j++){
                  cin>>tmp;
                  if(d[j]==tmp){x++;continue;}
                  for(int k=0;k<4;k++)if(d[k]==tmp){y++;break;}
            }
            cout<<x<<' '<<y<<endl;
      }
}
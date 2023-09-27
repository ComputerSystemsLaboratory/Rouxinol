#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(void){
    int m,na,ni,i,j,P,A,b;
    int max;
    

    while(cin>>m>>ni>>na,ni!=0||m!=0||na!=0){
        max=0;
         vector<int>sco(m,0);
      for(i=0;i<m;i++){
        
          cin>>P;
          sco[i]=P;
      }
      sort(sco.rbegin(),sco.rend());
      for(j=0;j<na-ni+1;j++){
        if(max<=(sco[ni-1+j]-sco[ni+j])){
            max=(sco[ni-1+j]-sco[ni+j]);
           b=ni+j;
        }

      }
    cout<<b<<endl;
     i=0;
     j=0;
     A=0;
     b=0;
    }

    return 0;
}

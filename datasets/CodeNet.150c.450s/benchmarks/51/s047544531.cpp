#include <iostream>
#include <algorithm>
using namespace std;
int main (){ 
          int d;
          int a[30]={};
          for(int i=1;i<=30;i++){
                   cin>>d;
                   a[d]=d;
           }
           for(int j=1;j<=30;j++){
                   if(a[j]!=j){
                         cout<<j<<endl;
                    }
             }
            return 0;
}
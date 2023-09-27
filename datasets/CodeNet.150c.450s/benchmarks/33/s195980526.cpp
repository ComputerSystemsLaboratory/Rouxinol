#include <bits/stdc++.h>
using namespace std;
int main(){
    double w,max=0;
    int a,b,c;
    while(cin>>a>>b>>c,a!=0&&b!=0&&c!=0){max=0;
        for(int i=1; i<c; i++){
            for(int j=c; j>=i; j--){
               if((int)(i*(100+a)/100)+(int)(j*(100+a)/100)==c){
               if((int)(i*(100+b)/100)+(int)(j*(100+b)/100)>max){
               max=(int)(i*(100+b)/100)+(int)(j*(100+b)/100);
               }
            }
        }
    }
        cout<<max<<endl;
    }
}
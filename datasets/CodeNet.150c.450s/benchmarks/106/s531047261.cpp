#include <iostream>

using namespace std;
int main(){
int a,b,c,m,i,g,h;
    cin>>a>>b>>c;
    i=0;
       for(m=1;m<=c;m++){
            if(c%m==0){
                g=m;
                 if(a<=g && b>=g){
                     h=i+1;
                     i=h;
                 }
                     }
                     }
            cout<<i<<endl;   
            return 0;      
}
#include <iostream>
#include <cmath>
#include <vector>
#include <utility>

using namespace std;

int main(){
    while(true){
        int x,y,s;
        cin >> x >> y >> s;
        if(x==0)break;
        x+=100;
        y+=100;
        int maxc=0;
        for(int i=1;i<s;i++){
            int c1=i*100/x;
            for(int j=1;j<s;j++){
               int c2=j*100/x;
               if(c1*x/100+c2*x/100==s){
                   if(maxc<c1*y/100+c2*y/100){
                       maxc=c1*y/100+c2*y/100;
                   }
               }
           }
       }
       cout << maxc << endl;
                
            
    }
    return 0;
}
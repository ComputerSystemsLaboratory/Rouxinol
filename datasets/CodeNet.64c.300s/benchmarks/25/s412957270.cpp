#include <iostream>
#include <string>
using namespace std;
int main(void){
    int x[4]={},y[4]={};
    while(cin>>x[0]>>x[1]>>x[2]>>x[3]>>y[0]>>y[1]>>y[2]>>y[3]){
        int h=0,b=0;
        for(int i=0;i<4;i++){
           for(int j=0;j<4;j++){
               if(x[i]==y[j]){
                   if(i==j) h++;
                   else b++;
               }
           }
        }
        cout << h << " " << b << endl; 
    }
    return 0;
}

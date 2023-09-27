#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;




int main(){
    int n;
    cin>>n;
   int  hanako=0,tarou=0;
    while(n>0){
        string hana,taro;
        cin>>hana>>taro;
        if(hana==taro){
            hanako++;
            tarou++;
        }else if(taro<hana){
            tarou+=3;
            
        }else{
            hanako+=3;
        }
        
        n--;
    }
    cout<<tarou<<' '<<hanako<<endl;
    
    return 0;
}


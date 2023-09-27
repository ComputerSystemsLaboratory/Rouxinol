#include<iostream>
using namespace std;
int main(){
    int a,b,c,q;
    cin >>a>>b>>c;
    q = 0;
    while(a <= b){
        if(c%a==0){
          q++;
          a++;
        }
        else{
            a++;
            continue;
        }
    }
    cout <<q<<"\n";
}
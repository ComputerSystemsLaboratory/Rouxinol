#include <iostream>
using namespace std;
int main(void){
int x=0,y=0,z=0,o=0;
cin>>x>>y>>z;

for(int i = x;i <= y;i++){
    if(z%i == 0){
        o++;
    }
}
cout<<o<<endl;
}


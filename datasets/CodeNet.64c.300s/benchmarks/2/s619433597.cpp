#include <iostream>
using namespace std;
int main(void){
int m=0,n=0,l=0,g=0;
while(1){
cin>>m>>n>>l;
g=m+n;
if(m==-1&&n==-1&&l==-1)break;
if(m==-1||n==-1){
    cout<<"F"<<endl;
}
else if(80<=g&&g<=100){
    cout<<"A"<<endl;
}
else if(65<=g&&g<80){
    cout<<"B"<<endl;
}
else if(50<=g&&g<65){
    cout<<"C"<<endl;
}
else if(50<=l){
    cout<<"C"<<endl;
}
else if(30<=g&&g<50){
    cout<<"D"<<endl;
}
else if(g<=30){
    cout<<"F"<<endl;
}
}
}


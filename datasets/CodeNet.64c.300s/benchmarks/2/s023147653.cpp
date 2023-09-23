#include <iostream>
using namespace std;
int main(void){
    // Here your code !
    int m,f,r,c;
   
    while(1){
    cin>>m>>f>>r;
   
     if(m==-1&&f==-1&&r==-1)  break;
      c=m+f;
    if(m==-1||f==-1)  cout<<"F"<<endl;
    else if(c>=80) cout<<"A"<<endl;
      else if(c<80&&c>=65) cout<<"B"<<endl;
     else if(c<65&&c>=50) cout<<"C"<<endl;
    else  if(c<50&&c>=30&&r>=50) cout<<"C"<<endl;
     else if(c<50&&c>=30&&r<50) cout<<"D"<<endl;
     else if(c<30) cout<<"F"<<endl;
    
}
    
    
    
}
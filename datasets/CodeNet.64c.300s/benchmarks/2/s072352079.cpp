#include<iostream>
using namespace std;
int main(){
    int m,k,r;
    while(1){
        cin>>m>>k>>r;
        if(m==-1 && k==-1 && r==-1)break;
        
        if(m==-1 | k==-1){
            cout<<"F"<<endl;
        }else if(m+k>=80){
            cout<<"A"<<endl;
        }else if(m+k>=65){
            cout<<"B"<<endl;
        }else if(m+k>=50){
            cout<<"C"<<endl;
        }else if(m+k>=30){
            if(r>=50){
                cout<<"C"<<endl;
            }else{
                cout<<"D"<<endl;
            }
        }else if(m+k<30){
            cout<<"F"<<endl;
        }
    }
    return 0;
}

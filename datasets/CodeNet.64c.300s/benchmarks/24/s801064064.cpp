#include<iostream>
using namespace std;
int main(){
    int n=1,A=0,B=0;
    while(n!=0){
        cin>>n;
        if(n==0){break;}
        for(int i=0;i<n;i++){
            int ap=0,bp=0;
            cin>>ap;
            cin>>bp;
            if(ap<bp){
                B=B+ap+bp;
            }
            if(ap>bp){
                A=A+ap+bp;
            }
            if(ap==bp){
                A=A+ap;
                B=B+bp;
            }
        }
        cout<<A<<" "<<B<<endl;
        A=0;B=0;
    }
    return 0;
}
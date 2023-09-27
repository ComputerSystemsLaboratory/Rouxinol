#include<iostream>

using namespace std;
int main(){
        int c=0;
        while(1){
                int p;
                cin>>p;
                if(p==0)break;
                c++;
                cout<<"Case "<<c<<": "<<p<<endl;
        }
}
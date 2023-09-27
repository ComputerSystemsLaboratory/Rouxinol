#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n,n){
        int c=0,u=0,d=0,l=-1;
        string str;
        for(int i=0;i<n;i++){
            cin>>str;
            if(str=="lu"||str=="ru"){
                if(l==0)
                    c++;
                l=0;
            }
            if(str=="ld"||str=="rd"){
                if(l==1)
                    c++;
                l=1;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
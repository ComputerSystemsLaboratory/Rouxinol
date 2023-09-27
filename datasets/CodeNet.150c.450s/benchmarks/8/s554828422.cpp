#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string a,b;
    int A=0,B=0;
    for(int i=0;i<n ;i++){
    cin>>a;
        cin>>b;
        if(a>b){
            A+=3;
        }else if(a<b){
            B+=3;
        }else{
            A++;
            B++;
        }
    }
        cout<<A<<" "<<B<<endl;
    return 0;
}
#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int n,m;
    int mi=1000000001;
    int res=-1000000001;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>m;
        if(m-mi>res&&i!=0) res=m-mi;
        if(m<=mi)mi=m;
    }
    cout<<res<<endl;
    return 0;
}
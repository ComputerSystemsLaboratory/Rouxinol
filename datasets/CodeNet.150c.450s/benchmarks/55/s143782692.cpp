#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string str;
    while(cin>>str){
    if(str=="0") break;
    int size=str.size();
    int a[1000];
    int ans=0;
    for(int k=0;k<size;k++){
        a[k]=str[k]-'0';
    }
    for(int i=0;i<size;i++){
        ans+=a[i];
    }
    cout<<ans<<endl;
        ans=0;
    }
    return 0;
}
#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(){
    string str1,str2,str3;
    int n,a,b,j,k;
    cin>>str1>>n;
    for(int i=0;i<n;i++){
        cin>>str3;
        if(str3=="print"){
            cin>>a>>b;
            cout<<str1.substr(a,b-a+1)<<endl;
        }
        else if(str3=="replace"){
            cin>>a>>b>>str2;
            str1.replace(a,b-a+1,str2);
        }
        else if(str3=="reverse"){
            cin>>a>>b;
            str2=str1.substr(a,b-a+1);
            for(j=0,k=b;k>=a;k--){
                str1[k]=str2[j++];
            }
        }
    }
return 0;
}

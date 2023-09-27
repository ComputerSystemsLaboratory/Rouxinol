#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,first,last,mix;
    int n,h,a;
    while(true){
        cin>>str1;
        if(str1=="-") break;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>h;
            first=str1.substr(0,h);
            last=str1.substr(h,a-h);
            mix=last+first;
            str1=mix;
            
        }
        cout<<mix<<endl;
        
    }
    return 0;
}

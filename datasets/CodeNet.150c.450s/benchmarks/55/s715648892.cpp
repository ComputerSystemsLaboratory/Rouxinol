#include<iostream>
#include<string>
using namespace std;
int main(){
    string num;
    while(1){
        int sum=0;
        cin>>num;
        if(num[0]=='0'){
            break;
        }
        for(int i=0;i<num.size();i++){
            sum=sum+num[i]-'0';
        }
    
        cout<<sum<<endl;
    }
    
    return 0;
}

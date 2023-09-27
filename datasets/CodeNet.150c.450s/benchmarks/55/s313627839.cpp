#include<iostream>
#include<string>
using namespace std;

int main(){
    string integer;
    while(1){
        cin>>integer;
        if(integer=="0")break;
        int sum=0;
        for(int i=0; i<integer.size();i++){
            sum+=integer[i]-'0';
        }
        cout<<sum<<endl;
        
    }
        
}


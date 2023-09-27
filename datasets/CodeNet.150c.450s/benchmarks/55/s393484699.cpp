#include <iostream>
#include<string>
using namespace std;
int main() {
    string num;
    while(cin>>num){
       
    if(num=="0")
        break;
    int sum=0;
    for(int i=0; i<num.size(); i++){
        sum+=num[i]-48;
    }
    cout<<sum<<endl;
    }
    return 0;
}
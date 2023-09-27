#include <iostream>
#include <string>
using namespace std;
int main(void){
    
    string str;
    int sum;
    
    while(cin >> str && str!="0"){
        sum=0;
        for(int i=0,l=str.size();i<l;i++)sum += str[i] - '0';
        cout << sum <<endl;
    }
    
    return 0;
    
}

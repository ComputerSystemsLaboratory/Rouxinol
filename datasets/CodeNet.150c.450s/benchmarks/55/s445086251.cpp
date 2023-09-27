#include<iostream>
#include<string>
using namespace std;

int main(){
    string num;
    int n=0;
    
    while(1){
    cin >> num;
    if(num[0] == '0') break;
    for(int i = 0; i < num.size(); i++){
        n += num[i] - '0';
    }
    cout << n << endl;
    n = 0;
    }
    return 0;
}

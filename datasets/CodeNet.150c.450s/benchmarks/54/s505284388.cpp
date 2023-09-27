#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;
int main(){
    int num = 0;
    string a,b;
    cin >> a;
    while(cin >> b){
        for(int i = 0;i < b.size();i++){
            if(b[i] < 97){
                b[i] = b[i] + 32;
            }
        }
        if(a == b){
            num++;
        }
    }
    cout << num << endl;
}

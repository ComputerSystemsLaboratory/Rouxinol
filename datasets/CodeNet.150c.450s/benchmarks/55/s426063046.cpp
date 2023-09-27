#include <iostream>
#include <queue>

using namespace std;

int main(){

    string s;
    int c;
    while(1){
        getline(cin,s);
        if(s == "0"){
            break;
        }
        int sum=0;
        int length = s.size();
        for(int i=0; i<length; i++){
           sum += s[i] - '0'; 
        }
        cout << sum << endl;        

    }

    return 0;
}
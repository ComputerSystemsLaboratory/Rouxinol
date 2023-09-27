#include <iostream>
using namespace std;
int main(){
    char num[1001];
    while(true){
        int sum=0, i=0;
     
        cin >> num;
        if(num[0]=='0') break;
     
        while(num[i]!='\0'){
            sum += num[i]-'0';
            ++i;
        }
         
        cout << sum << endl;
    }
     
    return 0;
}

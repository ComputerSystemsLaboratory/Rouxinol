#include <iostream>
#include <string>
 
using namespace std;
int main() {
    // your code goes here
    int a='a', A='A', sa=a-A;
    string S;
    int f=0;
    while(cin>>S){
        if(f++){cout<<" ";}
         
        for(int i=0; i<S.length(); i++){
            if(S[i]>=A && S[i]<=A+25){
                S[i]+=sa;
            }else if(S[i]>=a && S[i]<=a+25){
                S[i]-=sa;
            }
        }
        cout<<S;
    }
    cout<<endl;
    return 0;
}
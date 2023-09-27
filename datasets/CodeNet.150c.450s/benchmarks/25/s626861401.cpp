#include <iostream>
using namespace std;
int main(void){
    // Here your code !
 
    char ch;
    int sum[26]={0};
    
    for(int i=0;cin>>ch;i++){
        if('a'<= ch&&ch<='z')
        sum[ch-'a']++;
        else if('A'<=ch&&ch<='Z')
        sum[ch-'A']++;
    }
    
    for(char i='a';i<='z';i++)
    cout<<i<<" "<<":"<<" "<<sum[i-'a']<<endl;

}
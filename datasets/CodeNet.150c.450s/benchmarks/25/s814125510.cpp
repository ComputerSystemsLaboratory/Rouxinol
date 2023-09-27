#include <iostream>
using namespace std;
int main(void){
    
    int counter[26];
    for(int i=0;i<26;i++){
        counter[i]=0;
    }
    
    char ch;
    while(cin>>ch){
        int num = tolower(ch) - 'a';
        counter[num]++;
    }
    
    for(int i=0;i<26;i++){
        ch = i + 'a';
        cout << ch << " : " << counter[i] << endl;
    }

}
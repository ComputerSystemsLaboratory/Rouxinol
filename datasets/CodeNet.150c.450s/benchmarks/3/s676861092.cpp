#include<iostream>
#include<string>
using namespace std;

int main(){
    string word,word2,p;
    int x,b,a;
    cin >> word;
    cin >> x;
    for(int i=0;i<x;i++){
        cin >> word2 >> a >> b;
        if(word2=="print") cout << word.substr(a,b-a+1) << endl;
        else if(word2=="reverse"){
            string word3 = word.substr(a,b-a+1);
            int n = word3.size();
            for(int i=0;i<n;i++) word[i+a] = word3[n-i-1];
        }else if(word2=="replace"){
            cin >> p;
            word = word.replace(a,b-a+1,p);
        }
    }
    return 0;
}

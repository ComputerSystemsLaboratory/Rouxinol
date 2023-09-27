#include<algorithm>
#include<map>
#include<iostream>
#include<string>
using namespace std;

int main(){
    map<string,int> sent;
    string freq,lngest="";
    size_t N=0;

    string word;
    while(cin>>word){
        ++sent[word];
        if(sent[word]>N){
            N=sent[word];
            freq=word;
        }
        lngest=(word.size()>lngest.size()?word:lngest);
    }
    cout<<freq<<" "<<lngest<<"\n";
}
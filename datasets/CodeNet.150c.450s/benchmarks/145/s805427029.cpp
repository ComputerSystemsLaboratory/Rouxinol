#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    string s,max("");
    map<string,int> word;
    map<int,string> tmp;
    while(cin >> s){
        if(s.size() > max.size())max=s;
        word[s]++;
    }
    map<string,int>::iterator it;
    for(it=word.begin();it!=word.end();it++){
        tmp[(*it).second] = (*it).first;
    }
    cout << (*tmp.rbegin()).second << " "<< max << endl;
    return 0;
}
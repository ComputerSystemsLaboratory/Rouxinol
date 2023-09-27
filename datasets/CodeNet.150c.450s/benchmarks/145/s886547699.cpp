#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    map<string, int> word;
    string s;
    string outen;
    string outlen;
    int maxen;
    int maxlen;
    maxen = 0;
    maxlen = 0;
    while(cin >> s){
        if(word.find(s) != word.end()){
            word[s]++;
            if(word[s] > maxen){
                outen = s;
                maxen = word[s];
            }
            if(s.size() > maxlen){
                outlen = s;
                maxlen = s.size();
            }
        }else{
            word.insert(map<string, int>::value_type(s, 1));
            if(s.size() > maxlen){
                outlen = s;
                maxlen = s.size();
            }
            if(word[s] > maxen){
                outen = s;
                maxen = word[s];
            }
        }
    }
    cout << outen << " " << outlen << endl;
    return 0;
}
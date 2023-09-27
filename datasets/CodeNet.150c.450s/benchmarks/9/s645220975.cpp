#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string shuffle(string word1,int h){
    string head = word1.substr(0,h);
    string tail = word1.substr(h,word1.size()-h);
    return tail + head;
}

int main(){
    int x,y;
    string word;
    while(1){
        cin >> word;
        if(word=="-") break;
        cin >> x;
        for(int i=0;i<x;i++){
            cin >> y;
            word = shuffle(word,y);
        }
        cout << word << endl;
    }
    return 0;
}

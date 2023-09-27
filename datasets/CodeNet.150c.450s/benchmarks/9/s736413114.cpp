#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string shuffle(string str, int h){
    string str1 = str.substr(0,h);
    string str2 = str.substr(h, str.size()-h);
    return str2 + str1;
}

int main(){
    string card;
    int i, h;
    
    while(1){
        cin>>card;
        if (card=="-") break;
        
        cin>>i;
        for(int k=0; k<i; k++){
            cin>>h;
            card=shuffle(card,h);
        }
        cout<<card<<endl;
    }
    return 0;
}

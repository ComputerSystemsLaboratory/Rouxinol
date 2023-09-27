#include<iostream>
#include<cctype>
#include<string>
using namespace std;

string shuffle(string str, int len){
    string head = str.substr(0,len);
    string tail = str.substr(len,str.size()-len);
    return tail+ head;
}
int main(){
    string target;
    int time;
    int len;
    
    while(1){
        cin >> target >> time;
        if (target =="-") break;
        for (int i =0; i<time; i++){
            cin >> len;
            target = shuffle(target,len); 
        }
        cout << target << endl;
    }
    return 0;
}

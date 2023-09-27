#include <iostream>
#include <set>
using namespace std;
int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int CommandNum;
    set<string> List;
    string Command, ss;
     
    List.clear();
    cin >> CommandNum;
    for(int i = 0; i < CommandNum; i++){
        cin >> Command >> ss;
        if(Command[0] == 'i'){
            List.insert(ss);
        } else if(Command[0] == 'f'){
            set<string>::iterator itr = List.find(ss);
            if(itr != List.end())   cout << "yes" << endl;
            else    cout << "no" << endl;
        }
    }
}
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){

    int i,start,end;
    string str,cmd,rp;
    char temp;
    int number;

    cin >> str >> number;

    for(i == 0; i < number; i++){
        cin >> cmd;
        if(cmd == "print"){
            cin >> start >> end;
            cout << str.substr(start, end - start + 1) << endl;
        }else if(cmd == "reverse"){
            cin >> start >> end;
            for(; start < end;start++,end--){
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;                
                }
        }else if(cmd == "replace"){
                cin >> start >> end >> rp;
                str.replace(start, end - start+1, rp);
        }
    }
    return 0;
}
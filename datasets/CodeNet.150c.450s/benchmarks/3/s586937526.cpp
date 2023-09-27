#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <typeinfo>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

string replace(string s, int i, int j, string str_replace){
    int idx=0;
    for(int h=i; h<=j; h++){
        s[h] = str_replace[idx];
        idx += 1;
    }
    return s;
}

string reverse(string s, int i, int j){
    vector<char> tmp_char(j-i+1);
    for(int h=i; h<=j; h++){
        tmp_char[h-i] = s[h];
    }
    for(int h=i; h<=j; h++){
        s[i+j-h] = tmp_char[h-i];
    }
    return s;
}

void printStr(string s, int i, int j){
    for(int h=0; h<j-i+1; h++){
        if(h==j-i){
            cout << s[i+h] << endl;
            break;
        }else{
            cout << s[i+h];
        }
    }
}

int main(){

    string s;
    cin >> s;

    int q;
    cin >> q;

    vector<string> cmds(q);
    vector<string> cmd_str(q);
    vector<vector<int>> cmd_int;
    cmd_int = vector<vector<int>>(q,vector<int>(2));

    for(int i=0; i<q; i++){
        cin >> cmds[i];
        if(cmds[i]=="replace"){
            cin >> cmd_int[i][0] >> cmd_int[i][1] >> cmd_str[i];
        }else{
            cin >> cmd_int[i][0] >> cmd_int[i][1];
            cmd_str[i] = " ";
        }
    }

    for(int i=0; i<q; i++){
        if(cmds[i]=="replace"){
            s = replace(s, cmd_int[i][0], cmd_int[i][1], cmd_str[i]);
            continue;
        }else if(cmds[i]=="reverse"){
            s = reverse(s, cmd_int[i][0], cmd_int[i][1]);
            continue;
        }else if(cmds[i]=="print"){
            printStr(s, cmd_int[i][0], cmd_int[i][1]);
            continue;
        }
    }



    return 0;
}


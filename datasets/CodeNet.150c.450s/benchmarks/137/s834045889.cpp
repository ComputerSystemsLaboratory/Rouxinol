#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<stack>
#include<queue>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n;
    map<string, int> dic;
    cin >> n;
        char inp[8];
        string name;
    while(n--){
        scanf("%s", inp);
        cin >> name;
        if(inp[0] == 'i'){
            dic[name] = 1;
        }else if(inp[0] == 'f'){
            if(dic.find(name) != dic.end()){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }
    }
}
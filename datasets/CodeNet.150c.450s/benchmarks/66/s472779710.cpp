#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
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
    int n, m;
    bool open = false;
    map<string, int> door;
    cin >> n;
    while(n--){
        string input;
        cin >> input;
        door[input] = 1;
    }
    cin >> m;
    while(m--){
        string input;
        cin >> input;
        if(door.find(input) == door.end()){
            cout << "Unknown " << input << endl;
        }else{
            if(door[input] == 1 && open == false){
                cout << "Opened by " << input << endl;
                open = true;
            }else if(door[input] == 1 && open == true){
                cout << "Closed by " << input << endl;
                open = false;
            }
        }

    }
}
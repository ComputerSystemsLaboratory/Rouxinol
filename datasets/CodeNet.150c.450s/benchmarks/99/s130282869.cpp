#include <cstdio>
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<char, int> mcxi;

string toMCXI(int num){
    char m[] = {'m', 'c', 'x', 'i'};
    string ret = "";
    for(int i=0;i<4;i++){
        int k = num/mcxi[m[i]];
        if(k==1){
            ret += m[i];
        }else if(k!=0){
            ret += (char)('0'+k);
            ret += m[i];
        }
        num -= k*mcxi[m[i]];
    }
    return ret;
}

int toInt(string num){
    int ret = 0;
    int index = 0;
    while(index<num.length()){
        if(num[index]-'0'>9){
            ret += mcxi[num[index]];
        }else{
            ret += mcxi[num[index+1]]*(num[index]-'0');
            index++;
        }
        index++;
    }
    return ret;
}

int main(){
    mcxi['m'] = 1000;
    mcxi['c'] = 100;
    mcxi['x'] = 10;
    mcxi['i'] = 1;

    int n;
    cin >> n;
    while(n--){
        string num1, num2;
        cin >> num1 >> num2;
        int ans = toInt(num1) + toInt(num2);
        cout << toMCXI(ans) << endl;
    }
}
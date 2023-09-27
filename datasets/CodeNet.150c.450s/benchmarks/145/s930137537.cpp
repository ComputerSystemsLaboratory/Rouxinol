#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    string input, longest, many;
    int len = 0, count = 0;;
    map<string, int> wordCount;
    while(cin >> input){
        if(len < input.size()){
            len = input.size();
            longest = input;
        }
        wordCount[input]++;
        if(count < wordCount[input]){
            count = wordCount[input];
            many = input;
        }
    }
    cout << many << ' ' << longest << endl;
}
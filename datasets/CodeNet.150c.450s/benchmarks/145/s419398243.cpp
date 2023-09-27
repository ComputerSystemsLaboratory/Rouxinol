#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

#define pb         push_back
#define mp         make_pair
#define ll         long long
#define PI         acos(-1.0)
#define ALL(A)     ((A).begin(), (A).end())
#define vsort(v)   sort(v.begin(),v.end())
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)


int main(){
    int i, j, times=0;
    string tmp,maxLength,maxTimes;
    map<string, int> sentences;
    maxLength="";
    while(cin>>tmp){
        if(tmp.length()>maxLength.length()){
            maxLength=tmp;
        }
        if(sentences.count(tmp)==0){
            sentences.insert(map<string,int>::value_type(tmp,1));
        }else{
            sentences[tmp]++;
        }
        if(sentences[tmp]>times){
            times=sentences[tmp];
            maxTimes=tmp;
        }
    }
    cout << maxTimes << " " << maxLength << endl;
}
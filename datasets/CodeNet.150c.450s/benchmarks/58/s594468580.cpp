#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    int ans,a,b;
    char c[100];
    stack<int> S;
    while(scanf("%s",&c)!=EOF){
        if(c[0]=='+'){
            a=S.top(), S.pop(), b=S.top(), S.pop();
            S.push(a+b);
        }else if(c[0]=='-'){
            a=S.top(), S.pop(), b=S.top(), S.pop();
            S.push(b-a);
        }else if(c[0]=='*'){
            a=S.top(), S.pop(), b=S.top(), S.pop();
            S.push(a*b);
        }else{
            S.push(atoi(c));
        }
    }
    printf("%d\n",S.top()); 
    return 0;
}
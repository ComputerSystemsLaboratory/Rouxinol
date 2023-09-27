#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    char c[20];
    scanf("%s",&c);
    string s=c;
    reverse(s.begin(),s.end());
    printf("%s\n",s.c_str());
    return 0;
}
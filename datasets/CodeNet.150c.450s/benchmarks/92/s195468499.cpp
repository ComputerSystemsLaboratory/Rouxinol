#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        string s=to_string(a+b);
        printf("%d\n",s.size());
    }
    return 0;
}
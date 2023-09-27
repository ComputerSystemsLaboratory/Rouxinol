#include<bits/stdc++.h>
#include<string>
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
    char s[100], p[100];
    string scp="", s2="",chk="";
    scanf("%s",&s);
    scanf("%s",&p);
    scp=s;
    chk=p;
    s2=scp+scp;
    size_t pos = s2.find(p);
    if(pos != string::npos){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
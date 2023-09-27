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
    int cnt[26];
    char c;
    for(int i=0;i<26;i++){
        cnt[i]=0;
    }
    while(scanf("%c",&c)!=EOF){
        if(isupper(c)){
            cnt[static_cast<int>(c)-65]+=1;
        }else if(islower(c)){
            cnt[static_cast<int>(c)-97]+=1;
        }
    }
    for(int i=0;i<26;i++){
        printf("%c : %d\n",static_cast<char>(i+97),cnt[i]);
    }
    return 0;
}
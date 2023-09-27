#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

void vp(vector<string> x,int a){
    for(int i=0;i<a-1;i++){
        printf("%s ",x[i].c_str());
    }
    printf("%s\n",x[a-1].c_str());
}

int main(){
    int n;
    string t="Stable", f="Not stable";
    vector<string> str, bub, sel;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char s[2];
        scanf("%s",&s);
        str.push_back(s);
    }
    copy(str.begin(), str.end(), back_inserter(bub));
    copy(str.begin(), str.end(), back_inserter(sel));
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(bub[j].substr(1)<bub[j-1].substr(1)){
                swap(bub[j],bub[j-1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        int minj=i;
        for(int j=i;j<n;j++){
            if(sel[j].substr(1)<sel[minj].substr(1)){
                minj=j;
            }
        }
        swap(sel[i],sel[minj]);
    }
    vp(bub,n);
    printf("%s\n",t.c_str());

    vp(sel,n);
    if(equal(bub.cbegin(),bub.cend(),sel.cbegin())){
        printf("%s\n",t.c_str());
    }else{
        printf("%s\n",f.c_str());
    }
    return 0;
}
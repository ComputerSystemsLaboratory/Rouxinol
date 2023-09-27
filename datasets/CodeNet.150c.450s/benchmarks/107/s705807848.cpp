#include <bits/stdc++.h>

int main(){
    std::string s1,s2;
    std::cin>>s1>>s2;
    std::vector<std::vector<int>> ld(s1.size()+1,std::vector<int>(s2.size()+1,INT_MAX));
    for (int i = 0; i <= s1.size(); ++i) ld[i][0]=i;
    for (int i = 0; i <= s2.size(); ++i) ld[0][i]=i;
    for (int i = 1; i <= s1.size(); ++i) {
        for (int j = 1; j <= s2.size(); ++j) {
            ld[i][j]=std::min(ld[i-1][j]+1,std::min(ld[i][j-1]+1,ld[i-1][j-1]+(s1[i-1]==s2[j-1]?0:1)));
        }
    }
    std::cout<<ld[s1.size()][s2.size()]<< std::endl;
    return 0;
}


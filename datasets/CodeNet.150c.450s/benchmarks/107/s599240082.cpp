#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0;i<(int)(n);i++)

template<class T> ll LevenshteinDistance(std::vector<T> v1, std::vector<T> v2){
    std::vector<std::vector<ll>> mat(2, std::vector<ll>(v2.size()+1));
    REP(i,v2.size()+1) mat[0][i]=i;
    REP(i,v1.size()){
        int nextvec = 1-i%2;
        mat[nextvec][0] = i+1;
        REP(j,v2.size()){
            mat[nextvec][j+1] = std::min(std::min(mat[nextvec][j]+1, mat[1-nextvec][j+1]+1), mat[1-nextvec][j]+(v1[i]!=v2[j]));
        }
    }
    return mat[v1.size()%2][v2.size()];
}

int main(){
    std::string s1,s2;
    vector<char> v1,v2; v1.clear(); v2.clear();
    cin>>s1>>s2;
    for(auto i : s1)v1.push_back(i);
    for(auto i : s2)v2.push_back(i);
    cout << LevenshteinDistance(v1,v2) << endl;
    return 0;
}

#include<algorithm>

template<class T>
T lis(const T& vec) {
    const int N = vec.size(), INF = 1<<30;
    T dp(N, INF), id(N);
    for (int i = 0; i < N; ++i) {
        id[i] = std::distance(dp.begin(), std::lower_bound(dp.begin(), dp.end(), vec[i]));
        dp[id[i]] = vec[i];
    }
    int length = *max_element(id.begin(), id.end());
    T seq(length + 1);
    for (int i = N - 1; i >= 0; --i)
        if (id[i] == length)seq[length--] = vec[i];
    return seq;
}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> vec(N);
    for(int i=0;i<N;++i) cin>>vec[i];
    vector<int> ans=lis(vec);
    cout<<ans.size()<<endl;
}
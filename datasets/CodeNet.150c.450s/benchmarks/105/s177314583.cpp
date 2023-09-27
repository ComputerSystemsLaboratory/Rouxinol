#include <iostream>
#include <vector>
#include <string>

using namespace std;

class XorBase {
public:
    explicit XorBase(){}
    long long reduce(long long t) const {
        for(auto& b : base) t = min(t, t^b);
        return t;
    }
    bool add(long long t){
        t = reduce(t);
        if(!t) return false;
        base.push_back(t);
        for(int i=base.size()-2;i>=0;i--) if(base[i] < base[i+1]) swap(base[i], base[i+1]);
        return true;
    }
    long long getMax() const {
        long long res = 0;
        for(auto& b : base) res = max(res, res^b);
        return res;
    }
    bool represent(long long t) const { return reduce(t) == 0; }
private:
    vector<long long> base;
};

int solve(const vector<long long>& A, const string& S){
    const int N = A.size();
    XorBase xb;
    for(int i=N-1;i>=0;i--){
        if(S[i] == '0'){
            xb.add(A[i]);
        } else {
            if(!xb.represent(A[i])) return 1;
        }
    }
    return 0;
}

int main(){
    int T; cin >> T;
    while(T--){
        int N; cin >> N;
        vector<long long> A(N);
        for(auto& t : A) cin >> t;
        string S; cin >> S;
        cout << solve(A, S) << endl;
    }
}
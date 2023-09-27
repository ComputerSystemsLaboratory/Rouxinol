//Prime Factorize
#include <iostream>
#include <vector>

using namespace std;

vector<int> factorize(int n) {
    vector<int> ans;
    int i = 2;
    while(n > 1) {
        if(n % i == 0) {
            ans.push_back(i);
            n /= i;
        }
        else if(i*i > n) {
            ans.push_back(n);
            break;
        }
        else i++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> ans = factorize(n);

    cout << n << ":";
    for(auto x: ans) cout << " " << x;
    cout << endl;
}

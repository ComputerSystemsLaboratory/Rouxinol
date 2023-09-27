/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0009&lang=jp*/

#include <iostream>
#include <vector>
#include <algorithm>

#define MAX 999999

using namespace std;

int num_prime[MAX];
bool not_prime_flag[MAX];

int main()
{
    int n;
    int max_input;
    vector<int> input;

    while (cin>>n){
        input.push_back(n);
    }
    max_input=*max_element(input.begin(),input.end());
    for (int i = 1; i < max_input; ++i) {
        if(!not_prime_flag[i]){
            for (int j = 2; (i+1)*j-1 < max_input; ++j) {
                not_prime_flag[(i+1)*j-1] = true;
            }
        }
        num_prime[i]=num_prime[i-1]+!not_prime_flag[i];
    }
    for (int i:input) {
        cout<<num_prime[i-1]<<endl;
    }
    return 0;
}
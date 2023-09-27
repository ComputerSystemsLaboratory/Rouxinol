#include <iostream>
using namespace std;

int main() {
    int n,x;

    while(cin >> n >> x, n || x) {
        int sum = 0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<x-i;j++)
            {
                int k = x-i-j;
                if(j<k && k<=n) {
                    sum += 1;
                }
            }
        }
        cout << sum << endl;
    }
}
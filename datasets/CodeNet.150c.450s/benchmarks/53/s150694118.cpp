#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int n_copy = n;
    cout << n << ":";
    for (int i = 2; i*i < n_copy; i++)
    {
        while (n % i == 0)
        {
            cout << " " << i;
            n /= i;
        }
    }
    if (n != 1)
    {
        cout << " " << n;
    }
    
    cout << endl;
}

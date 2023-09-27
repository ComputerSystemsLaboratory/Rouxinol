#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<string> A(N), B(N);
    for(int i = 0; i < N; i++){
        cin >> A.at(i) >> B.at(i);
    }

    int a = 0, b = 0;
    for(int i = 0; i < N; i++){
        if(A.at(i) == B.at(i)){
            a++;
            b++;
        }else if(A.at(i) > B.at(i)){
            a += 3;
        }else{
            b += 3;
        }
    }
    cout << a << " " << b << endl;
}

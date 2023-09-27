#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;

    cin >> N >> M;

    vector<vector<int>> A(N, vector<int>(M));
    vector<int> B(M);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> A.at(i).at(j);
        }
    }
    for(int i = 0; i < M; i++){
        cin >> B.at(i);
    }

    vector<int> C(N, 0);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            C.at(i) += A.at(i).at(j) * B.at(j);
        }
    }

    for(int i = 0; i < N; i++){
        cout << C.at(i) << endl;
    }

}

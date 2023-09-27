#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> B(N), F(N), R(N), V(N);
    vector<vector<vector<int>>> A(4,vector<vector<int>>(3,vector<int>(10, 0)));

    for(int i = 0; i < N; i++){
        cin >> B.at(i) >> F.at(i) >> R.at(i) >> V.at(i);
    }

    for(int i = 0; i < N; i++){
        int b = B.at(i), f = F.at(i), r = R.at(i), v = V.at(i);
        A.at(b-1).at(f-1).at(r-1) += v;
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 10; k++){
                cout << " " << A.at(i).at(j).at(k);
            }
            cout << endl;
        }
        if(i < 3) cout << "####################" << endl;
    }
}

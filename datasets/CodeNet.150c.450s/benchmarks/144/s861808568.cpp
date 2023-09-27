#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    vector<vector<long long int>> A(a,vector<long long int>(b,0));
    vector<vector<long long int>> B(b,vector<long long int>(c,0));

    for (int d = 0; d < a; ++d) {
        for (int e = 0; e < b; ++e) {
            cin >> A.at(d).at(e);
        }
    }

    for (int f = 0; f < b; ++f) {
        for (int g = 0; g < c; ++g) {
            cin >> B.at(f).at(g);
        }
    }

    vector<vector<long long int>> Result(a,vector<long long int>(c,0));

    for (int i = 0; i < a; ++i) {
        for (int k = 0; k < b; ++k) {
            for (int j = 0; j < c; ++j) {
                Result.at(i).at(j) += A.at(i).at(k) * B.at(k).at(j);
            }
        }
    }

    for (int l = 0; l < a; ++l) {
        for (int m = 0; m < c; ++m) {
            cout << Result.at(l).at(m);

            if(m != c -1){
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
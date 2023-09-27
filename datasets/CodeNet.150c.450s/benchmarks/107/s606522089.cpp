#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;

    vector< vector<int> >
        EditD(first.length() + 1, vector<int>(second.length() + 1, 0));

    for (size_t i = 0; i <= first.length(); ++i) {
        EditD[i][0] = i;
    }
    for (size_t i = 0; i <=second.length(); ++i) {
        EditD[0][i] = i;
    }
    for (size_t i = 1; i <= first.length(); ++i) {
        for (size_t j = 1; j <= second.length(); ++j) {
            if (first[i-1] == second[j-1]) {
                EditD[i][j] = EditD[i-1][j-1];
            } else {
                EditD[i][j] =
                    1 + min(EditD[i-1][j],
                            min(EditD[i][j-1],
                                EditD[i-1][j-1]));
            }
        }
    }
    cout << EditD[first.length()][second.length()] << endl;
}


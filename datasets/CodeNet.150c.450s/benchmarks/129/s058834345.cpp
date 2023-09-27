#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    vector<vector<int>> result(a + 1,vector<int>(b + 1,0));
    int temp=0;

    for (int c = 0; c < a; ++c) {
        temp = 0;
        for (int d = 0; d < b; ++d) {
            cin >> result.at(c).at(d);
            temp += result.at(c).at(d);
        }
        result.at(c).at(b) = temp;
    }

    for (int e = 0; e < b + 1; ++e) {
        temp = 0;
        for (int f = 0; f < a; ++f) {
            temp += result.at(f).at(e);
        }
        result.at(a).at(e) = temp;
    }

    for(auto re : result){
        for (int g = 0; g < re.size(); ++g) {
            cout << re.at(g);
            if(g != re.size() - 1){
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
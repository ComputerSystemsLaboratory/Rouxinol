#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> U(N);
    for (auto &a : U)
    {
        cin >> a;
    }
    int M;
    cin >> M;
    int flag = 0, auth;
    for (int i = 0; i < M; i++)
    {
        string s;
        cin >> s;
        auth = 0;
        for (int j = 0; j < N; j++)
        {
            if (U[j] == s)
            {
                if (flag == 0)
                {
                    cout << "Opened by " << s << endl;
                    flag = 1;
                }
                else
                {
                    cout << "Closed by " << s << endl;
                    flag = 0;
                }
                auth = 1;
                break;
            }
            if (auth)
                break;
        }
        if (auth == 0)
            cout << "Unknown " << s << endl;
    }
    return 0;
}


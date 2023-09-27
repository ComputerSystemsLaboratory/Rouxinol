# include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    string* S;
    S = new string[N];

    int C0 = 0, C1 = 0, C2 = 0, C3 = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (S[i] == "AC")
            C0++;
        else if (S[i] == "WA")
            C1++;
        else if (S[i] == "TLE")
            C2++;
        else if (S[i] == "RE")
            C3++;
    }

    cout << "AC x " << C0 << endl;
    cout << "WA x " << C1 << endl;
    cout << "TLE x " << C2 << endl;
    cout << "RE x " << C3 << endl;

    return 0;
}
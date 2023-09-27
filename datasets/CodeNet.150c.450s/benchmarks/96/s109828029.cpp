#include <iostream>

using namespace std;

int main()
{
    int num;
    const string kei[] = {".,!? ",
                          "abc",
                          "def",
                          "ghi",
                          "jkl",
                          "mno",
                          "pqrs",
                          "tuv",
                          "wxyz" };

    cin >> num;
    for (int i = 0; i < num; i++) {
        string inp;
        char bf = '0';
        int cnt = 0;

        cin >> inp;
        for (int i = 0; i < inp.size(); i++) {
            if (inp[i] != '0') {
                bf = inp[i];
                cnt++;
            }
            else if (inp[i] == '0' && bf != '0') {
                int ind = bf - '0' - 1;
                cnt--;
                cnt = cnt % kei[ind].size();

                cout << kei[ind][cnt];
                cnt = 0;
                bf = '0';
            }
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int num, max = 0;
    vector<int> cnt(101);

    while(cin >> num)
        cnt[num]++;

    for(int i=0; i<101; i++)
        if(max < cnt[i]) max=cnt[i];
    for(int i=0; i<101; i++)
        if(max == cnt[i])
            cout << i << endl;

    return 0;
}
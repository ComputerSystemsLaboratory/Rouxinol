#include <bits/stdc++.h>
using namespace std;
#define REP(i, s, n) for (int i = s; i < n; ++i)
#define rep(i, n) REP(i, 0, n)
#define SORT(c) sort((c).begin(), (c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
#define DEBUG false
// sort(a.begin(), a.end(), std::greater<int>());

/*
std::vector<std::string> split(const std::string &input, char delimiter)
{
    std::istringstream stream(input);

    std::string field;
    std::vector<std::string> result;
    while (std::getline(stream, field, delimiter))
    {
        result.push_back(field);
    }
    return result;
}
*/

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int a[n][6];
        int ans = 0;
        //input
        rep(i, n)
        {
            rep(j, 5)
            {
                cin >> a[i][j];
            }
            a[i][5] = 100;
        }
        //solve

        bool flag = true;
        while (true)
        {
            if (flag == false)
                break;

            flag = false;
            rep(i, n)
            {
                int count = 0;
                int num = 0;
                int begin = -1, end = -1;
                rep(j, 6)
                {
                    if (a[i][j] == a[i][j + 1] && a[i][j] != 0)
                    {
                        count++;
                        if (begin == -1)
                        {
                            count++;
                            begin = j;
                        }
                    }
                    else if (count >= 3)
                    {
                        //テヲツカツ暗」ツ??
                        flag = true;
                        if (DEBUG)
                            cout << i << begin << endl;
                        ans += count * a[i][begin];
                        rep(k, count)
                            a[i][begin + k] = 0;
                        break;
                    }
                    else
                    {
                        begin = -1;
                        count = 0;
                    }
                }
            }
            if (DEBUG)
            {
                cout << "before" << endl;
                rep(i, n)
                {
                    rep(j, 6)
                    {
                        cout << a[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << endl;
                cout << endl;
            }
            //テァツァツサテ・ツ仰?
            stack<int> move;

            rep(j, 5)
            {
                rep(i, n)
                {
                    if(a[i][j]!=0){
                        move.push(a[i][j]);
                        a[i][j]=0;
                    }
                }
                for(int i=n-1;i>=0;i--){
                    if(move.empty()==false){
                        a[i][j]=move.top();
                        move.pop();
                    }
                }
            }

            if (DEBUG)
            {
                rep(i, n)
                {
                    rep(j, 6)
                    {
                        cout << a[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << endl;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
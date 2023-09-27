#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool desc(int a, int b)
{
    return a > b;
}

int main()
{
    vector<int> vi;
    int a, b, c, d, e;
    int len;
    
    cin >> a >> b >> c >> d >> e;
    vi.push_back(a);
    vi.push_back(b);
    vi.push_back(c);
    vi.push_back(d);
    vi.push_back(e);
    
    sort(vi.begin(), vi.end());
    reverse(vi.begin(), vi.end());
    
    len = vi.size();
    for (int i = 0; i < len; i++){
        cout << vi[i];
        if (i != len - 1){
            cout << " ";
        }
    }
    cout << endl;
}
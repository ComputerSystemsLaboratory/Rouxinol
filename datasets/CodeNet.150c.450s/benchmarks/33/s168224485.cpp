#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

int solve(int x,int y ,int s){
    vector<int>kouhoX;
    vector<int>kouhoY;
    vector<int>ans;
    int index=0;
    for(int i =1;i<s;i++){
        for(int j =1;j<s;j++){
            if((int)(i*(100+x)/100)+(int)(j*(100+x)/100)==s){
                kouhoX.push_back(i);
                kouhoY.push_back(j);
                index++;
            }
        }
    }

    for(int i=0;i<index;i++){
        ans.push_back((int)(kouhoX[i]*(100+y)/100)+(int)(kouhoY[i]*(100+y)/100));
    }
    sort(ans.begin(),ans.end());
    return ans[ans.size()-1];
}

int main(int argc, char const *argv[]) {
    cin.tie(0);
    int x, y, s;
    vector<int> ans;
    while (1) {
        cin >> x >> y >> s;
        if (x == 0 && y == 0 && s == 0) break;
        ans.push_back(solve(x, y, s));
    }
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}


#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <functional>
using namespace std;


string IntToString(int number) {
    stringstream ss;
    ss << number;
    return ss.str();
}

int main(){
    int n, m;
    while(cin >> n >> m, n+m){
        vector<int> nums, numList;
        nums.push_back(n);
        numList.push_back(n);
        string s = IntToString(n);
        while(1){
            for(int i=0; i < s.size()-m; i++) s += "0";
            sort(s.begin(), s.end());
            int minNum = atoi(s.c_str());
            sort(s.begin(), s.end(), greater<int>());
            int maxNum = atoi(s.c_str());

            n = maxNum - minNum;
            if(binary_search(nums.begin(), nums.end(), n)){numList.push_back(n); break;}
            else {nums.push_back(n); numList.push_back(n);}
            s = IntToString(n);
            sort(nums.begin(), nums.end());
        }
        int firstPoint=0, secondPoint=0;
        bool isFirst = true;
        for(int i=0; i < numList.size(); i++){
            if(numList[i] == n && isFirst){firstPoint = i; isFirst = false;}
            else if(numList[i] == n && !isFirst){secondPoint = i; break;}
        }
        cout << firstPoint << " " << n << " " << secondPoint-firstPoint << endl;
    }
}
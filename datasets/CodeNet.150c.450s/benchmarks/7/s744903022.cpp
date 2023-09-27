#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
vector<int> height;
int a;
while(cin>>a){
height.push_back(a);
}
sort(height.begin(), height.end(), greater<int>());
for(int i = 0; i < 3; i++)
cout << height[i] << endl;
}
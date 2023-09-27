#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
  while (1){
    int n,p,sum=0;
    cin >> n;
    if (n==0) return 0;
    vector<int> points;
    for(int i=0;i<n;i++){
      cin >> p;
      points.push_back(p);
    }
    sort(points.begin(),points.end());
    points.erase(points.begin());
    points.pop_back();
    for (int i=0;i<points.size();i++){
      sum+=points[i];
    }
    cout << floor(sum/points.size()) << endl;
  }
}
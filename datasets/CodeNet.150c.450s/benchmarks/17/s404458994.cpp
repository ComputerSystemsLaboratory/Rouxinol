
 #include <string>
 #include <vector>
 #include <algorithm>
 #include <iostream>
 #include <cstdio>
 #include <cstdlib>
 #include <cmath>
 #include <queue>
 #include <map>
 #define INF 100000000
 
 using namespace std;
 typedef long long ll;
 
 int main(){
 vector<int> a;
 for(int i=0;i<5;i++){
 int tmp;
 cin>>tmp;
 a.push_back(tmp);
 }
 sort(a.begin(),a.end());
 for(int i=4;i>=0;i--){cout<<a[i];if(i!=0)cout<<" ";}
 cout<<endl;
 return 0;
 }
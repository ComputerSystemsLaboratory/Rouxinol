#include <vector>
#include <iostream>
using namespace std;
 
int main(){
    int w, n,a,b;
    char c;
    vector<int> ans;
    cin >> w >> n;


    for (int i = 0; i <= w; i++) {
       ans.push_back(i);
     }
    for (int i = 0; i < n; i++){
         cin >> a >> c >> b;

         swap(ans[a], ans[b]);
    }
 
    for (int i = 1; i <= w; i++)
    cout << ans[i] << endl;
}
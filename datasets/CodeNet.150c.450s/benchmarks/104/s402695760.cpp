#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int w , n , a , b;
    char ch;
    int ans[31] ;
    cin >> w;
    cin >> n;
    for(int i=1 ; i<=w ; i++){
        ans[i]=i;
    }
    for(int i=1 ; i<=n ; i++){
        cin >> a >> ch >> b;
        swap(ans[a] , ans[b]);
    }
    for(int i=1 ; i<=w ; i++){
    cout << ans[i] <<endl;
    }
	return 0;
}
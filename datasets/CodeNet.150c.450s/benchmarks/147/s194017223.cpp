#include<bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> ar(10005);

    for(int i = 1; i <= 110; i++){
        for(int j = 1; j <= 110; j++){
            for(int z = 1; z <= 110; z++){
                int calc = i*i + j*j + z*z + i*j + j*z + i*z;
                if(calc <= 10005) ar[calc - 1]++;
            }
        }
    }
    for (int x = 0; x < n; x++){
        cout << ar[x] << endl;
    }
    return 0;
}
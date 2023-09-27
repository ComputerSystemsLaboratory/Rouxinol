#include<bits/stdc++.h>

using namespace std;
//int arr[109][3];
int arr[10050];
int main() {
 /*   vector<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        string str;
        cin >> str;
        s.push_back(str);
        for (int j = 0; j < num; ++j) {
            int count = 0;
            string a;
            cin >> a;
            a.erase(a.begin() + 2);
            a.erase(a.begin() + 4);
            string q;
            for (int k = 0; k < 6; ++k)
                q += a[0];
            if (q == a) {
                arr[i][0]++;
            }else {
                for (int l = 0; l < 5; ++l)
                    if (a[l] > a[l + 1])
                        count++;
                if (count < 5)
                    arr[i][2]++;
                else
                    arr[i][1]++;

            }
        }
    }

*/
int n;
cin>>n;
    for (int i = 1; i <=100 ; ++i) {
        for (int j = 1; j <=100 ; ++j) {
            for (int k = 1; k <=100 ; ++k) {
                int x=pow(i,2)+pow(j,2)+pow(k,2)+i*j+k*j+i*k;
                if(x<10050)
                    arr[x]++;

            }
        }
    }
    for (int i =1; i <=n ; ++i) {
        cout<<arr[i]<<endl;
    }
}

 #include<iostream>
 #include<vector>
 using namespace std;
 int main(int arg, char* argv[]) {
    int n = 0;
    cin >> n;
    vector<int> f(45,0);
    f[0] = 1; f[1] = 1;
    for(int i = 2; i <= n; i++){
      f[i] = f[i-1] + f[i-2];
    }
   cout << f[n] << endl;
 }
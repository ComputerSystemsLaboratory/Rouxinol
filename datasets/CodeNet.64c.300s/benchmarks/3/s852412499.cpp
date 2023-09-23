#include<iostream>
using namespace std;

int main(){
int N;
cin >> N;
int a[N];
for(int i = 0; i < N; i++){
cin >> a[i];
}

int b[N];
for(int i = 0; i < N; i++){
b[i] = a[N-1-i];
}

for(int i = 0; i < N-1; i++){
cout << b[i] << " ";
}
cout << b[N-1] << endl;

}

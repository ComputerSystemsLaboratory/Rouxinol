#include<cstdio>
#include<iostream>
using namespace std;
int main(){
  unsigned int data[4 * 3 * 10] = {0};

  int n;
  cin >> n;
  for(int i = 0 ; i < n ; i++){
    int b, f, r, v;
    cin >> b >> f >> r >> v;

    b--;
    f--;
    r--;

    data[(b*30)+(f*10)+r] += v;
  }

  for (int i = 0; i < 4 * 3 * 10; i++) {
    if (i != 0 && i % 10 == 0) printf("\n");
    if (i != 0 && i % (10 * 3) == 0) printf("####################\n");
    cout << " "<< data[i];
  }
  printf("\n");

}
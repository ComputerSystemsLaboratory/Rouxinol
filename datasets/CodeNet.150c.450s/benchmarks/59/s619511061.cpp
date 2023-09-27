#include<cstdio>
#include<vector>
using namespace std;

void print(vector<int> & arr) {
printf("%d", arr[0]);
for(vector<int>::iterator itr=++(arr.begin()); itr!=arr.end(); ++itr){
printf(" %d", *itr);
}
printf("\n");
}

int main() {
vector<int> arr;
int n, tmp, i, j;

scanf("%d", &n);
for(i=0; i<n; ++i) {
scanf("%d", &tmp);
arr.push_back(tmp);
}

print(arr);

for(int i=1; i<n; ++i) {
tmp = arr[i];
for(j=i-1; j>=0 && arr[j]>tmp; --j) {
arr[j+1] = arr[j];
}
arr[j+1] = tmp;
print(arr);
}

return 0;
}
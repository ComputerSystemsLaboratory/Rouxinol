#include <iostream>
#include <stdlib.h>
#define max_baggageNum 100000
#define max_weight 10000

using namespace std;

bool search(int* a, int* last, int* target, int sum)
{
    if (sum == *target) {
	return true;
    }
    if (a == last) {
	return false;
    }

    bool res = search(a + 1, last, target, sum) || search(a + 1, last, target, sum + *a);
    return res;
}
int main()
{
    int n = 0;
    int q = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
	cin >> a[i];
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
	int tmp = 0;
	cin >> tmp;
	if (search(a, &a[n], &tmp, 0)) {
		cout<<"yes"<<endl;
	}
	else {
		cout<<"no"<<endl;
	}
    }

    return 0;
}
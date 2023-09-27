#include <iostream>
#include <stdlib.h>
#define max_baggageNum 100000
#define max_weight 10000

using namespace std;
int calc(int* a, int* mid, int* baggage, int* track)
{
    int num = 0;
    int tmp = 0;
    //for (int i = 0; i < *baggage; i++) {
    //	tmp += a[i];
    //	if (tmp > *mid) {
    //	    num++;
    //	    tmp = 0;
    //	}
    //}
    for (int i = 0; i < *track; i++) {
	tmp = 0;
	while (a[num] + tmp <= *mid) {
	    tmp += a[num];
	    num++;
	    if (num == *baggage)
		return num;
	}
    }
    return num;
}
void solve(int* a, int* baggage, int* track)
{
    int left = 0;
    int right = max_baggageNum * max_weight;
    int mid = 0;
    int v = 0;
    while (right - left > 1) {
	mid = left + (right - left) / 2;
	v = calc(a, &mid, baggage, track);
	if (v >= *baggage) {
	    right = mid;
	}
	else {
	    left = mid;
	}
    }
    cout << right << endl;
}

int main()
{
    int baggage = 0;
    int track = 0;
    cin >> baggage;
    cin >> track;
    int a[baggage];
    for (int i = 0; i < baggage; i++) {
	cin >> a[i];
    }
    solve(a, &baggage, &track);
    return 0;
}
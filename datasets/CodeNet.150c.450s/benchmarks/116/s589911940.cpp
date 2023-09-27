#include <iostream>
#include <vector>
using namespace std;


int main(){
    while (1){
	vector<long long> inp;
	long n, k, input;
	cin >> n >> k;
	if (!(n || k)) break;

	for (long long i = 0; i < n; i++){
	    cin >> input;
	    inp.push_back(input);
	}
	
	int s, sum = 0;
	for (int i = 0; i < k; i++) sum += inp[i];
	s = sum;
	for (int i = 0; k < inp.size(); i++, k++){
	    s -= inp[i];
	    s += inp[k];
	    if (sum < s) sum = s;
	}
	cout << sum << endl;
    }
}
#include<iostream>
using namespace std;
int n, w[100009],w_copy[100009], k, p, n_copy;
bool used[100009];
void insertionSort(int*, int, int);
void shellSort(int*, int);
bool check(int);
bool binarySearch(int);

int main() {
	cin >> n >> k;
	n_copy = n;
	int sum = 0, max = 0;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		sum += w[i];
		if (max < w[i]) max = w[i];
	}

	//shellSort(w, n);

	for (int i = 0; i < n; i++) {
		//cerr << w[i] << " ";
		w_copy[i] = w[i];
	}
	
	if (sum / k > max) {
		if(sum % k == 0) p = sum / k;
		else p = sum / k + 1;
	}
	else p = max;
	
	

	//if (check(10)) ////cerr << "10 is ok" << endl;
	//else ////cerr << "10 is NG" <<  " n: " << n << endl;
	
	
	while (1) {
		//cerr << "start: " << p << endl;
		if (check(p)) {
			cout << p << endl;
			break;
		}
		p++;
	}
	
	return 0;
	
}

void insertionSort(int A[], int n, int g) {
	for (int i = g; i <= n - 1; i++) {
		int v = A[i];
		int j = i - g;
		while (j >= 0 && A[j] > v)
		{
			A[j + g] = A[j];
			j = j - g;
		}
		A[j + g] = v;
	}
}

void shellSort(int A[], int n) {
	int G[1000];
	int j = 0;
	for (int i = 1; i <= n / 9 +1; i = i * 3 + 1) {
		G[j++] = i;
	}
	int m = j - 1;
	for (int i = m; i >= 0; i--) {
		////cerr << "G" << i << ": " << G[i] << endl;
		insertionSort(A, n, G[i]);
	}
}

bool check(int p) {
	n = n_copy;
	for (int i = 0; i < n; i++) {
		w[i] = w_copy[i];
	}

	int j = 0;

	for (int i = 0; i < k; i++) {
		//cerr << "Track number: " << i + 1 << endl;
		int empty = p;
		while (empty > 0) {
			if (j == n) {
				return true;
				//cerr << "Check OK: " << p << endl;
			}
			if (w[j] <= empty) {
				//cerr << j << " was loaded "<<  endl;
				empty -= w[j++];
				//cerr << "empty: " << empty << endl;

			}
			else {
				//cerr << j << " was not loaded" << endl;
				//cerr << "empty: " << empty << endl;
				break;
			}
		}

	}
	if (j == n) {
		//cerr << "Check OK: " << p << endl;
		return true;
		
	}

	//cerr << "Check NG: " << p << endl;
	return false;

	/*
	for (int i = 0; i < k; i++) {
		////cerr << "Track number: " << i + 1 << endl;
		int key = p;
		int empty = p;
		while (1) {
			if (empty == 0) break;
			if (key == 0) break;
			if (n == 0) {
				////cerr << "Check OK: " << p << endl;
				return true;
			}
			if (binarySearch(key)) {
				empty -= key;
				if(empty < key) key = empty;
			}
			else key--;
		}
	}
	if (n > 0) {
		////cerr << "Check NG: " << p  << endl;
		return false;
	}
	else return true;
	*/
}

bool binarySearch(int key) {
	////cerr << "binarySearch key: " << key << endl;
	int left = 0;
	int right = n;
	while (left < right) {
		int mid = (left + right) / 2;
		if (w[mid] == key){
			////cerr << "Search : Successful" << endl;
			for (int i = mid; i < n; i++) {
				if(i != n-1) w[i] = w[i + 1];
				else w[i] = 0;
			}
			n--;
			return true;
		}
		else if (key < w[mid]) right = mid;
		else left = mid + 1;
	}
	////cerr << "Search : False" << endl;
	return false;
}
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct card {
	char al;
	char value;
};

void selection_sort(int n,vector<card> &vec);
void bubble_sort(int n, vector<card> &vec);
void isStable(vector<card> vec1,vector<card> vec2,int n);
void display(vector<card> vec, int n);


int main() {
	int n;
	cin >> n;
	vector<card> a1(n);
	vector<card> a2(n);
	for (int i = 0; i < n; i++) cin >> a1[i].al >> a1[i].value;
	for (int i = 0; i < n; i++) a2[i] = a1[i];

	bubble_sort(n, a1);
	selection_sort(n, a2);

	display(a1,n);
	cout << "Stable" << "\n";
	display(a2, n);
	isStable(a1, a2, n);
	return 0;
}

void bubble_sort(int n, vector<card> &vec) {
	bool flag = false;
	for(int i=0;i<n;i++){
		for (int j = n-1; j >=i+1 ; j--) {
			if (vec[j].value < vec[j - 1].value) {
				swap(vec[j], vec[j - 1]);
			}
		}
	}
}
void selection_sort(int n,vector<card> &vec) {
	int minj;
	for (int i = 0; i < n; i++) {
		minj = i;
		for (int j = i; j < n; j++) {
			if (vec[j].value < vec[minj].value) {
				minj = j;
			}
		}
		if (i != minj) {
			swap(vec[i], vec[minj]);
		}
	}
}

void isStable(vector<card> vec1,vector<card> vec2,int n) {
	bool flag = false;
	for (int i = 0; i < n; i++) {
		if (vec1[i].al != vec2[i].al) flag=true;
	}

	if (flag) cout<<"Not stable\n";
	else cout<<"Stable\n";
}

void display(vector<card> vec, int n) {
	for (int i = 0; i < n; i++) {
		if (i) cout << " ";
		cout << vec[i].al << vec[i].value;
	}
	cout << "\n";
}

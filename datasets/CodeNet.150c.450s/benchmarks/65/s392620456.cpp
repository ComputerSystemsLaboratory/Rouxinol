#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

struct ch {
	char num,eng;
};
void bubblesort(struct ch str[], int n);
void selectionsort(struct ch str[], int n);

int main()
{
	int n,i,j;
	ch str1[100],str2[100];
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> str1[i].eng >> str1[i].num;
	}
	for (i = 0; i < n; i++) str2[i] = str1[i];

	bubblesort(str1,n);
	selectionsort(str2, n);

	for (i = 0; i < n; i++) {
		cout << str1[i].eng << str1[i].num;

		if (i != n - 1) {
			cout << " ";
		}
		else {
			cout << endl;
			break;
		}
	}
	cout << "Stable" << endl;
	j = 1;
	for (i = 0; i < n; i++) {
		cout << str2[i].eng << str2[i].num;
		if (j == 1 && str2[i].eng == str1[i].eng && str1[i].num==str2[i].num) {
			j = 1;
		}else {
			j = 0;
		}
		if (i != n - 1) {
			cout << " ";
		}
		else {
			cout << endl;
			break;
		}
	}
	if (j == 1) {
		cout << "Stable" << endl;
	}
	else {
		cout << "Not stable" << endl;
	}
}
void bubblesort(struct ch str[], int n) {
	int i,j,flag=1;
	struct ch temp;
	while (flag) {
		flag = 0;
		for (j = n - 1; j > 0; j--) {
			if (str[j].num < str[j - 1].num) {
				swap(str[j], str[j - 1]);
				flag = 1;
			}
		}
	}
}
void selectionsort(struct ch str[], int n) {
	struct ch temp;
	int i, j,min;
	for (i = 0; i < n; i++) {
		min = i;
		for (j = i; j < n; j++) {
			if (str[j].num < str[min].num) {
				min = j;
			}
		}
		swap(str[i], str[min]);
	}
}
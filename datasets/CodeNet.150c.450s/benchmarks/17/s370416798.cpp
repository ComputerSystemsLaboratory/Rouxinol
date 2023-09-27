#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort(int date[], int n)
{
	int k = n-1;
	while(k>=0){
		int i,j;
		for (i=1, j=-1; i <=k; i++)
			if(date[i-1] < date[i]) {
				j = i-1;
				swap(&date[i], &date[j]);
			}
		k = j;
	}
}

int main(void)
{
	int n[5];
	while(cin >> n[0]){
		for(int i = 1; i < 5; i++){
			cin >> n[i];
		}
		sort(n, 5);
		for(int i=0; i<5; i++){
			cout << n[i];
			if(i!=4) cout << " "; 
		}
		cout << endl;
	}
	return(0);
}
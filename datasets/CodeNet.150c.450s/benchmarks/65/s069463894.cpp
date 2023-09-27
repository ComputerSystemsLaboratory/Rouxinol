#include<iostream>
#include<vector>

using namespace std;

struct Trump
{
	char mark;
	int num;
};

vector<struct Trump> BubbleSort(vector<struct Trump> A,int n)
{
	int flag = 1;
	
	while(flag == 1){
		flag = 0;
		for(int i=n-1;i>0;i--){
			if(A[i].num < A[i-1].num){
				struct Trump change = A[i];
				A[i] = A[i-1];
				A[i-1] = change;
				flag = 1;
			}
		}
	}
	return A;
}

vector<struct Trump> SelectSort(vector<struct Trump> A,int n)
{
	int flag;
	for(int i=0;i<n-1;i++){
		int minj = i;
		flag = 0;
		for(int j=i+1;j<n;j++){
			if(A[j].num < A[minj].num){
				minj = j;
				flag = 1;
			}
		}
		if(flag == 1){
			swap(A[i],A[minj]);
		}
	}
	return A;
}

void Output(vector<struct Trump> A,int n)
{
	for(int i=0;i<n;i++){
		if(i == n-1)cout << A[i].mark << A[i].num <<endl;
		else{
			cout << A[i].mark << A[i].num << " " << flush;
		} 
	}
}

bool Judge_Stable(vector<struct Trump> A,vector<struct Trump> B,int n)
{
	for(int i=0;i<n;i++){
		if(A[i].mark != B[i].mark)return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	
	vector<struct Trump> card;
	card.resize(n);

	for(int i=0;i<n;i++){
		cin >> card[i].mark >> card[i].num;
	}
	
	vector<struct Trump>card_bubble = BubbleSort(card,n);
	Output(card_bubble,n);
	cout << "Stable" << endl;
	
	vector<struct Trump>card_select = SelectSort(card,n);
	Output(card_select,n);
	if(Judge_Stable(card_bubble,card_select,n))cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	
	return 0;
}
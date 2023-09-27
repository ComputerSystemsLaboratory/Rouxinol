#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
using namespace std;

//template <class T>
void swap(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap2(string& a, string& b)
{
	string temp;
	temp = a;
	a = b;
	b = temp;
}

void select_sort(int n, string*array, int*num){
	int min;
	for(int i=0;i<n;i++)
	{
		min = i;
		for(int j=i;j<n;j++)
		{
			if(num[j]<num[min])
			{
				min = j;
			}			
		}
		if(num[i] != num[min])
		{
			swap(num[i], num[min]);
			swap2(array[i], array[min]);
		}
	}	
}


void bubble_sort(int n, string*array1, int*num1){
	for(int i = n-1; i>=0; i--)
	{
		for(int j = 0; j<=i-1; j++)
		{
			if(num1[j]>num1[j+1]) 
			{
				swap(num1[j], num1[j+1]);
				swap2(array1[j], array1[j+1]);
			}
		}
	}
}

void Ifstable(int n, string*pre, int*num, string*array)
{
	for(int i = 0; i<n; i++){
		for(int j = i+1; j<n; j++){
			if(num[i] == num[j]){
				if(pre[num[j]] == "") pre[num[j]].push_back(array[i][0]);
				pre[num[j]].push_back(array[j][0]);
			}
		}
	}
}

template <class T>
int Toint(T input){
	stringstream ss;
	ss<<input;
	int num;
	ss>>num;
	return num;
}

void printout(int n, string* input, string *pre, string *post)
{
	for(int i=0; i<n; i++)
	{
		if(i!=0) cout<<" ";
		cout<<input[i];
	}
	cout<<endl;
	int a;
	for(a=1; a<=9; a++)
	{
		if(pre[a].compare(post[a]) != 0)
		break;
	}
	if(a==10) cout<<"Stable"<<endl;
	else cout<<"Not stable"<<endl;
//	cout<<post[a]<<' ';
//	}
//	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	string pre[10], post[10], post1[10];
	string *array = new string[n];
	string *array1 = new string[n];
	int *num = new int[n];
	int *num1 = new int[n];
	for(int i=0;i<n;i++) 
	{
		string input;
		cin>>input;
		array1[i] = array[i] = input;
		num1[i] = num[i] = Toint(array[i][1]);
	}	
	Ifstable(n, pre, num, array);	
//-------------------------------------------
	bubble_sort(n, array1, num1);
	Ifstable(n, post, num1, array1);			
	printout(n, array1, pre, post);
//-------------------------------------------	
	select_sort(n, array, num);	
	Ifstable(n, post1, num, array);	
	printout(n, array, pre, post1);



//	delete []array;
	return 0;
}
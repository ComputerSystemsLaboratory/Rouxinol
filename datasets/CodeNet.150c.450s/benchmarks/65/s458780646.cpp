#include<iostream>
#include<string>
using namespace std;
void hoandoi(int &c,int &b)
{
	int t=c;c=b;b=t;
}
void hoandoistring(string &c,string &b)
{
	string t=c;c=b;b=t;
}
void SelectionSort(string a[],int n,bool tr,int b[]){
	int mini;
	for(int i=0;i<n-1;i++)
	{
		mini=i;
		for(int j=i+1;j<n;j++){
			if(a[j][1]<a[mini][1]){
				mini=j;
			}
		}
		
			hoandoistring(a[i],a[mini]);
			hoandoi(b[i],b[mini]);

	}
	for(int i=0;i<n;i++)
		{
                cout <<a[i];
		if(i<n-1){
			cout <<" ";
			if(a[i][1]==a[i+1][1] && b[i]>b[i+1])
				tr=false;
		}
	}
	if(tr)
		cout << endl << "Stable";
	else
		cout << endl << "Not stable";
}
void bubbleSort(string a[],int n,bool tr,int b[]){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(a[j][1]<a[j-1][1]){
				hoandoistring(a[j],a[j-1]);
				hoandoi(b[j],b[j-1]);
			}

		}

	}

	for(int i=0;i<n;i++)
		{cout <<a[i];
		if(i<n-1){
			
			cout<<" ";
			if(a[i][1]==a[i+1][1]&&b[i]>b[i+1])
				tr=false;
		}
	}
	if(tr)
		cout << endl << "Stable";
	else
		cout << endl << "Not stable";

}

int main(){
	//int n;
	bool tr=true;
	string *a,*c,x;
	int n,*b,*d;
	cin >>n;
	a=new string[n];
	c=new string[n];
	b=new int[n];
	d=new int[n];
	for(int i=0;i<n;i++){
		cin >>x;
		a[i]=x;
		b[i]=i;
		d[i]=i;
		c[i]=x;
	}

	bubbleSort(a,n,tr,b);
	tr=true;
	cout <<endl;
	SelectionSort(c,n,tr,d);
	cout << endl;

	return 0;
}
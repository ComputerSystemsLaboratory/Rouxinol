#include <iostream>
#include <vector>
#define swap(type,x,y) do{type t=x;x=y;y=t;}while(0)
using namespace std;

struct Card{char suit,value;};

void BubbleSort(vector<Card> &c,int n){
  	int t;
	for(int i=0;i<n;i++){
    	for (int j=n-1;j>i;j--){
        	if (c.at(j).value<c.at(j-1).value){
          		swap(Card,c.at(j),c.at(j-1));
            }
        }  
    }
}

void SelectionSort(vector<Card> &c,int n){
      for(int i=0;i<n;i++){
      	int minj=i;
        for(int j=i;j<n;j++){
       		if(c.at(j).value<c.at(minj).value){
            	minj=j;
            }
        }
        swap(Card,c.at(i),c.at(minj));
       }
}
void print(vector<Card> c,int n){
	for(int i=0;i<n;i++){
    	cout<<c.at(i).suit<<c.at(i).value;
      	if(i!=n-1){cout<<" ";}
      	else{cout<<endl;}
    }
}

int main(){
	int n;cin>>n;
  	vector<Card> c1(n);
  	vector<Card> c2(n);
  	char ch;
  for(int i=0;i<n;i++){
  	cin>>c1.at(i).suit>>c1.at(i).value;
  }
  c2=c1;
  
  BubbleSort(c1,n);
  print(c1,n);
  cout<<"Stable"<<endl;
  
  SelectionSort(c2,n);
  print(c2,n);
  for(int i=0;i<n;i++){
  	if(c1.at(i).suit!=c2.at(i).suit){cout<<"Not stable"<<endl;return 0;}
  }
  cout<<"Stable"<<endl;
}

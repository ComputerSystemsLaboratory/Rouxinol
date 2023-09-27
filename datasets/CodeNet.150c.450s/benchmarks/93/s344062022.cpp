
/*#include<iostream>
#include<algorithm>
using namespace std;
int partition(int A[],int p,int r){
     
    int x=A[r-1];
    int i=p-1;
 
 
    for(int j=p;j<r;j++){
        if(A[j]<=x){
            i++;
        if(i>=0&&j>=0)
        swap(A[i],A[j]);    
        }
        //swap(A[i],A[r-1]);
    }
 
    //swap(A[i],A[r-1]);
    return i;
 
}
 
 
 
int main(){
    int tmp[1000000];
    int n;
    cin>>n;
 
    for(int i=0;i<n;i++){
        cin>>tmp[i];
    }
 
    int q;
 
    q=partition(tmp,0,n);
     
    for(int i=0;i<n;i++){
         
        if(i==q){
            cout<<"["<<tmp[i]<<"]";
        }
         
        else cout<<tmp[i];
 
        if(i==n-1)cout<<endl;
        else cout<<" ";
    }
 
    return 0;
}*/

#include<iostream>
#include<algorithm>
using namespace std;
const int MAX_N=100000;
	struct card{
		char mark;
		int num;
		int index;
	};
	card table[MAX_N];

	int partitation(int q,int r){
		int x=table[r].num;
		int i=q-1;
		for(int j=q;j<r;j++){
			if(table[j].num<=x){
				i++;
				swap(table[i],table[j]);
			}
		}
		swap(table[i+1],table[r]);
		return i+1;
	}

	void quicksort(int a,int b){
		if(a<b){
		int tmp;
		tmp=partitation(a,b);
		quicksort(a,tmp-1);
		quicksort(tmp+1,b);
		}
	}
	int main(){
 		int n;
		cin>>n;
 		for(int i=0;i<n;i++){
			cin>>table[i].mark>>table[i].num;
			table[i].index=i;
		}
		quicksort(0,n-1); 
 		bool is=true;
		for(int i=1;i<n;i++){
			if(table[i-1].num==table[i].num&&table[i-1].index>table[i].index)is=false;
		}
		if(is)cout<<"Stable\n";
		else cout<<"Not stable\n";
		for(int i=0;i<n;i++){
			cout<<table[i].mark<<" "<<table[i].num<<endl;
		}
		return 0;
	}
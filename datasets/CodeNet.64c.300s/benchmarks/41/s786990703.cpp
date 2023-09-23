 #include<iostream>
 #include<algorithm>
 #include<cstring>
 
using namespace std;

const int maxn=1e6+10;
int A[maxn];

int H;
 
 int left(int i)
 {
 	return 2*i;
 }
 
 int right(int i)
 {
 	return 2*i+1;
 }
 
 void maxHeapify(int i)
 {
 	int Max;
 	int l=left(i);
 	int r=right(i);
 	if(l<=H&&A[l]>A[i]){
 		Max=l;
	 }else{
	 	Max=i;
	 }
	 if(r<=H&&A[r]>A[Max]){
	 	Max=r;
	 }
	 if(Max!=i){
	 	swap(A[Max],A[i]);
	 	maxHeapify(Max);
	 }
 }
 
 void print()
 {
 	for(int i=1;i<=H;i++){
 		cout<<' '<<A[i];
	 }
	 cout<<endl;
 }
 
 int main()
 {
 	memset(A,0,sizeof(A));
 	cin>>H;
 	for(int i=1;i<=H;i++)cin>>A[i];
 	for(int i=H/2;i>=1;i--)maxHeapify(i);//以H/2为起点，1为终点 
 	print();
 	return 0;
 }

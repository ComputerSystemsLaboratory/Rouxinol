#include<iostream>
#include<climits>
using namespace std;
int max_arr( int arr[], int size )
{
	int max=INT_MIN;
	for( int i=0; i<size; i++ ){
		max=( arr[i] > max )? arr[i] : max;
	}
	return max;
}
int min_arr( int arr[], int size )
{
	int min=INT_MAX;
	for( int i=0; i<size; i++ ){
		min=( arr[i] < min )? arr[i] : min;
	}
	return min;
}
int sum_arr( int arr[], int size) 
{
	int sum=0;
	for( int i=0; i<size; i++ ){
		sum+= arr[i];
	}
	return sum;
}


int canCarry( int carrylim, int t_num, int w[], int w_num ){

	int w_i=0;
	for( int t_i=0; t_i<t_num; t_i++ ){
			int wsum=0;
		for( ; w_i<w_num; w_i++ ){
			if( wsum + w[w_i] <= carrylim ){
				wsum+= w[w_i];
			}else{
				break;
			}
		}

		if( w_i==w_num ){
			return w_num;
		}
	}
	return w_i;
}
		
int solve(int w[], int w_num, int t_num ){
	int carrylim_left= max_arr(w, w_num)-1, carrylim_right=sum_arr(w, w_num), carrylim_middle;


	while( carrylim_right > carrylim_left+1 ){
		carrylim_middle= (carrylim_left + carrylim_right) /2;
		int cancarry= canCarry( carrylim_middle, t_num, w, w_num );

//		cout<<"??????????????§????????? : "<<carrylim_middle<<endl;
//		cout<<"??°?????????????????° : "<<cancarry<<endl;
//		cout<<endl;


		if( cancarry >= w_num ){
			carrylim_right= carrylim_middle;
		}else if( cancarry < w_num ){
			carrylim_left=  carrylim_middle;
		}
	}
	return carrylim_right;
}

		



int main()
{
	int w_num, t_num;
	cin>>w_num>>t_num;
	int *w=new int[w_num];
	for( int i=0; i<w_num; i++ ) cin>>w[i];

	cout<<solve(w, w_num, t_num)<<endl;
}
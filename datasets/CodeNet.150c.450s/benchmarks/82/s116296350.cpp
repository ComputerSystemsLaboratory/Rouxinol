#include <stdio.h>


int right_side_table[ 6 ][ 6 ] =
{
	//front=
	// 1    2    3    4    5    6
	{ -1 ,  3 ,  5 ,  2 ,  4 , -1 },	//upper=1
	{  4 , -1 ,  1 ,  6 , -1 ,  3 },	//2
	{  2 ,  6 , -1 , -1 ,  1 ,  5 },	//3
	{  5 ,  1 , -1 , -1 ,  6 ,  2 },	//4
	{  3 , -1 ,  6 ,  1 , -1 ,  4 },	//5
	{ -1 ,  4 ,  2 ,  5 ,  3 , -1 },	//6
};

int search_index( const int* number_table , int number )
{
	for( int i = 0 ; i < 6 ; i++ )
	{
		if( number_table[ i ] == number )
		{
			return i;
		}
	}
	return 0;
}

int main( int argc , char** argv )
{

    int number_table[ 6 ];
    scanf( "%d %d %d %d %d %d" ,
        &number_table[ 0 ] ,
        &number_table[ 1 ] ,
        &number_table[ 2 ] ,
        &number_table[ 3 ] ,
        &number_table[ 4 ] ,
        &number_table[ 5 ] );
 
	int question_count;
	scanf( "%d" , &question_count );
	for( int i = 0 ; i < question_count ; i++ )
	{
		int upper;
		int front;
		scanf( "%d %d" , &upper , &front );

		int index_upper = search_index( number_table , upper );
		int index_front = search_index( number_table , front );
		int index_right = right_side_table[ index_upper ][ index_front ] - 1;

		printf( "%d\n" , number_table[ index_right ] );
	}
	return 0;
}
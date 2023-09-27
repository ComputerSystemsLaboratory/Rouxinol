#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

//????\??????????list??¢??°???????£????prev key next??¨???????????¢????§????

struct list{

    int key;

    list *next,*prev ;

};

//list????????????

list *nil;

void initialize(){

    nil = ( list * )malloc( sizeof(list) );

    nil -> next = nil;

    nil -> prev = nil;

}

//?????\

void insert( int key ){

    list *x = (list *)malloc( sizeof(list) );

    x-> key = key;

    //nil?????´??????x????????\

    x -> next = nil -> next;

    nil -> next -> prev = x;

    nil -> next = x ;

    x -> prev = nil;

}

//????´??????¢?´¢

list* search( int key ){

    list *cursor = nil -> next;

    while( cursor != nil && cursor -> key != key ){

        cursor = cursor -> next; 

    }

    return cursor;

}

//delete??¢??°?????????

void deletelist( list *t ){

    if( t == nil ) return;

    t -> prev -> next = t -> next;
    t -> next -> prev = t -> prev;
    free(t);

}

//??????????¶????

void deleteFirst(){

    deletelist( nil -> next );

}

//??????????¶????

void deleteLast(){

    deletelist( nil -> prev );

}

//??????????¶????

void deletekey( int key ){

    deletelist( search(key) );

}

//????????????

void printlist(){

    list *cursor = nil -> next;

    int i = 0;

    while(1){

        if( cursor == nil ) break;

        if( i++ > 0 ) printf(" ");

        printf( "%d" , cursor -> key );

        cursor = cursor->next;

    }

    printf("\n");

}

//??¬???

int main(){

    int n, i, key;
    int size;
    char command[20];

    scanf("%d", &n);

    initialize();

    for( i = 0 ; i < n ; i++ )  {

        scanf("%s %d", command, &key );

        if( command[0] == 'i' ) insert(key);

        else if( command[0] == 'd' ){

            if( strlen(command) > 6 ){

                if( command[6] =='F' ) deleteFirst();

                else deleteLast();

            } else deletekey(key);

        }

    }

    printlist();

    return 0;

}
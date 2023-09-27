// 双方向連結リスト
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>

// リスト要素の構造体
typedef struct l_e
{
    int key;
    // 前の要素へのポインタ
    l_e *previous;
    // 後ろの要素へのポインタ
    l_e *next;
}list_element;

// リストの情報の構造体
typedef struct l_i
{
	list_element *head;   // 先頭の要素
	list_element *tail;   // 最後尾の要素
}list_info;

list_info st_list_info;

void create_list(void);
int insert_list(int key);
int delete_list(int key);
int delete_first(void);
int delete_last(void);

int main(void)
{

    char str[20];
    int n, x, i;

    // リストの初期化
    create_list();

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%s", &str[0]);

        // 各命令毎の処理
        if( strcmp(str, "insert") == 0 )
        {
            scanf("%d", &x);
            insert_list(x);
        }
        else if( strcmp(str, "delete") == 0 )
        {
            scanf("%d", &x);
            delete_list(x);
        }
        else if( strcmp(str, "deleteFirst") == 0 )
        {
            delete_first();
        }
        else if( strcmp(str, "deleteLast") == 0 )
        {
            delete_last();
        }

        // ---------- デバッグ用 ----------
        /*
        i = 0;

            // 結果の表示
            list_element *p = st_list_info.head;

            while( p != NULL )
            {
                if( i )
                {
                    printf(" ");
                }

                printf("%d", p->key);

                p = p->next;

                i++;
            }

            printf("\n");
		*/
        // ---------- デバッグ用 ----------
    }

    i = 0;

    // 結果の表示
    list_element *p = st_list_info.head;

    while( p != NULL )
    {
        if( i )
        {
            printf(" ");
        }

        printf("%d", p->key);

        p = p->next;

        i++;
    }

    printf("\n");

    return 0;

}

// リストを作成する関数
void create_list(void)
{
    st_list_info.head = NULL;
    st_list_info.tail = NULL;

    return;
}

// リストの先頭へ要素を追加する関数
int insert_list(int key)
{

    list_element *element = new list_element;

    element->key = key;
    element->previous = NULL;
    element->next = NULL;

    if( st_list_info.head == NULL && st_list_info.tail == NULL )
    {
        st_list_info.head = element;
        st_list_info.tail = element;
    }
    else
    {
    	// 元の先頭要素の前方のポインタの設定
        st_list_info.head->previous = element;
        // 追加した要素のポインタの設定
        element->previous = NULL;
        element->next = st_list_info.head;
        // 先頭要素のポインタの更新
        st_list_info.head = element;
    }

    return 0;
}

// 指定されたキーを持つ最初の要素をリストから削除する関数
int delete_list(int key)
{
    int ret = -1;
    list_element *p = st_list_info.head;

    while( p != NULL )
    {
        if( p->key == key )
        {
            if( p == st_list_info.head )
            {
                // 先頭要素を削除する時
                delete_first();

            }
            else if( p == st_list_info.tail )
            {
                // 末尾要素を削除する時
                delete_last();
            }
            else
            {
                // ポインタを繋ぎかえる
                p->previous->next = p->next;
                p->next->previous = p->previous;
                // 要素を削除する
                delete(p);
            }

            ret = 0;
            // 処理終了
            break;
        }

        // ポインタの更新
        p = p->next;
    }

    return ret;
}

// リストの先頭要素を削除する関数
int delete_first(void)
{
    list_element *p = st_list_info.head;

    if( p->next != NULL )
    {
        // 先頭要素の前方向のポインタを設定
        p->next->previous = NULL;
        // 先頭要素へのポインタを再設定
        st_list_info.head = p->next;
    }
    else
    {
        // 要素が一つしかない時
        create_list();
    }

    // 要素を削除
    delete(p);

    return 0;
}

// リストの末尾要素を削除する関数
int delete_last(void)
{
    list_element *p = st_list_info.tail;

    if( p->previous != NULL )
    {
        // 末尾要素の後方向のポインタを設定
        p->previous->next = NULL;
        // 末尾要素へのポインタを再設定
        st_list_info.tail = p->previous;
    }
    else
    {
        // 要素が一つしかない時
        create_list();
    }

    // 要素を削除
    delete(p);

    return 0;
}


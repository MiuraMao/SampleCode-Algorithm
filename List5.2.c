#include <stdio.h>
/*連結リストからの削除*/

/*ポインタxで指されたセルの直接のセルを削除する*/
struct CELL{
    struct CELL *next;
};

int main(void){
struct CELL *p;
struct CELL *x;

if ( x->next == NULL)
    fatal_error("最後の次にはセルはないので削除できない");
p = x->next;
x->next = p->next;

//pで指されたセルの内容を取り出す
//～
free(p);

/*リストの先頭のセルを削除する*/
struct CELL *header;

if (header == NULL)
    fatal_error("リストが空なので削除できない");
p = header;
header = p->next;

//pで指されたセルの内容を取り出す
//～
free(p);
}
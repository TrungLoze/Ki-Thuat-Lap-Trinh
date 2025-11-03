#include <stdio.h>
#include <stdlib.h>

typedef struct __ListE{
    int data;
    struct __ListE* next;
}ListE;

typedef ListE* LinkedList;

void llInit(LinkedList* pl){
    *pl = NULL;
}

void llInsertHead(LinkedList* pl, int v){
    ListE* e=(ListE*)malloc(sizeof(ListE));
    e->data=v;
    e->next=*pl;
    *pl=e;
}

int main(){
    LinkedList l;

    llInit(&l);
    int v;
    printf("Nhap v: ");
    scanf("%d",&v);
    llInsertHead(&l,v);

    return 0;
}
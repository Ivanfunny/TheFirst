#include<stdio.h>
#include<stdlib.h>
#include"lib/headinsert.h"

int LT(KeyType a,KeyType b){
    if(a<b) return 1;
    else return 0;
}

void InsertSort(SqList *L){
    int i,j;
    for(i=2;i<=L->length;i++)
      if(LT(L->r[i].key,L->r[i-1].key)){
	L->r[0]=L->r[i];
	L->r[i]=L->r[i-1];
	for(j=i-1;LT(L->r[0].key,L->r[j].key);j--)
	  L->r[j+1]=L->r[j];
	L->r[j+1]=L->r[0];
    }
}

int main(){
    SqList L;
    int i;
    	scanf("%d",&L.length);
    for(i=1;i<=L.length;i++){
        scanf("%d",&L.r[i].key);
    }
    InsertSort(&L);
    for(i=1;i<=L.length;i++){
        printf("%d  ",L.r[i].key);
    }
    return 0;
}









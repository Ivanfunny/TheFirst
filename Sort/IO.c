#include<stdio.h>
#include<stdlib.h>
#include"headinsert.h"
void input(SqList *L){
	int i;
	scanf("%d",&L->length);
	for(i=1;i<=L->length;i++){
		scanf("%d",&L->r[i].key);
	}
}
void output(SqList *L){
	int i;
	for(i=1;i<=L->length;i++){
		printf("%d  ",L->r[i].key);
	}
	printf("\n");
}

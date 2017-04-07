#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"lib/headinsert.h"

int dlta[10]={0};

void input(SqList *L){
        int i;
        scanf("%d",&L->length);
        for(i=1;i<=L->length;i++){
                scanf("%d",&L->r[i].key);
        }
	return;
}
void output(SqList *L){
        int i;
        for(i=1;i<=L->length;i++){
                printf("%d  ",L->r[i].key);
        }
        printf("\n");
	return;
}


int LT(int a,int b){
    if(a<b) return 1;
    else return 0;
}

void ShellInsert(SqList *L,int dk){
    int i,j;
    for(i=dk+1;i<=L->length;++i)
      if(LT(L->r[i].key,L->r[i-dk].key)){
	L->r[0]=L->r[i];
	for(j=i-dk;j>0&&LT(L->r[0].key,L->r[j].key);j-=dk)
	  L->r[j+dk]=L->r[j];
	L->r[j+dk]=L->r[0];
      }
    return;
}
void ShellSort(SqList *L,int dlta[],int t){
    int k;
    for(k=0;k<t;k++)
      ShellInsert(L,dlta[k]);
    return;
}

void Init_dk(int dlta[],int t){
    int i,j;
    i=0,j=0;
    while(pow(2,t-i)>=(t-1)){
      i++;
    }
    while(1){
      dlta[j]=pow(2,t-i)+1;
      if(dlta[j]==1) break;
      j++,i++;
    }
    return;
}

int main(){
    SqList L;
    extern dlta[10];
    input(&L);
    Init_dk(dlta,L.length);
    ShellSort(&L,dlta,L.length);
    output(&L);
    return 0;	
}







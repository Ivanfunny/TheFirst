#ifndef _HEADINSERT_H
#define _HEADINSERT_H
#endif

#define MAXSIZE 20

typedef int KeyType;

typedef struct RedType{
	KeyType key;
}RedType;

typedef struct SqList{
	RedType r[MAXSIZE+1];
	int length;
}SqList;


#include<stdio.h>
#include<stdlib.h>
#define MAX 100
typedef struct {
	int array[MAX];
	int top;
} Stack;
Stack initStack(Stack *s){
	s->top = -1;
}
int isEmpty(Stack *s){
	return s->top == -1;
}
int isFull(Stack *s){
	return s->top == MAX - 1;
}
void push(Stack *s,int value){
	if(isFull(s)){
		printf("ngan xep da day.\n");
		return;
	}
	s->array[++(s->top)] = value;
}
void peek(Stack *s){
	if(isEmpty(s)){
		printf("ngan xep rong.\n");
		return;
	}
	printf("phan tu tren cung : %d",s->array[s->top]);
}
int main(){
	Stack s;
	initStack(&s);
	int n,value;
	printf("nhap sl phan tu:");
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		printf("nhap phan tu thu %d:", i + 1);
		scanf("%d",&value);
		push(&s,value);
	}
	peek(&s);
	return 0;
}


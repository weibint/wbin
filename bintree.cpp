#include <stdio.h>
#include <iostream>
#include <cstring>
#include <malloc.h>

using namespace std;

//Sequential storage
#define LENGTH 100
#define SIZE 100
typedef char datatype;
typedef struct node{
	datatype data;
	int lchild, rchild;
	int parent;
}Node;

Node tree[LENGTH];
int length;
int root;
//end;

//LINK storage
typedef char datatype;

typedef struct BinNode{
	datatype data;
	struct BinNode* lchild;
	struct BinNode* rchild;
}BinNode;

typedef BinNode* bintree; //pointer to point one node

///end;


//recursion
void preorder(bintree t){
	if(t){
		printf("%c ", t->data);
		preorder(t->lchild);
		preorder(t->rchild);
	}
}

//no-recursion
typedef struct seqstack{
	bintree data[SIZE];
	int tag[SIZE];
	int top;
}seqstack;

void push(seqstack* s, bintree t){

	if(s->top == SIZE)
	{
		printf("the stack is full\n");
	}
	else
	{
		s->top++;
		s->data[s->top]=t;
	}
}

bintree pop(seqstack* s){
	if(s->top == -1)
	{
		return NULL;
	}
	else
	{
		s->top--;
		return s->data[s->top+1];
	}
}

//pre-
void preorder_dev(bintree t){
	seqstack s;
	s.top = -1;
	if(!t)
	{

		printf("the tree is empty\n");
	}
	else
	{
		while(t || s.top != -1)
		{
			while(t)
			{
				printf("%c ", t->data);
				push(&s, t);
				t = t->lchild;
			}
			t = pop(&s);
			t = t->rchild;
		}
	}
}

//mid
void midorder(bintree t){
	seqstack s;
	s.top = -1;
	if(!t)
	{
		printf("the tree is empty!\n");
	}
	else
	{
		while(t || s.top != -1)
		{
			push(&s, t);
			t = t->lchild;
		}
		t = pop(&s);
		printf("%c ", t->data);
		t = t->rchild;
	}
}

//post
void postorder_dev(bintree t){
	seqstack s;
	s.top = -1;
	if(!t)
	{
		printf("the tree is empty!\n");
	}
	else
	{
		while(t || s.top != -1)
		{
			while(t)
			{
				push(&s, t);
				s.tag[s.top] = 0;
				t = t->lchild;
			}
			if(s.tag[s.top] == 0)
			{
				t = s.data[s.top];
				s.tag[s.top] = 1;
				t = t->rchild;
			}
			else
			{
				while(s.tag[s.top] == 1)
				{
					t = pop(&s);
					printf("%c ", t->data);
				}
				t = NULL;
			}
		}
	}
}

//create tree
void createtree(bintree *t){
	datatype c;
	cin>>c;
	if(c == '#')
	{
		*t = NULL;
	}
	else
	{
		printf("before malloc!");
		*t = (bintree)malloc(sizeof(BinNode));
		(*t)->data = c;
		createtree(&(*t)->lchild);
		createtree(&(*t)->rchild);
		printf("after malloc!");
	}
}

int main()
{
	bintree* t;
	createtree(t);
	free(t);
	return 0;

}

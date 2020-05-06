#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
}*front = NULL ,*rear = NULL;
typedef struct node node;

void enqueue(int n);
void dequeue();
void display();

void enqueue(int val)
{
	node *newnode;
	newnode = (node*)malloc(sizeof(node));
	newnode->data = val;
	newnode->next = NULL;
	
	if(front == NULL)
	{
		front = rear = newnode;
	}
	else
	{
		rear->next= newnode;
		rear = newnode;
	}
}

void dequeue()
{
	if(front ==NULL)
	{
		cout<<"empty";
	}
	else
	{
		node *tmp = front;
		front = front ->next;
		cout<<"Deleted "<<tmp->data;
	}
}

void display()
{
	if(front == NULL)
	{
		cout<<"empty";
	}
	else
	{
		node *tmp =front;
		while(tmp->next!=NULL)
		{
			cout<<tmp->data<<" ";
			tmp = tmp->next;
		}
		cout<<tmp->data<<" ";
	}
}
int main()
{
	int ch,val;
	while(1)
	{
		cout<<"\n1-- enqueue \n2 -- dequeue \n3 -- display\n ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			cout<<"\n";
			cout<<"enter value to insert : ";
			cin>>val;
			enqueue(val);
			break;
			
			case 2:
			dequeue();
			break;
			
			case 3 :
			display();
			break;
			
			default :
			printf("input error");
		}
	}
	return 0;
}

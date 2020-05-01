#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *head;

void insert_front();
void insert_tail();
void delete_front();
void delete_back();
void display();

void insert_front()
{
	struct node *ptr;
	int item;
	ptr = (struct node *) malloc(sizeof(struct node *));
	if(ptr == NULL)
	{
		cout<<"FULL";
	}
	else
	{
		cout<<"\n";
		cout<<"Enter Item to insert : ";
		cin>>item;
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		cout<<"\nItem inserted";
	}
}

void insert_tail()
{
	struct node *ptr,*temp;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr == NULL)
	{
		cout<<"FULL";
	}
	else
	{
		cout<<"\n";
		cout<<"Enter Item to insert : ";
		cin>>item;
		ptr->data=item;
		if(head==NULL)
		{
			ptr->next=NULL;
			head=ptr;
			cout<<"\nItem inserted";
		}
		else
		{
			temp=head;
			while(temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
			cout<<"\nItem inserted";
		}
	}
}

void delete_front()
{
	struct node *ptr;
	if(head==NULL)
	{
		cout<<"List Empty \n ";
	}
	else
	{
		ptr = head;
		head=ptr->next;
		free(ptr);
		cout<<"\nItem Deleted\n";
	}
}

void delete_back()
{
	struct node *ptr,*ptr1;
	if(head==NULL)
	{
		cout<<"\nList Empty";
	}
	
	else if(head -> next == NULL)  
    {  
        head = NULL;  
        free(head);  
        cout<<"\nOnly item of the list deleted ...\n";  
    }  
	
	else
	{
		ptr = head;
		ptr1 = head->next;
		while(ptr1->next !=NULL)
		{
			ptr = ptr1;
			ptr1 = ptr1->next;
		}
		ptr->next = NULL;
		free(ptr1);
		cout<<"\nItem Deleted\n";
	}
}

void display()
{
	struct node *ptr;
	ptr = head;
	cout<<"\n";
	cout<<"Items : ";
	if(head!=NULL)
	{
		while(ptr != NULL)
		{	
		cout<<ptr->data<<" ";
		ptr = ptr->next;		
		}
	}
	else
	{
		cout<<"EMPTY";
	}
	//cout<<endl;
}

int main()
{
	int opt=0;
	while(opt!=6)
	{
		cout<<"\n";
		cout<<"1 -- INSERT_FRONT \n 2 -- INSERT_TAIL \n 3 -- DELETE_FRONT \n 4 -- DELETE_BACK \n 5 -- DISPLAY \n 6 -- EXIT \n";
		cout<<"\n";
		cout<<"Enter choice : ";
		cin>>opt;
		switch(opt)
		{
			case 1 :
			insert_front();
			break;
			
			case 2 :
			insert_tail();
			break;
			
			case 3 :
			delete_front();
			break;
			
			case 4 :
			delete_back();
			break;
			
			case 5 :
			display();
			break;
			
			case 6 :
			exit(0);
			break;
			
			default :
			cout<<"Enter valid choice !! ";
		}
	}
	
	return 0;
}

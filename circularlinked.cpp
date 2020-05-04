#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *head;

void insert_begin()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        cout<<"FULL";  
    }  
    else   
    {  
        cout<<"\n";
		cout<<"Enter Item to insert : ";  
        cin>>item;  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
            temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        cout<<"\nItem inserted";  
    }  
              
}

void insert_last()  
{  
    struct node *ptr,*temp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        cout<<"FULL";  
    }  
    else  
    {  
        cout<<"\n";
		cout<<"Enter Item to insert : ";  
        cin>>item;  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
          
        cout<<"\nItem inserted";  
    }  
  
}

void begin_delete()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
		cout<<"List Empty \n ";	    
	}  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        cout<<"\nItem Deleted\n";  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        cout<<"\nItem Deleted\n";  
  
    }  
} 

void last_delete()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        cout<<"\nList Empty";  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        cout<<"\nItem Deleted\n";   
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        cout<<"\nItem Deleted\n";   
  
    }  
}

void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nnothing to print");  
    }     
    else  
    {  
        printf("\n printing values ... \n");  
          
        while(ptr -> next != head)  
        {  
          
            cout<<ptr->data<<" ";  
            ptr = ptr -> next;  
        }  
        cout<<ptr->data<<" ";  
    }  
              
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
			insert_begin();
			break;
			
			case 2 :
			insert_last();
			break;
			
			case 3 :
			begin_delete();
			break;
			
			case 4 :
			last_delete();
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

	         

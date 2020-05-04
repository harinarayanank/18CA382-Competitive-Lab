#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
	struct node *prev;  
	struct node *next;  
	int data;
};
struct node *head;  
void insertion_beginning();  
void insertion_last();  
void deletion_beginning();  
void deletion_last();   
void display();

void insertion_beginning()  
{  
    struct node *ptr;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
       cout<<"\nOVERFLOW";  
    }  
    else  
    {  
      cout<<"\nEnter Item value : ";  
      cin>>item;  
          
    if(head==NULL)  
    {  
           ptr->next = NULL;  
           ptr->prev=NULL;  
           ptr->data=item;  
           head=ptr;  
    }  
    else   
     {    
		 ptr->data=item;  
         ptr->prev=NULL;  
         ptr->next = head;  
         head->prev=ptr;  
         head=ptr;  
       }  
  }  
         
}

void insertion_last()  
    {  
       struct node *ptr,*temp;  
       int item;  
       ptr = (struct node *) malloc(sizeof(struct node));  
       if(ptr == NULL)  
       {  
           cout<<"\nOVERFLOW";  
       }  
       else  
       {  
           cout<<"\nEnter value : ";  
           cin>>item;  
            ptr->data=item;  
           if(head == NULL)  
           {  
               ptr->next = NULL;  
               ptr->prev = NULL;  
               head = ptr;  
           }  
           else  
           {  
              temp = head;  
              while(temp->next!=NULL)  
              {  
                  temp = temp->next;  
              }  
              temp->next = ptr;  
              ptr ->prev=temp;  
              ptr->next = NULL;  
              }  
                 
           }  
        }  
    
    void deletion_beginning()  
    {  
        struct node *ptr;  
        if(head == NULL)  
        {  
            cout<<"\n UNDERFLOW";  
        }  
        else if(head->next == NULL)  
        {  
            head = NULL;   
            free(head);  
            cout<<"\nnode deleted\n";  
        }  
        else  
        {  
            ptr = head;  
            head = head -> next;  
            head -> prev = NULL;  
            free(ptr);  
            cout<<"\nnode deleted\n";  
        }  
      
    }  
    void deletion_last()  
    {  
	struct node *ptr,*ptr1;
        if(head == NULL)  
        {  
            cout<<"\n UNDERFLOW";  
        }  
        else if(head->next == NULL)  
        {  
            head = NULL;   
            free(head);   
            cout<<"\nnode deleted\n";  
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
        cout<<"\n printing values...\n";  
        ptr = head;  
        while(ptr != NULL)  
        {  
            cout<<ptr->data<<" ";  
            ptr=ptr->next;  
        }
        cout<<endl;  
    }
    
   int main ()  
{  
   int choice;  
    while(1)  
    { 
       cout<<"\n1.Insert in begining\n2.Insert at last\n3.Delete from Beginning\n4.Delete from last\n5.Show\n6.Exit\n";  
        cout<<"\nEnter your choice?\n";  
         cin>>choice;  
            switch(choice)  
            {  
                case 1:  
                insertion_beginning();  
                break;  
                case 2:  
                insertion_last();  
                break;  
                case 3:  
                deletion_beginning();  
                break;  
                case 4:  
                deletion_last();  
                break; 
                case 5:  
                display();  
                break;  
                case 6:  
                exit(0);  
                break;  
                default:  
                cout<<"Please enter valid choice..";  
            }  
        }
        return 0;  
    }     
  

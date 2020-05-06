#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* top = NULL; 

void push(int val) 
{
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node)); 
   newnode->data = val; 
   newnode->next = top; 
   top = newnode; 
}
void pop() 
{
   if(top==NULL)
      cout<<"Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}

void display() 
{
   struct Node* ptr;
   if(top==NULL)
      cout<<"EMPTY";
   else {   
      ptr = top; 
      cout<<"Stack : ";
      while (ptr != NULL) { 
         cout<< ptr->data <<" "; 
         ptr = ptr->next; 
      } 
   }
   cout<<endl;
}

int main() {
   int ch,val;
	while(1)
	{
		cout<<"1 -- Push"<<endl;
		cout<<"2 -- Pop"<<endl;
		cout<<"3 -- Display"<<endl;
		cin>>ch;
      switch(ch) 
      {
         case 1:
            
         cout<<"Enter value to be pushed:"<<endl;
         cin>>val;
         push(val);
         break;
       
         case 2:
         pop();
         break;
         
         case 3:
         display();
         break;
         
         default: 
         cout<<"Invalid Choice"<<endl;
         
      }
   }
      return 0;
} 

#include <iostream>
using namespace std;
struct Node
{
int el;
struct Node* next;
};
class List()
{
private:
Node* data;
Node* tail;
public:
List();
operator[](List* l,int i);
};
List::List()
{
Node *head==NULL;
Node *t=(Node*)malloc(sizeof(Node))
Node->el=0; 
t->next=(*head); 
(*head)=t;
}
~List()
{
delete []List();
}
operator[](List* l,int i);
{
int k=0;
while(k<i&&head)
{
head=head->next;
k++
}
return head;
}
void push_i(Node *head,int i,int data)
{
int k=0;
Node *t=NULL;
while(k<i&&head->next)
{
head=head->next;
k++
}
t=(Node*)malloc(sizeof(Node));
t->el=data;
if(head->next)
{
t->next=head->next;
}
else
t->next=NULL;
head->next=t;
}
void pop_i(Node **head,int data)
{
int k=0;
Node *t=NULL;
while(k<i-1&&head->next)
{
head=head->next;
k++
}
t=(Node*)malloc(sizeof(Node)-1);
if(head->next)
{
t->next=head->next;
}
else
t->next=NULL;
head->next=t;
}

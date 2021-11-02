// implementation of insert at begining of circular linked list 
#include<bits/stdc++.h>
using namespace std;
struct CLL 
{
    int data;
    CLL *next;
    CLL(int x)
    {
        data=x;
        next=NULL;
    }
};
// circular linked list adding one node at front 
CLL* insertAtBegining(CLL *head,int data)
{   struct CLL* newNode=(struct CLL*)malloc(sizeof(struct CLL));
    newNode->data=data;
    if(head==NULL)
    newNode->next=newNode;
    else
    {
        CLL* p=head;
        while(p->next!=head)
        {
            p=p->next;
        }
        
        p->next=newNode;
        newNode->next=head;
        
       
    }
    return(newNode);
    
}
void printingLL(CLL *s )
{   
    if(s==NULL)
     cout<<"Emty";
    cout<<s->data; 
    CLL *p=s->next;
    while(p!=s)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{   
    CLL *head=new CLL(30);
    head->next=new CLL(40);
    head->next->next=new CLL(50);
    head->next->next->next=new CLL(60);
    head->next->next->next->next=new CLL(80);
    head->next->next->next->next->next=new CLL(90);
    head->next->next->next->next->next->next=head;
    insertAtBegining(head,3003);
    printingLL(head);
    return 0;
}
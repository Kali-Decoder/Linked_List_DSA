// deleteLast Node In Dll

#include<bits/stdc++.h>
using namespace std;
struct DLL
{
    int data;
    DLL* next;
    DLL* prev;
    DLL (int x){
         data=x;
        next=NULL;
        prev=NULL;
    }
};

struct DLL* deletelastNode(DLL* head )
{
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {
        free (head);
        return NULL;
    }
    if(head->next->next==NULL)
    {
        DLL *p=head->next;
        free(p);
        return(head);
        
    }
    DLL* P=head;
    while(P->next!=NULL)
    {
        P=P->next;
    }
    P->prev->next=NULL;
    free(P);
    
    return(head);
}
int main()
{   
    DLL* head=new DLL(10);
   
    DLL* l1=new DLL(20);
    DLL* l2=new DLL(40);
    

    head->next=l1;
    l1->prev=head;
    l1->next=l2;
    l2->prev=l1;
    
   
    DLL* p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
        
    }


    return 0;
}
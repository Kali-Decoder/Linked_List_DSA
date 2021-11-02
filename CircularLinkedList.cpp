// implementation of circular linked list 
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
    printingLL(head);
    return 0;
}
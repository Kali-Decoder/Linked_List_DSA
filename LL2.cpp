// Traversal in linked list 
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
void traversalLinkedList(struct Node* start)
{
    struct Node* p=start;
    if(p==NULL)
    cout<<"Empty Linked List ";

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{   
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(20);
    head->next->next->next=new Node(20);
    head->next->next->next->next=new Node(20);
    traversalLinkedList(head);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int x)
    {
        data=x;
        prev=next=NULL;
    }
};

Node* insertAtEnd(Node* head,int key)
{   

    Node* newNode= new Node(key);
    if(head==NULL)
        return newNode;
    Node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=newNode;
    newNode->prev=p;

    return head;
}
int main()
{   

    Node* head=new Node(10);
   
    Node* l1=new Node(20);
    Node* l2=new Node(40);
    

    head->next=l1;
    l1->prev=head;
    l1->next=l2;
    l2->prev=l1;
    int key;
    cin>>key;
    Node* temp=insertAtEnd(head,key);
    while(temp!=NULL)
    {
       cout<<temp->data<<" ";
       temp=temp->next;

    }
    return 0;
}
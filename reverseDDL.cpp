#include<iostream>
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
Node* reverse(Node* root)
{
    if(root==NULL)
    return root;

    Node* p=root;
    while(p->next!=NULL)
    {   
        
        p=p->next;
    }

    return p;
    
}
Node* reverse2(Node* root)
{
    if(root==NULL || root->next==NULL)
    return root;

    Node* prev;Node*curr=root;
    while(curr!=NULL)
    {   

        // Swapping references 
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;

        curr=curr->prev;
    }

    return prev->prev;

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
    Node* p=reverse2(head);
    while(p!=nullptr)
    {
        cout<<p->data<<" ";
        p=p->next;
    }

    return 0;
}
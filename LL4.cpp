// recursive function 
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node * next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printLinkedListRecursive(Node *s )
{
    if(s==NULL)
    return ;
    cout<<s->data<<" ";
    printLinkedListRecursive(s->next);
}

int main()
{   
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(20);
    head->next->next->next=new Node(20);
    head->next->next->next->next=new Node(20);
   printLinkedListRecursive(head);
    return 0;
}
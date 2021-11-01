// insert At Begining 
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node * next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Node* insertEnd(Node* start,int key)
{   
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=key;
        struct Node* p=start;
        if(p==NULL)
        {   
            // p=newNode;
            return(newNode);
        }
        while(p!=NULL)
        {
            p=p->next;
        }
        p->next=newNode;
        newNode->next=NULL;
        start=p;
        return(start);
    
}
int main()
{   
    Node* head=NULL;
    head=insertEnd(head,10);
    head=insertEnd(head,30);
    head=insertEnd(head,40);
    head=insertEnd(head,50);
    
    // traversalLinkedList(head);
    return 0;
}
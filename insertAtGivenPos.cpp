// insert At at given position 
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
struct Node* insertAtGivePos(Node* start,int key,int pos)
{   
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=key;
        struct Node* p=start;
        if(p==NULL)
        {   
            // p=newNode;
            return(newNode);
        }
        for(int i=0;i<=pos-2 && p!=NULL;i++)
        p=p->next;
        if(p==NULL)
        return start;
        newNode->next=p->next;
        p->next=newNode;
        return(start);
    
}
int main()
{   
    Node* head=NULL;
    head=insertAtGivePos(head,10,1);
    head=insertAtGivePos(head,30,2);
    head=insertAtGivePos(head,40,3);
    head=insertAtGivePos(head,50,4);
    
    
    return 0;
}
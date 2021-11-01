// delete last node
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
struct Node* deleteLastNode(Node* start)
{        struct Node* p=start;
        struct Node*q;
        if(start==NULL)
        return NULL;
       if(start->next==NULL)
            {
                start=NULL;
                return(start);
            }
        while(p!=NULL)
        {   
            q=p;
            p=p->next;
        }
        q->next=NULL;
        free(p);
        return(start);
    
}
int main()
{   
    struct Node* head= new Node(10);
    struct Node* list1= new Node(30);
    struct Node* list2= new Node(40);
    struct Node* list3= new Node(50);

    head->next=list1;
    list1->next=list2;
    list2->next=list3;
    head=deleteLastNode(head);
    
    
    return 0;
}
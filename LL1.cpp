// implementation of linked list 

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

int main()
{   
    struct Node* head= new Node(10);
    struct Node* list1= new Node(10);
    struct Node* list2= new Node(10);
    struct Node* list3= new Node(10);

    head->next=list1;
    list1->next=list2;
    list2->next=list3;
    return 0;
}









// struct node{
//     int data;
//     struct node* next;
// };
// void insertAtBeginning(struct node** head , int data)
// {   struct node* newNode= (struct node*)malloc(sizeof(struct node));
//     newNode->data=data;
//     newNode->next=(*head);
//     (*head)=newNode;
// }
// void afterNode(struct node* prevNode, int data)
// {
//     struct node* newNode= (struct node*)malloc(sizeof(struct node));
//     newNode->data=data;
//     newNode->next=prevNode->next;
    
// }
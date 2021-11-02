// search Item In LInked List by recursive method

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
int recursiveSolution(Node* start, int key)
{        
        
        if(start==NULL)
        return -1;
        if(start->data==key)
        return 1;

        else{
            int res=recursiveSolution(start->next,key);
            if(res==-1) return -1;
            else
            {
                return (res+1);
            }
        }
        
    
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
    int key;
    cout<<"Enter key "<<endl;
    cin>>key;
    cout<<recursiveSolution(head,key);
    
    
    return 0;
}
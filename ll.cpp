#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* head=NULL;

void insertB(int x)//insert at beginning
{
    Node* temp=new Node();
    temp->data=x;
    temp->link=NULL;
    temp->link=head;
    head=temp;
}
void insertE(int x)//insert at end
{
    Node* temp=new Node();
    temp->data=x;
    temp->link=NULL;
    Node* temp1=head;
    while(temp1->link!=NULL)
    {
        temp1=temp1->link;
    }
    temp1->link=temp;
}

void insert(int x,int n)//insert at any position 
{
    
    Node* temp1=head;
    for(int i=0;i<n-2;i++)
    {
        temp1=temp1->link;
    }
    Node* temp=new Node();
    temp->data=x;
    temp->link=NULL;
    temp->link=temp1->link;
    temp1->link=temp;
}
void printB()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main()
{
    
    insertB(5);
    insertB(4);
    insertB(3);
    insertB(2);
    insertB(1);
    insertE(6);
   // insert(11,2);
    insert(21,4);
    // insert(15,6);
    // insert(47,1);
    printB();

    return 0;
}

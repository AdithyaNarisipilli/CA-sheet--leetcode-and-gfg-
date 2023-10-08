//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/
void insertAttail(Node* &head,Node* &tail,int ele){
    Node* temp=new Node(ele);
    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }
    tail->next=temp;
    tail=temp;
    
}
Node* findIntersection(Node* head1, Node* head2)
{
    Node* curr1=head1;
    Node* curr2=head2;
    Node* newhead=NULL;
    Node* newtail=NULL;
    while(curr1!=NULL&&curr2!=NULL){
        if(curr1->data==curr2->data){
            insertAttail(newhead,newtail,curr1->data);
            curr1=curr1->next;
            curr2=curr2->next;
        }
        else if(curr1->data>curr2->data){
            curr2=curr2->next;
        }
        else{
            curr1=curr1->next;
        }
    }
    return newhead;
}
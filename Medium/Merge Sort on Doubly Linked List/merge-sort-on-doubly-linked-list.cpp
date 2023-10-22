//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next, *prev;
	
	Node (int x){
	    data = x;
	    next = NULL;
	    prev = NULL;
	}
};


// } Driver Code Ends
/*
Structure of the node of the list is as
struct Node
{
	int data;
	struct Node *next, *prev;
	Node (int x){
	    data = x;
	    next = prev = NULL;
	}
}; */


//Function to sort the given doubly linked list using Merge Sort.
Node* findMid(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node* merge(Node* left,Node* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }
    Node* ptr=new Node(-1);
    Node* ans;
    ans=ptr;
    while(left!=NULL&&right!=NULL){
        if((left->data)>right->data){
            ans->next=right;
            right->prev=ans;
            ans=ans->next;
            right=right->next;
        }
        else{
            ans->next=left;
            left->prev=ans;
            ans=ans->next;
            left=left->next;
        }
    }
    while(left!=NULL){
        ans->next=left;
        left->prev=ans;
        ans=ans->next;
        left=left->next;
    }
    while(right!=NULL){
        ans->next=right;
        right->prev=ans;
        ans=ans->next;
        right=right->next;
    }
    ptr=ptr->next;
    ptr->prev=NULL;
    return ptr;
}
struct Node *sortDoubly(struct Node *head)
{
	//if no or only one element then return
	if(head==NULL||head->next==NULL){
	    return head;
	}
	//break the linkedlist
	Node* middle=findMid(head);
    Node* right=middle->next;
    middle->next=NULL;
    right->prev=NULL;
    Node* left=head;
    left=sortDoubly(left);
    right=sortDoubly(right);
    Node* mrgPtr=merge(left,right);
    return mrgPtr;
}


//{ Driver Code Starts.

void insert(struct Node **head, int data)
{
	struct Node *temp = new Node (data);
	if (!(*head))
		(*head) = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		(*head) = temp;
	}
}

void print(struct Node *head)
{
	struct Node *temp = head;
	while (head)
	{
		cout<<head->data<<' ';
		temp = head;
		head = head->next;
	}
	cout<<endl;
	while (temp)
	{
		cout<<temp->data<<' ';
		temp = temp->prev;
	}
	cout<<endl;
}

// Utility function to swap two integers
void swap(int *A, int *B)
{
	int temp = *A;
	*A = *B;
	*B = temp;
}


// Driver program
int main(void)
{
    long test;
    cin>>test;
    while(test--)
    {
        int n, tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            insert(&head, tmp);
        }
        head = sortDoubly(head);
        print(head);
    }
	return 0;
}

// } Driver Code Ends
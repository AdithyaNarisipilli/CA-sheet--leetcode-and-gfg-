//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
    bool isprime(int n){
        if(n<=1){
            return 0;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return 0;
            }
        }
        return 1;
    }
    Node *primeList(Node *head){
        Node* curr=head;
        while(curr!=NULL){
            if(isprime(curr->val)){
                curr=curr->next;
            }
            else{
                int temp1=curr->val-1;
                int temp2=curr->val+1;
                while(!isprime(temp1)&&!isprime(temp2)){
                    temp1--;
                    temp2++;
                }
                if(isprime(temp1)&&isprime(temp2)){
                    curr->val=min(temp1,temp2);
                }
                else if(isprime(temp2)){
                    curr->val=temp2;
                }
                else{
                    curr->val=temp1;
                }
            }
        }
        return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
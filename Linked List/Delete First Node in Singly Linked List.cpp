#include<iostream>
using namespace std;


struct Node{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

Node *insertEnd( Node *head, int x){
	Node *temp= new Node(x);
	if(head==NULL)
	return temp;
	Node *curr=head;
	while(curr->next!= NULL){
		curr=curr->next;	
	}
	curr->next=temp;
	return head;
}

 Node *delHead(Node *head){
 	if(head==NULL){
 		return NULL;
		 }
 	else{
 		Node *temp=head->next;
 		delete (head);
 		return temp;
	 }	
	 
 }


void printList( Node *head){
	Node *curr= head;
	while(curr!=NULL){
		cout<<curr->data<<" ";
		curr=curr->next;
	}
}


int main(){
	
	Node *head=NULL;
	head=insertEnd(head,30);
	head=insertEnd(head,20);
	head=insertEnd(head,10);
	head=insertEnd(head,45);
	
    head=delHead(head);
	printList(head);
	cout<<endl;
	cout<<"our current head data part is "<<head->data;
	return 0;
	
	
}

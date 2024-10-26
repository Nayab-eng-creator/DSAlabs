#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
Node* head=NULL;
void addAtB(int data){
	Node* newNode= new Node(data);
	if(head==NULL){
		head= newNode;
		newNode->next=head;
	}
	Node* temp=head;
	while(temp->next!=head){
		temp = temp->next;
	}
	newNode->next= head;
	head = newNode;
	temp->next= head;
}
void addAtE(int data){
		Node* newNode= new Node(data);
	if(head==NULL){
		head= newNode;
		newNode->next= head;
		return;
	}
	Node*temp = head;
	while(temp->next!=head){
	temp = temp->next;
	}
	temp->next=newNode;
	newNode->next= head;
}
void addAtM(int data,int p){
	if(p==0){
	addAtB(data);
	return;	
	}
		Node* newNode= new Node(data);
		Node* temp = head;
		for(int i=0;i<p-1;i++){
			temp = temp->next;
		if(temp->next==head){
			cout<<"position out of bounds";
			return;
		}}
		newNode->next= temp->next;
		temp->next = newNode;
		
}
void display(){
	if(head==NULL){
		cout<<"Empty";
		return;
	}
		Node* temp=head;
	do{
		cout<<temp->data<<"->";
		temp= temp->next;
	}
	while(temp!=head);
		cout<<"HEAD"<<endl;
	
}



void deletaAtB(){
	Node* temp = head;
	if(head==NULL){
		cout<<"Empty";
		return;
	}

	while(temp->next!=head){
		temp=temp->next;
		if(head->next==head){
		delete head;
		head=NULL;
		return;
	}
	else{
	Node* todelete= head;
	head= head->next;
	temp->next= head;
	delete todelete;
	
}}

void deletATE()

	if(head==NULL){
		cout<<"Empty"<<endl;
		return;
	}
		if(head->next==head){
		delete head;
		head=NULL;
		return;
	}
	Node* temp=head;
	Node* prv= NULL;
	while(temp->next!=head){
		prv = temp;
		temp=temp->next;
	}
	
//	if(temp==head){
//		delete head;
	//	head=NULL;
	//}
	//else{
		prv->next=head;
		delete temp;
		
	//}
}
void deletdATM(int p){
	if(p==0){
	deletaAtB();
	return;	
	}
	Node* temp=head;
	for(int i=0;i<p-1;i++){
		temp=temp->next;
		if(temp->next==head){
			cout<<"Position out of bounds";
			return;
		}
	}
	Node* del= temp->next;
	temp->next= del->next;
	delete del;
}
int main()
{

addAtB(20);
addAtB(10);
diplay();

	return 0;
}

#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(){
			cout<<"Enter a data for New Node: ";
			cin>>data;
			this->data=data;
			this->next=NULL;
		}
};

class LinkList{
	Node* head=NULL;
	Node* temp1;
	Node* temp2;
	public:
		void InsertE(){
			Node* newNode=new Node();
			if(head==NULL){
				head=newNode;	
			}else{
				temp1=head;
				while(temp1->next!=NULL){
					temp1=temp1->next;
				}
				temp1->next=newNode;
			}
		}
		

		void DeleteE(){
			if(head==NULL){
				cout<<"Link List is Empty."<<endl;
			}else{
				temp1=head;
				if(temp1->next==NULL){
					cout<<"Deleted Item: "<<temp1->data<<endl;
					head=NULL;
				}else{
					while(temp1->next->next!=NULL){
						temp1=temp1->next;
					}
					cout<<"Deleted Item: "<<temp1->next->data<<endl;
					temp1->next=NULL;
				}	
			}
		}

		
		void Search(){
			if(head==NULL){
				cout<<"Link List is Empty."<<endl;
			}else{
				int element,c,counter;
				cout<<"Enter a element to search: ";
				cin>>element;
				temp1=head;
				c=counter=0;
				do{
					c++;
					if(temp1->data==element){
						counter++;
						cout<<element<<" found at "<<c<<"th position."<<endl;
					}
					temp1=temp1->next;
				}while(temp1!=NULL);	
				if(counter==0){
					cout<<element<<" is not in LinkList."<<endl;
				}
			}
		}
		
		void Traverse(){
			if(head==NULL){
				cout<<"Link List is Empty."<<endl;
			}else{
				temp1=head;
				do{
					cout<<temp1->data<<" , ";
					temp1=temp1->next;
				}while(temp1!=NULL);
				cout<<endl;
			}
		}
};

int main(){
	LinkList obj;
	int choice;
	do{
		do{
			cout<<"Enter choice: "<<endl;
			cout<<"1. Insert "<<endl;
			cout<<"2. Delete "<<endl;
			cout<<"3. Traverse"<<endl;
			cout<<"4. Search"<<endl;
			cout<<"5. Exit"<<endl;
			cin>>choice;
		}while(choice>5 || choice<0);
		switch(choice){
			case 1:
				obj.InsertE();
				break;

			case 2:
				obj.DeleteE();
				break;

			case 3:
				obj.Traverse();
				break;

			case 4:
				obj.Search();
				break;

			default:
				break;
		}
	}while(choice!=5);

	return 0;
}

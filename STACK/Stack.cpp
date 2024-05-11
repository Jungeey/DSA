#include<iostream>
using namespace std;
#define max 5
class Stack{
	public:
		int top=-1,A[max];
		void MakeEmpty (){
			top=-1;
			cout<<"Stack have been made empty."<<endl;
		}
		void CheckEmpty (){
			if(top==-1){
				cout<<"Stack is empty"<<endl;
			} else {
				cout<<"Stack is not empty."<<endl;
			}
		}
		void CheckFull (){
			if(top==max-1){
				cout<<"Stack is Full"<<endl;
			} else {
				cout<<"Stack is not Full."<<endl;
			}
		}
		void Push (){
			if(top==max-1){
				cout<<"Stack is Full. So, can`t Store more."<<endl;
			}else{
				top++;
				cout<<"Enter an element: ";
				cin>>A[top];
			}
		}
		void Pop (){
			if(top==-1){
				cout<<"Stack is Empty. Nothing to delete."<<endl;
			}else{
				cout<<A[top]<<" is deleted."<<endl;
				top--;
			}
		}
		void Peak(){
			if(top==-1){
				cout<<"Stack is Empty. So,no element to display."<<endl;
			}else{
				cout<<"Top Element: "<<A[top]<<endl;
			}
		}
		void Traverse(){
			if(top==-1){
				cout<<"Stack doesn`t have data."<<endl;
			}
			else{
				for (int i=0; i<=top;i++){
					cout<<A[i]<<" , ";
				}
				cout<<endl;	
			}
		}
};

int main(){
	Stack obj;
	int choice;
	do{
		do{
			cout<<"Enter Choice:"<<endl;
			cout<<"1. Make Empty"<<endl;
			cout<<"2. Check Empty"<<endl;
			cout<<"3. Check Full"<<endl;
			cout<<"4. PUSH OPERATION"<<endl;
			cout<<"5. POP OPERATION"<<endl;
			cout<<"6. PEAK/TOP OPERATION"<<endl;
			cout<<"7. Travesal"<<endl;
			cout<<"8. End"<<endl;
			cin>>choice;
		} while(choice<0 && choice>8);
		switch(choice){
			case 1:
				obj.MakeEmpty();
				break;
			case 2:
				obj.CheckEmpty();
				break;
			case 3:
				obj.CheckFull();
				break;
			case 4:
				obj.Push();
				break;
			case 5:
				obj.Pop();
				break;
			case 6:
				obj.Peak();
				break;
			case 7:
				obj.Traverse();
				break;
			case 8:
				cout<<"Exiiting."<<endl;
				return 0;		
		}
	} while(choice!=8);
}

#include<iostream>
using namespace std;
#define max 5
class Queue{
	private:
	    int A[max];
	    int rear=-1,front=-1;
	public:
	    void MakeEmpty(){
	        front=rear=-1;
	        cout<<"Circular Queue is Empty now."<<endl;
	    }
	    
		void CheckEmpty(){
		    if(front==-1){
				cout<<"Queue is Empty."<<endl;
			} else{
				cout<<"Queue is not Empty."<<endl;
			}
		}
		
		void CheckFull(){
		    if(front==(rear+1)%max){
		    	cout<<"Queue is Full."<<endl;
			} else{
				cout<<"Queue is not Full."<<endl;
			}
		}
		
		void Enqueue(){
		    if(front==(rear+1)%max){
		        cout<<"Circular Queue is Full. So, can`t add more."<<endl;
		    }else{
		    	if(front==-1){
		    		front++;
				}
		        rear=(rear+1)%max;
		        cout<<"Enter a data: ";
		        cin>>A[rear];
		    }
		}
		
		void Dequeue(){
		    if(front==-1){
		        cout<<"Circular Queue is Empty. So, can`t delete."<<endl;
		    } else{
		    	cout<<A[front]<<" is deleted."<<endl;
		    	if(front==rear){  
       				front=-1;  
       				rear=-1;  
    			}else{
    				front=(front+1)%max;	
				}
			}
		}
			
		void Traverse(){
		    if(front==-1){
		        cout<<"Circular Queue is Empty. So, nothing to display."<<endl;
		    }else{
		    	int i=front;
		    	do{
		    		cout<<A[i]<<" ,";
		    		i=(i+1)%max;
				}while(((rear+1)%max)!=i);
		    	cout<<endl;
			}
		}
};
int main(){
	Queue obj;
	int choice;
	do{
		cout<<"Enter a choice: "<<endl;
		cout<<"1. Make Empty "<<endl;
		cout<<"2. Check Empty "<<endl;
		cout<<"3. Check Full "<<endl;
		cout<<"4. Enqueue"<<endl;
		cout<<"5. Dequeue"<<endl;
		cout<<"6. Traverse"<<endl;
		cout<<"7. End"<<endl;
		cin>>choice;
		
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
				obj.Enqueue();
				break;
			case 5:
				obj.Dequeue();
				break;
			case 6:
				obj.Traverse();	
				break;
			default:
				break;
		}
	} while(choice!=7);
	return 0;
}


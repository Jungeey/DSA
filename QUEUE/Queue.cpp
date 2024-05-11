#include<iostream>
using namespace std;
#define max 5

class Queue{
	private:
	int A[max];
	public:
		int front=0,rear=-1;
		void MakeEmpty(){
			front=0;
			rear=-1;
			cout<<"Queue had been made Empty."<<endl;
		}
		
		void CheckEmpty(){
			if(rear<front){
				cout<<"Queue is Empty."<<endl;
			} else {
				cout<<"Queue is not Empty."<<endl;
			}
		}
		
		void IsFull(){
			if(rear==max-1){
				cout<<"Queue is Full."<<endl;
			} else {
				cout<<"Queue is not Full."<<endl;
			}
		}
		
		void Enqueue(){
		    if(rear==max-1){
		        cout<<"Queue is Full.So, can`t add more."<<endl;
		    }else{
		    	rear++;
			    cout<<"Enter a data: ";
			    cin>>A[rear];
		    }
		}
		
		void Dequeue() {
            if (rear<front) {
                cout << "Queue is empty. Nothing to delete." << endl;
            } else {
                cout << A[front] << " deleted." << endl;
            	front++;
            	if (front > rear) {
            		front = 0;
            		rear = -1;
            	}
    		}
    	}
    	
		void Traverse(){
		    if(rear<front){
		        cout<<"Queue is Empty. So, nothing to display."<<endl;
		    }else{
		        for(int i=front;i<=rear;i++){
		            cout<<A[i]<<", ";
		        }
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
				obj.IsFull();
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
			case 7:
				cout<<"Exiting."<<endl;
			default:
				break;
		}
	} while(choice!=7);
	return 0;
}

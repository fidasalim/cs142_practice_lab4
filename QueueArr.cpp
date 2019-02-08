#include<iostream>
using namespace std;
	
class Queue{
	public:
	int front , end;
	int QueueArr[];
	//constructer
	Queue(){
		front = -1;
		end = -1;
		QueueArr[0];
	}
	//insert arr in the end
	void push(int value){
		//end=new_end
		end++;
		//adding values to the end
		QueueArr[end]=value;
		
			
	}	
	//delete the first element
	void pop(){
		
		
	if(front == -1){
		cout<<"The queue doesnt have sufficient elements"<<endl;
	}
	else{
		int current = end;
		while(current!=0){
			int a = QueueArr[end];
			QueueArr[end] = QueueArr[current-1];
			QueueArr[current-1] = a;
			current--;
		}
		end--;
	}
		
		
	}
	//checks whether the queue is empty
	bool isEmpty(){
		if(end==-1) return true;
		return false;
	}
	//count the number of items in the queue
	int size(){
	return end+1;
	}
	void display(){
		for(int i = 0; i<(end+1);i++){
			cout<<QueueArr[i]<<"->";
		}
		cout<<"NULL"<<endl;
	}

};
int main(){
	Queue q1;	

	cout<<q1.isEmpty()<<endl;
	
	q1.push(2);
	q1.push(3);
	q1.push(1);
	q1.push(5);
	q1.display();
	q1.pop();
	q1.display();
	cout<<"The size of stack is "<<q1.size()<<endl;
	

}



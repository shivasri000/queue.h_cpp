#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;
#define MAX 1000
struct QUEUE{
	int arr[MAX];
	int front=0;
	int rear=-1;
	int cnt=0;
	
	void enqueue(int val){
		if(isfull()){
			cout<<"queue overflow"<<endl;
			return;
		}
		rear=(rear+1)%MAX;
		arr[rear]=val;
		cnt++;
	}
	
	int dequeue(){
		if(isempty()){
			cout<<"queue underflow"<<endl;
			return -1;
		}
		int val=arr[front];
		front=(front+1)%MAX;
		cnt--;
		return val;
	}

	int peek(){
		if(isempty()){
			cout <<"queue is empty"<<endl;
			return -1;
		}
		return arr[front];
	}
	bool isfull(){
		return cnt==MAX;
	}
	
	bool isempty(){
		return cnt==0;
	}

	void display(){
		if(isempty()){
			cout<<"queue underflow"<<endl;
			return;
		}
		for(int i=0;i<cnt;i++){
			cout<<arr[(front+i)%MAX]<<" ";
		}
		cout<<"\n";
	}
};
#endif
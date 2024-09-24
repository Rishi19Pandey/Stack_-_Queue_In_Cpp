//          QueueUsingArray.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
    int rear , front;
    int size;
    int *Arr;
    public:
        Queue(){
            front = -1;
            rear = -1;
            size = 10;
            Arr = new int[size];
        }

        void enqueue(int data){
            if(rear == size-1){
                cout<<"Queue Is Overflow ";
                return;
            }
            if(rear == -1){
                front++;
            }
            rear++;
            Arr[rear] = data;
        }

        void display(){
            if(rear == -1){
                cout<<"Data isn't present in Queue ";
                return;
            }
            for(int i = front ; i <= rear ; i++){
                cout<<Arr[i]<<" ";
            }
        }

        int dequeue(){
            if(front == rear){
                cout<<"Queue is Empty ";
                return 404;
            }
            else{
                int data = Arr[front];
                front++;
                return data;
            }
        }
};

int main(){
    cout<<"Queue  "<<endl;
   Queue qu;
//    qu.enqueue(20);
//    qu.enqueue(30);
//    qu.enqueue(10);
//    qu.enqueue(20);
//    qu.enqueue(30);
//    qu.enqueue(10);
//    qu.enqueue(20);
//    qu.enqueue(30);
//    qu.display();
//    cout<<endl;
//    cout<<qu.dequeue();
//    cout<<endl;
//    cout<<qu.dequeue();
//    cout<<endl;
//    cout<<qu.dequeue();
//    cout<<endl;
//    cout<<qu.dequeue();
//    cout<<endl;
//    cout<<qu.dequeue();
//    cout<<endl;
//    cout<<qu.dequeue();
//    cout<<endl;
//    cout<<qu.dequeue();
//    cout<<endl;
//    cout<<qu.dequeue();
//    cout<<endl;cout<<qu.dequeue();
//    cout<<endl;
   cout<<qu.dequeue();
   cout<<endl;
   qu.display();
   return 0;
}
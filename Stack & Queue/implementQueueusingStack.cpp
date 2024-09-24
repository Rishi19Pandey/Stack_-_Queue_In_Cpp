//          implementQueueusingStack.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Queue{
   public:
      stack<int> input,output;
      void push(int data){
         input.push(data);
      }
      int pop(){
         int data;
         if(output.empty()){
            while(!input.empty()){
               output.push(input.top());
               input.pop();
            }
         }
         data = output.top();
         output.pop();
         return data;
      }
      int front(){
         int data;
         if(output.empty()){
            while(!input.empty()){
               output.push(input.top());
               input.pop();
            }
         }
         data = output.top();
         return data;
      }
};

int main(){
   Queue q;
   q.push(10);
   q.push(30);
   q.push(50);
   q.push(20);
   q.push(90);
   // cout<<"Front is => "<<q.front()<<endl;
   cout<<"Poped is => "<<q.pop()<<endl;
   cout<<"Poped is => "<<q.pop()<<endl;
   cout<<"Poped is => "<<q.pop()<<endl;
   return 0;
}
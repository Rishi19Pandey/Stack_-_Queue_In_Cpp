//          implementStackUsingSingleQueue.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Stackimplementationusingqueue{
   public:
     queue<int> qu;
      void push(int data){
         qu.push(data);
         for(int i = 0 ; i  < qu.size()-1 ; i++){
            int ele = qu.front();
            qu.pop();
            qu.push(ele);
         }
      }
      int pop(){
         if(qu.empty())
            return 404;
         int data = qu.front();
         qu.pop();
         return data;
      }

      int top(){
         if(qu.empty())
            return 404;
         return qu.front();
      }
};

int main(){
   Stackimplementationusingqueue q;
   q.push(10);
   q.push(20);
   q.push(50);
   q.push(60);
   cout<<"Top Element is => "<<q.top()<<endl;
   cout<<"poped Element is => "<<q.pop()<<endl;
   cout<<"poped Element is => "<<q.pop()<<endl;
   cout<<"poped Element is => "<<q.pop()<<endl;
   return 0;
}
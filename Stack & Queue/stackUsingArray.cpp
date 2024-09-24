//              stackUsingArray.cpp

#include<bits/stdc++.h>
using namespace std;

class Stack{
        int top;
        int *Arr;
        int size;

    public:
        Stack(){
           top = -1;
           size = 10;
           Arr = new int[size];
        }

        void push(int data){
            if(top == size-1){
                cout<<"Stack Overflow";
                return;
            }
            top++;
            Arr[top] = data;
        }

        void display(){
            for(int i = 0 ; i <=top ; i++){
                cout<<Arr[i]<<" ";
            }
        }

        int pop(){
            if(top == -1){
                cout<<"Stack UnderFlow ";
                return 404;
            }
            else{
                int data = Arr[top];
                top--;
                return data;
            }
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            return false;
        }

        int topOfStack(){
            if(top == -1){
                cout<<"Data not Present ";
                return 404;
            }
            return Arr[top];
        }
};

int main(){
   Stack st;
   st.push(10);
   st.push(50);
   st.push(30);
//    st.push(10);
//    st.push(10);
//    st.push(10);
//    st.push(10);
//    st.push(10);
//    st.push(10);
//    st.push(10);
//    st.push(10);
//    cout<<"Poped Elemet is => "<<st.pop();
//    cout<<endl;
   st.display();
   cout<<endl;
   cout<<st.topOfStack();
//    cout<<"Is Empty => " <<st.isEmpty();
   return 0;
}
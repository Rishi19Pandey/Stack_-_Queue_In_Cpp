//              checkBalanceParenthesis.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Checkvalidprenthesis{
    public:
        stack<int> st;
        bool validParentesis(string str){
            for(int i = 0 ; i < str.size() ; i++){
                if(str[i] == '(' || str[i] == '{' || str[i] == '['){
                    st.push(str[i]);
                }
                else{
                    if(str[i] == ')'){
                        if(st.empty()){
                            return false;
                        }
                        else if(st.top() == '('){
                            st.pop();
                        }
                        else{
                            return false;
                        }
                    }
                    else if(str[i] == '}'){
                        if(st.empty()){
                            return false;
                        }
                        else if(st.top() == '{'){
                            st.pop();
                        }
                        else{
                            return false;
                        }
                    }
                     if(str[i] == ']'){
                        if(st.empty()){
                            return false;
                        }
                        else if(st.top() == '['){
                            st.pop();
                        }
                        else{
                            return false;
                        }
                    }
                }
            }
            if(st.empty())
                return true;
            return false;
        }
};

int main(){
   string str = ")(";
   Checkvalidprenthesis ch;
   int ans = ch.validParentesis(str);
   if(ans){
    cout<<"True"<<endl;
   }
   if(ans == 0){
    cout<<"False"<<endl;
   }
   return 0;
}
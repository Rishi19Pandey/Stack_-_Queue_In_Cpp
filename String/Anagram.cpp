//          Anagram.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool Anagram(string str , string str1){
    if(str.size() != str1.size()){
        return false;
    }
    int i , rem , arr[26] = {0};
    for(auto i : str){
        rem = int(i) - 97;
        arr[rem] += 1;
    }
    for(auto i : str1){
        rem = int(i) - 97;
        arr[rem] -= 1;
    }
    for(i = 0 ; i< 26 ; i++){
        if(arr[i] == 1){
            return false;
        }
    }
    return true;
}

int main(){
   string str = "abbb" , str1 = "adcabc";
   bool res = Anagram(str,str1);
   if(res){
        cout<<"Is Anagram";
   }
   if(!res){
        cout<<"Not Anagram";
   }
   return 0;
}
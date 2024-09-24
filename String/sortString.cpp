//      sortString.cpp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string sort(string str){
    string str1 = "";
    int i , rem , arr[26] = {0};
    for(auto i : str){
        rem = int(i) - 97;
        arr[rem] += 1;
    }

    for(i = 0 ; i< 26 ; i++){
        rem = arr[i];
        while(rem--){
            str1 += char(i + 97);
        }
    }
    return str1;
}

int main(){
   string str = "abcbabc";
   cout<<"INPUT =>> "<<str<<endl;
   cout<<"Sorted String =>> "<<sort(str)<<endl;
   return 0;
}
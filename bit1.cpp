#include<bits/stdc++.h> 
using namespace std; 
// conversion from binary 0's and 1's to a decimal number 
void binaryToDecimal (int num ){
      
  int sum =0; int base =1; 
  while(num){
            int multiplyWith = num%10; 
            num = num/10; 
        
        sum += base*multiplyWith; 
// here in my logic i first use pow function with initializing variable i and then increment it ; 
        base *=2;
  }  cout<<sum<<endl; }

  void decimalToBinary (int n ){
      stack<int> st ;
      while(n){
            int num = n%2; 
            n= n/2; 
            st.push(num);
      } 
      while(!st.empty()){
          cout<<st.top();
          st.pop();
      }
      cout<<endl;

  }

  int main(){

     int bin = 110; 
     binaryToDecimal(bin);
     int dec = 6; 
     decimalToBinary(dec);


  }
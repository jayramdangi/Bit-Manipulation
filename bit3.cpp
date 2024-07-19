// in this slide we will learn about XOR opration which is distinct =1, same=0;


#include<bits/stdc++.h>
using namespace std; 
int main (){
    
    // Swapping the two numbers with the help of XOR
    int a = 4; int b = 5; 
     
     a = a^b; 
     b = b^a; // b^a = b^a^b = a^0 = a 
     a = a^b; // a^b = a^b^a = b^0 = b
     cout<<a<<" "<<b<<endl;
     // now  we are given an array and one element has the odd  count find that element 
     int arr[13]={2,3,9,7,4,8,8,2,3,4,9,4,7};
     int ans =0; 
     for(int i =0 ; i<13; i++)
     {
        ans = ans ^arr[i]; 
     }

   cout<<ans<<endl;



}
// in this slide we will learn about XOR opration which is distinct =1, same=0 i.e  0^1 = 1  1^0 = 1  0^0 = 0 1^1 =0
// two important properties of XOR is a^a =0  and a^0 = a 

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
     // this complex problem can be solved with the help of the XOR operation though it can be solved through map but it will take more space compare
     // to the XOR operation so we know a^a =0 so all the element with the even count will become zero and one's with odd count will remain 
     int arr[13]={2,3,9,7,4,8,8,2,3,4,9,4,7};
     int ans =0; 
     for(int i =0 ; i<13; i++)
     {
        ans = ans ^arr[i]; 
     }

   cout<<ans<<endl;



}

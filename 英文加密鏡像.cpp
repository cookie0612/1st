#include <iostream>  
using namespace std;  
int encrypt(int a ,char c){
 int n;
 if(c+a>122){               
  for (n=1;n<=26;n++){
   if (c+n==123){         
    return 96+n;
   }   
  }
 }    
 if(c+a>90&&c<97){          
  for (n=1;n<=26;n++){
   if (c+n==91){          
    return 64+n;
   }   
  }
 }   
 if (c+a<=122||c+a<=90){    
  return c+a;
 }   
 return 0;                 
}
int main () {
 int a;
 char  c1 ,c2 ,c3 ,c4 ; 
 while(cin >> a >> c1 >> c2 >> c3 >> c4){
  cout << (char) encrypt(a ,c2) << (char) encrypt(a ,c1) << (char) encrypt(a ,c4) << (char) encrypt(a ,c3) << endl;   
 }
}
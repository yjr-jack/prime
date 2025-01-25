#include <iostream> 

void main(){
    int x, y;
    while (1){
        cout<<"Enter two numbers:";
        cin>>x>>y;
        cout<<"The greatest common divisor is "<<gcd(x, y)<<"\n\n";
    }
 }
 
 //Greatest common divisor（gcd）
 int gcd(int x,int y){
   while(x!=y){
       if(x>y) x-=y;
       else y-=x;
   }
   return x;
 }
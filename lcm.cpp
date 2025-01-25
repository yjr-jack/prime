#include <iostream> 

void main(){
    int x, y;
    while (1){
        cout<<"Enter two numbers:";
        cin>>x>>y;
        cout<<"The lowest common multiple is "<<lcm(x, y)<<"\n\n";
    } 
 }
 
 //The lowest common multiple
 int lcm(int x,int y){
   while(x!=y){
       if(x>y) x-=y;
       else y-=x;
   }
   return x;
 }
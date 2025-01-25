#include <iostream> 
using namespace std;

long long gcd(long long x,long long y);

int main(){
    long long x, y;
    while (1){
        cout<<"Enter two numbers:";
        cin>>x>>y;
        cout<<"The greatest common divisor is "<<gcd(x, y)<<"\n\n";
    }
    return 0;
}
 
//Greatest common divisor（gcd）
long long gcd(long long x,long long y){
   while(x!=y){
       if(x>y) x-=y;
       else y-=x;
   }
   return x;
 }
#include <iostream>
using namespace std;

long long lcm(long long x,long long y);

int main(){
    long long x, y;
    while (1){
        cout<<"Enter two numbers:";
        cin>>x>>y;
        cout<<"The lowest common multiple is "<<lcm(x, y)<<"\n\n";
    }
    return 0;
}
 
//The lowest common multiple
long long lcm(long long x,long long y){
	long long a=x,b=y,z;
   while(a!=b){
       if(a>b) a-=b;
       else b-=a;
   }
	z=(x/a)*(y/a)*a;
   return z;
}
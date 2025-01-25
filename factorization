#include <iostream> 

void main(){
   while (1){
        int  x, c=0, count =2;
        cout<<"factorization:";
        cin>>x;
        cout<<x;
        if (x>=2) {
            while ((c!=0||count<x)&&x!=1){
                if (x % count  == 0) {
                    if (c!=0) cout<<'*';
                    else cout<<'=';
                    cout<<count ;
                    c++;
                    x/=count ;
                }else count++;
            }
            if (c==0) cout<<" is a prime number.";
        }
        cout<<"\n\n";
    }
}
#include "../container.hpp"
#include "lib_num.hpp"

void sieve(int n){
    VectorBool primes(n+1,true);
    for(int p=2;p*p<=n;p++){
        if(primes[p]==true){
            for(int i=p*p;i<=n;i+=p){
                primes[i]=false;
            }
        }
    }
    for (int p=2; p<=n; p++) 
        if (primes[p]) 
          cout << p << " "; 
    
}
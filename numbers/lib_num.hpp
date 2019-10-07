#include "../container.hpp"

void sieve(int n){

    VectorBool primes(n+1);
    for(int p=2;p*p<=n;p++){
        if(primes.at(p)==true){
            for(int i=p*p;i<=n;i++){
                primes[i]=false;
            }
        }
    }
    for (int p=2; p<=n; p++) 
        if (primes[p]) 
          cout << p << " "; 
}
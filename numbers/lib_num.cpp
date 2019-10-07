#include "../container.hpp"
#include "lib_num.hpp"
#include <cmath>
#include <algorithm>
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

VectorInt ListFactors(int n){
    VectorInt factors{1,n};
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            factors.push_back(i);
            if(i!=sqrt(n)){
                factors.push_back(n/i);
            }
        }
    }
    sort(factors.begin(),factors.end());
    return factors;
}
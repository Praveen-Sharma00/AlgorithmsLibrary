#include "../container.hpp"
#include "lib_num.hpp"
#include <cmath>
#include <algorithm>
#define MAX 100000
void sieve(int n)
{
    VectorBool primes(n + 1, true);
    for (int p = 2; p * p <= n; p++)
    {
        if (primes[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
            {
                primes[i] = false;
            }
        }
    }
    for (int p = 2; p <= n; p++)
        if (primes[p])
            cout << p << " ";
}

VectorInt ListFactors(int n)
{
    VectorInt factors{1, n};
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            factors.push_back(i);
            if (i != sqrt(n))
            {
                factors.push_back(n / i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}

String DecimalToBinary(int n)
{
    String binary = "";
    while (n > 0)
    {
        binary += to_string(n % 2);
        n /= 2;
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

int gcd(int a, int b)
{
    if (a == b || a == 0)
        return a;
    return gcd(b % a, a);
}

int multiply(int x, VectorInt &res, int res_size)
{
    int carry = 0;
    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}
void largeFactorial(int n)
{
    VectorInt res(MAX);
    int res_size = 1;
    res[0] = 1;
    for (int i = 2; i <= n; i++)
    {
        res_size = multiply(i, res, res_size);
    }
    reverse(res.begin(),res.begin()+res_size);
    for(auto i=0;i<res_size;i++)
        cout<<res[i];
    cout<<endl;
}
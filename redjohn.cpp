#include <iostream>
#include <vector>
#include <set>
#include <cmath>

using namespace std;

vector<int> sieve(int n)
{
    set<int> primes;
    vector<int> vec;

    primes.insert(2);

    for(int i=3; i<=n ; i+=2)
    {
        primes.insert(i);
    }       

    int p=*primes.begin();
    vec.push_back(p);
    primes.erase(p);

    int maxRoot = sqrt(*(primes.rbegin()));

    while(primes.size() > 0)
    {
        if(p > maxRoot)
        {
            while(primes.size() > 0)
            {
                p=*primes.begin();
                vec.push_back(p);
                primes.erase(p);        
            }
            break;
        }

        int i = p*p;  
        int temp = (*(primes.rbegin()));

        while(i<=temp)
        {
            primes.erase(i);
            i += p;
            i += p;
        }

        p=*primes.begin();
        vec.push_back(p);
        primes.erase(p);
    }

    return vec;
}

int main() 
{
    int t, N, M, P, i, count, res;
    vector<int> prime;
    vector<int>::iterator it;

    cin >> t;

    prime = sieve(217286);

    int a[41];
    for(i=0;i<4;i++)
        a[i] = 1;
    for(i=4;i<=40;i++)
        a[i] = a[i-1] + a[i-4];

    int numprime[41];
    for(i=0;i<41;i++)
    {
        count = 0;
        for(it=prime.begin();it!=prime.end();it++)
        {
            if(*it <= a[i])
                count++;
            else
                break;
        }    
        numprime[i] = count;
        count = 0;
    }

    while(t--)
    {
        cin >> N;
        res = numprime[N];
        cout << res << endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
int prime[1000000];
void getPrimes()
{	
    for(int i = 0 ; i < 1000000 ; i++){
        prime[i] = 1;   
    }
    for(int i = 2 ; i < 1000000; i++)
	{
        if (prime[i])
		{
            primes.push_back(i);
            if(i <= (int)sqrt((double)1000000))
			{    
                for(int t = i*i ; t<1000000 ; t+=i)//prime[i*i+k*i]=false
				{   
                    prime[t] = 0;
                }
            }
        }
    }
}
int main()
{
	getPrimes();
	cout<<primes[78200-1]<<endl;
	return 0;
}
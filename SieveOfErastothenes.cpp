/*#include <iomanip>
#include<iostream>
#include<math.h>*/
#include <bits/stdc++.h>
using namespace std;
 
void SieveOfEratosthenes(int b,int n)
{
   bool prime[n+1];
    double count=0,p=0;
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
		for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p=2; p<=n; p++)
       if (prime[p]){
       	if(p>=b)
          		count++;
       }
        p=(double)count/(n-b+1);
 	std::cout << std::fixed;
    std::cout << std::setprecision(6);
    std::cout << p<<endl;
}
 
int main()
{
    int n,b,t;
    cin>>t;
    while(t){
	    cin>>b>>n;
	    SieveOfEratosthenes(b,n);
	    t--;
    }
    return 0;
}

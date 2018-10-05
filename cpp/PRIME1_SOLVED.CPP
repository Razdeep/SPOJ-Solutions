#include <iostream>
#include <cmath>
using namespace std;
bool checkPrime(int n)
{
	if(n==1)
	return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(!(n%i))
		return false;
	}
	return true;
}
int main() {
	// your code goes here
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			if(checkPrime(i))
			cout<<i<<endl;
		}
		cout<<endl;
	}
	return 0;
}

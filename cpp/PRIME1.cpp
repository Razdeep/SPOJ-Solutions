// Most efficient way to find prime numbers upto a ultra large numbers
// AKA Sieve of Eratosthenes
#include<bits/stdc++.h>

using namespace std;

#define MAX 1000000009

vector<bool> sieveOfEratosthenes()
{
    vector<bool> arr(MAX+1,true); // 1 signifies all prime
    arr[0]=false;
    arr[1]=false;
    //Actual Operation
    for(int i=2;i<=MAX;i++)
    {
        if(arr[i])
        {
            for(int j=2*i;j<=MAX;j+=i)
            {
                arr[j]=false;
            }
        }
    }
    return arr;
}
void operate(const int a,const int b,const vector<bool>& arr)
{
    
    for(int i=a;i<=b;i++)
    {
        if(arr[i])
        cout<<i<<endl;
    }
    cout<<endl;
}
int main()
{

    int t,a,b;
    cin>>t;
    vector<bool> arr=sieveOfEratosthenes();
    while(t--)
    {
        cin>>a>>b;
        operate(a,b,arr);
    }
    return 0;
}
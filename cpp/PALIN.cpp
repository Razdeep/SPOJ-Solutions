#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
    int result=0;
    while(n)
    {
        result*=10;
        result+=(n%10);
        n/=10;
    }
    return result;
}
int findLength(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n/=10;
    }
    return count;
}
int nextPalindrome(int n)
{
    if(n==999||n==99999||n==9999999)
    return n+2;
    int len=findLength(n);
    if(!(len%2)) // even
    {
        int left=n/pow(10,len/2);
        int right=n%(int)pow(10,len/2); // forcefully converting to int
        if(left>right)
        {
            return (left*pow(10,len/2))+rev(left);
        }
        else{ //right>=left
            return (left+1)*pow(10,len/2)+rev(left+1);
        }
    }
    else{ // odd
        int left=n/pow(10,(len/2)+1);
        int right=n%(int)pow(10,len/2); // forcefully converting to int
        int mid=(n%(int)pow(10,len/2+1))/pow(10,len/2);
        if(left>right)
        {
            return ( left*pow(10,(len/2)+1) + (mid*pow(10,len/2)) + rev(left) );
        }
        else{ //right>=left
            return ( left*pow(10,(len/2)+1) + ((mid+1)*pow(10,len/2)) + rev(left));
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<nextPalindrome(n)<<endl;
    }
    return EXIT_SUCCESS;
}
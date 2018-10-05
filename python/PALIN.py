# Finding the nearest palindrome
# Output is correct but still getting TLE
t=int(input())
while t:
    n=int(input())
    length=len(str(n))
    l=n//(10**(length//2))
    r=n%(10**(length//2))
    if length%2==0:
        if l<r:
            temp=str(l+1)
            print(temp+temp[::-1])
        else:
            print(2*str(l))
    else:
        mid=l%10
        l//=10
        if l<r:
            temp=str(l)+str(mid+1)+(str(l))[::-1]
            print(temp)
        else:
            temp=str(l)+str(mid)+(str(l))[::-1]
            print(temp)
    t=t-1
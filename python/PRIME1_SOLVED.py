import math
def checkPrime(n):
    if n==1:
        return False
    for i in range(2,int(math.sqrt(n))+1):
        if n%i==0:
            return False
    return True
if __name__=='__main__':
    t=int(input())
    while t:
        a,b=input().split(' ')
        a=int(a)
        b=int(b)
        for i in range(a,b+1):
            if checkPrime(i):
                print(i)
        print('')
        t=t-1
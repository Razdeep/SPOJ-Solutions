# @Failed
import math
MAX=100005

def sieveOfEratosthenes():
    arr=[True for i in range(MAX)]
    arr[0]=False
    arr[1]=False
    i=2
    
    for i in range(2,int(math.sqrt(MAX))):
        if arr[i]:
            for j in range(2*i,MAX,i):
                arr[j]=False
    return arr

def operate(a,b,arr):
    temp=''
    for i in range(a,b+1):
        if arr[i]:
            temp+=str(i)
            temp+='\n'
    print(temp)
    print()


if __name__=='__main__':
    t=int(input())
    arr=sieveOfEratosthenes()
    while t:
        a=int(input())
        b=int(input())
        operate(a,b,arr)
        t=t-1

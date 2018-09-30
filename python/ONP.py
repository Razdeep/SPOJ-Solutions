# Problem name: Transform the equation
# What it basically does is transform infix to postfix
# PASSED

def priority(a):
    if a=='^':
        return 3
    elif a=='*' or a=='/':
        return 2
    elif a=='+' or a=='-':
        return 1
    else: #signifies brackets
        return 0

t=int(input())
while t:
    stack=[]
    string=input()
    newstring=''
    for i in range(0,len(string)):
        if string[i]>='a' and string[i]<='z':
            newstring+=string[i]
        elif string[i]=='(':
            stack.append('(')
        elif string[i]==')':
            temp=stack.pop()
            while temp!='(':
                newstring+=temp
                temp=stack.pop()
        else: #operators
            if priority(string[i])>priority(stack[-1]):
                stack.append(string[i])
            else:
                temp=stack.pop()
                while priority(string[i])<=priority(stack[-1]):
                    newstring+=temp
                    temp=stack.pop()
                stack.append(string[i])
    while len(stack)!=0:
        newstring+=stack.pop()
    print(newstring)
    t=t-1
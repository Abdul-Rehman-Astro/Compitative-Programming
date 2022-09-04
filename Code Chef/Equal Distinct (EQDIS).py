# cook your dish here
t = int(input())
for i in range(t):
    n= int(input())
    l= list(map(int,input().strip().split()) )
    s= set(l)
    if(len(s)== n and n%2!=0):
        print("NO")
    else:
        print("YES")

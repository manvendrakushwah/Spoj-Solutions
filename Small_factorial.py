t=int(input())
for j in range(0,t):
    n = int(input().strip())
    x=1
    for i in range(1,n+1):
        x*=i

    print(x)

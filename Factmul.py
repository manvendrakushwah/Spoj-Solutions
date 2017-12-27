n=int(input())
ans=1
temp=1
if n>=587117 :
    ans=0
else:
    for i in range(1 ,n+1):
        temp=(temp*i)%109546051211
        ans=(ans*temp)%109546051211
print(ans%109546051211)

/*
10      46
100

*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull long long int

ll sumofdigit(ll n){
    ll sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
ll numofdigit(ll n){
    ll c=0;
    while(n){
        c+=1;
        n/=10;
    }
    return c;
}

int main(){
    ll ans=0;
    for(int i=1;i<101;i++){
        cout<<i<<"  "<<sumofdigit(i)+ans<<"\n";
        ans+=sumofdigit(i);
    }




return 0;}

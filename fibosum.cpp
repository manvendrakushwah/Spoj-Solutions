#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll const MOD= 1000000007;
vector<vector<ll> >matrix_mul(vector<vector<ll> > a,ll x,ll y,vector<vector<ll> >b,ll yy,ll z){
    vector<vector<ll> >ans(x,vector<ll>(z));
    for(ll i=0;i<x;i++){
        for(ll j=0;j<z;j++){
            ll sum=0;
            for(ll k=0;k<y;k++){
                sum+=(a[i][k]*b[k][j]+MOD)%MOD;
            }
            ans[i][j]=(sum+MOD)%MOD;
        }
    }
    return ans;
}

vector<vector<ll> >power(vector<vector<ll> > v,ll p){
    if(p==0){
            vector<vector<ll> >vv(2,vector<ll>(2));
            vv[0][0]=1;vv[0][1]=1;vv[1][0]=1;vv[1][1]=1;
        return vv;
    }
    if(p==1){
        return v;
    }else{
        if(p%2==1){
            return matrix_mul(v,2,2,power(v,p-1),2,2);
        }else{
            vector<vector<ll> > x=power(v,p/2);
            return matrix_mul(x,2,2,x,2,2);
        }

    }

}

int main(){
    ll t;
    cin>>t;
    while(t--){
    ll x,y;
    cin>>x>>y;
    ll n;
    n=y+2;
        vector<vector<ll> >a(2,vector<ll>(2));
        vector<vector<ll> >b(2,vector<ll>(2));
        a[0][0]=1;a[0][1]=1;a[1][0]=1;a[1][1]=0;
        b=power(a,n-1);
        vector<vector<ll> >c(2,vector<ll>(1));
        c[0][0]=1;c[1][0]=0;
         vector<vector<ll> >ans(2,vector<ll>(1));
        ans=matrix_mul(b,2,2,c,2,1);
        ll temp=ans[0][0];

        n=x+1;

        b=power(a,n-1);


        ans=matrix_mul(b,2,2,c,2,1);
        ll temp1=ans[0][0];

        cout<<(temp-temp1+MOD)%MOD<<"\n";
    }

return 0;}

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
int n=10001;
vector<ll> sum(n);
    sum[0]=0;
for(int i=1;i<n;i++){
    sum[i]=sum[i-1]+sqrt(i);
}

int t;
//cin>>t;
while(t--){
    int l,k;
   // cin>>l>>k;
  cout<<sum[2327];
}








return 0;}

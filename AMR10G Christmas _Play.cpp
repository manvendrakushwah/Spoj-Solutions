#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<utility>
#include<stack>
#include<queue>
#include<string>
#include<cmath>
using namespace std;

#define ll unsigned long long int
//#define for(i,a,n) for(ll i=a;i<n;i++)
int main(){
	ll t;
	cin>>t;
	while(t--){
	ll n,k;
	cin>>n>>k;
	vector<ll> v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		ll min=1000000000 ;
		for(int i=0;i+k-1<n;i++){
			if((v[i+k-1]-v[i])<min){
				min=v[i+k-1]-v[i];
			}
		}

		cout<<min<<endl;
	}
	return 0;

}

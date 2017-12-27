#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<utility>
#include<stack>
#include<queue>
using namespace std;

#define ll long long int
#define for(i,n) for(ll i=0;i<n;i++)

ll reverse( ll n){
	int sum=0;
	while(n){
		sum+=n%10;
		sum*=10;
		n/=10;
	}
	return sum/10;
}

int main(){
	int t;
	cin>>t;
	while(t--){
	ll a,b;
		cin>>a>>b;
		cout<<reverse(reverse(a)+reverse(b))<<endl;


	}
	return 0;
}


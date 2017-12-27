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

#define ll long long int
//#define for(i,n) for(ll i=0;i<n;i++)

ll num_of_divisors(ll n){
	ll count=0;

	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	return count++;

}

int main(){
	ll n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum+=num_of_divisors(i);
	}
	cout<<sum;

return 0;
}

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
#define for(i,n) for(ll i=0;i<n;i++)
bool ispalindrome(string s){
	ll n=s.size();
		bool a=1;
	for(i,n/2){

		if(s[i]==s[n-i-1]){

		}
		else{
			a=0;
			break;
		}

	}
	return a;

}
int main(){
	int t;
	cin>>t;
	while(t--){
	string s;
	cin>>s;
	if(ispalindrome(s)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}




}
return 0;
}

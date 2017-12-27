#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,x;
        cin>>n;
        x=(sqrt(n));
        if(n==x*x){
            cout<<2*x-1<<"\n";
        }
        else{
            if(n<=x*x+x){
                cout<<2*x<<"\n";
            }
            else{
                cout<<2*x+1<<"\n";
            }
        }


    }




return 0;}

#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    while(n--){

        long long int x;
        cin>>x;
        long long int sum=0;
        long long int div=5;

        while(x/div){
            sum+=x/div;
            div*=5;
        }
        cout<<sum<<"\n";




    }









return 0;}

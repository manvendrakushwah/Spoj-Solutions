#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n;
    cin>>n;
    bool flag=1;
    while(n!=1){
        if(n%2==0){
            n/=2;
        }else{
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"NIE\n";
    }else{
        cout<<"TAK\n";
    }




return 0;}

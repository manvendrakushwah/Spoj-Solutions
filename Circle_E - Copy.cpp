#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        double a,b,c;
        cin>>a>>b>>c;
        double d=(a*b*c)/(a*b +a*c+ b*c +2*sqrt((a*b*c)*(a+b+c)));
        printf("%.6lf\n",d);







    }





return 0;}

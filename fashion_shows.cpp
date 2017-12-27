#include<bits/stdc++.h>
#define ull long int
using namespace std;
int main(){
    ull t;
    cin>>t;
    while(t--){
        ull n;
        cin>>n;

        vector<ull> men(n);
        vector<ull>women(n);

        for(int i=0;i<n;i++){
            cin>>men[i];
        }
        for(int i=0;i<n;i++){
            cin>>women[i];
        }
        sort(men.begin(),men.end());
        sort(women.begin(),women.end());

        ull sum=0;
        for(int i=0;i<n;i++){
            sum+=men[i]*women[i];
        }

        cout<<sum<<"\n";

    }




return 0;}

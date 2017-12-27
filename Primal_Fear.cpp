#include<bits/stdc++.h>
using namespace std;
int n=1000000;
vector<int> v(n+1,1);

bool isZero(int n){
    //cout<<"1";
    while(n){
        if(n%10==0 || v[n]==0){
            return 0;
        }
        n/=10;
     //   cout<<"2";
    }
    return 1;
}
int main(){


for(int i=2;i*i<=n;i++){
    for(int j=2*i;j<=n;j+=i){
        v[j]=0;
      //  cout<<"3";
    }
 //   cout<<"4";
}
int cunt=0;
vector<int> vec(n+1);
for(int i=2;i<=n;i++){
    if(isZero(i)==1 && v[i]==1){
        cunt++;
    }
    vec[i]=cunt;
   // cout<<"5";
}

int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    cout<<vec[x]<<"\n";


}

return 0;}

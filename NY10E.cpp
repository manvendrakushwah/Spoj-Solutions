#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define ull unsigned long long int
#define pb push_back


int main(){
    int n=66;
    vector<vector<ull> >dp(66,vector<ull>(10,0));
    for(int i=0;i<10;i++){
        dp[0][i]=0;
    }
    for(int i=0;i<10;i++){
        dp[1][i]=1;
    }
    dp[1][0]=1;

    for(int i=2;i<n;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<=j;k++){
                dp[i][j]+=dp[i-1][k];
            }
           // cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }

    int nn,x,y;
    cin>>nn;
    for(int i=1;i<=nn;i++){
        cin>>x>>y;
        cout<<x<<" "<<dp[y+1][9]<<"\n";
    }
return 0;
}

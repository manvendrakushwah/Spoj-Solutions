#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int> s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        unordered_map<long int ,long int> lhs;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    lhs[(s[i]*s[j])+s[k]]++;
                }
            }
        }

       long int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(s[i]!=0){
                          //  cout<<i*j*k<<"\n";
                        count+=lhs[(s[j]+s[k])*s[i]];
                    }
                }
            }
        }
        cout<<count<<"\n";


return 0;
}

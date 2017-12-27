#include<bits/stdc++.h>
using namespace std;

int const INF=1000000;

int main(){
    long long int c;
    cin>>c;
    while(c--){
        int n,k;
        cin>>n>>k;
        vector<int> price(k+1);
        for(int i=1;i<=k;i++){
            cin>>price[i];
            if(price[i]==-1){price[i]=INF;}
        }
        vector<int> min_boxes(k+1,0);
        vector<int> min_price(k+1,INF);
        min_price[0]=0; min_boxes[0]=0;
        min_price[1]=price[1];
        min_boxes[1]=1;

       for(int i=2;i<=k;i++){
        for(int j=i;j>=0;j--){
            if(min_boxes[j]<n){
                if(min_price[i]>min_price[j]+price[i-j]){
                    min_price[i]=min_price[j]+price[i-j];
                    min_boxes[i]=min_boxes[j]+1;
                }
            }
        }
       }
        if(min_price[k]==INF){
            cout<<-1<<"\n";
        }
        else{
            cout<<min_price[k]<<"\n";
        }

    }

return 0;
}

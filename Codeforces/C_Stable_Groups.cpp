/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-08-19 23:21:23 GMT+06                                            
/**************************************************/

#include<bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238
#define MOD 1000000007
#define nl "\n"
#define ll long long int
#define dbl double
#define sp " "
#define pb(x) push_back(x)
#define arrSort(a) sort(a,a+(int)sizeof(a) / sizeof(a[0]))
#define r_arrSort(a) sort(a,a+(int)sizeof(a) / sizeof(a[0]),greater<int>())

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll n,k,x,cnt=1;
    cin>>n>>k>>x;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    arrSort(arr);
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    for(ll i=1;i<n;i++){
        if(arr[i]-arr[i-1]>x){
            cnt++;
            pq.push(arr[i]-arr[i-1]-1);
        }
    }
    while(!pq.empty()){
        if(pq.top()/x<=k&&k>0){
            cnt--;
            k-=(pq.top()/x);
            pq.pop();
        }else break;
    }
    cout<<cnt<<nl;

    return 0;
}

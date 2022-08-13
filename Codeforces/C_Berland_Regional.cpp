/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-06-18 01:22:03 GMT+06                                            
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
    
    int t;
    cin>>t;

    while(t--){
        int n;cin>>n;
        int ara[n];
        set<int> st;
        for(int i=0;i<n;i++){
            cin>>ara[i];
            st.insert(ara[i]);
        }
        vector<int> a;
        
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[ara[i]].pb(x);
        }
        for(auto i=st.begin();i!=st.end();i++){
            sort(mp[*i].begin(),mp[*i].end());
        }
        vector<vector<ll>> presum;
        for(auto const& x:mp){
            vector<ll> v;
            ll sum=0;
            for(int i=0;i<x.second.size();i++){
                sum+=x.second[i];
                v.pb(sum);
            }
            presum.pb(v);
        }
        for(int k=1;k<=n;k++){
            ll ans=0;
            // cout<<"dbg: ";
            for(int i=0;i<presum.size();i++){
                ans+=presum[i][presum[i].size()-1];
                if(presum[i].size()%k!=0){
                    ans-=presum[i][presum[i].size()%k-1];
                }
                // cout<<ans<<sp;
            }
            // cout<<nl;
            cout<<ans<<sp;
        }
        
        cout<<nl;
    }

    return 0;
}
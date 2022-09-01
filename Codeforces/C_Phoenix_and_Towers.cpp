/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-08-13 12:07:47 GMT+06                                            
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
        int n,m,x;cin>>n>>m>>x;
        set<pair<int,int>> st;

        for(int i=1;i<=m;i++){
            st.insert({0,i});
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            int z;cin>>z;
            pair<int,int> p=*st.begin();
            st.erase(p);
            st.insert({p.first+z,p.second});
            v.pb(p.second);
        }
        int mx=INT_MAX;
        int mn=INT_MIN;
        for(auto& e:st){
            mx=max(mx,e.first);
            mn=min(mn,e.first);
        }
        
        if(mx-mn<=x){
            cout<<"YES"<<nl;
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<sp;
            }
            cout<<nl;
        }

    }

    return 0;
}

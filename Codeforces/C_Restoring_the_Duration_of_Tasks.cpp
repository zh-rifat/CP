/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-06-14 20:28:55 GMT+06                                            
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
        int n;
        cin>>n;
        int ara[n],arb[n];    
        for(int i=0;i<n;i++)cin>>ara[i];   
        for(int i=0;i<n;i++)cin>>arb[i];   
        vector<int> ans;
        int prev=0;
        for(int i=0;i<n;i++){
            ans.pb(min(arb[i]-ara[i],arb[i]-prev));
            prev=arb[i];
        }
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<sp;
        cout<<nl;
    }

    return 0;
}
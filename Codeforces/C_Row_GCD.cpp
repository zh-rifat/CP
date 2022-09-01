/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-08-14 21:54:10 GMT+06                                            
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
    ll n,m;cin>>n>>m;
    ll a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];

    ll gcd1=0;
    for(int i=1;i<n;i++){
       gcd1= __gcd(gcd1,abs(a[0]-a[i]));
    }

    for(int i=0;i<m;i++){
        ll ans=__gcd(a[0]+b[i],gcd1);
        cout<<ans<<sp;
    }
    cout<<nl;


    return 0;
}

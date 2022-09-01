/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-08-22 22:10:05 GMT+06                                            
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
vector<ll>v;
void solve()
{
    ll i=0;
    while(i*i<=1e6)
    {
        v.push_back(i*i);
        i++;
    }
}

ll bs(ll n)
{
    ll i=0;
    ll j=v.size()-1;
    ll ans=0;
    while(i<=j)
    {
        ll mid=(i+j)/2;
        if(v[mid]>=n)
        {
            ans=v[mid];
            j=mid-1;
        }
        else i=mid+1;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--){
        int n;cin>>n;
        vector<int> arr(n,-1);
        for(int i=n-1;i>=0;i--){
            ll sqn=bs(i);
            if(arr[i]==-1){
                arr[i]=sqn-i;
                arr[sqn-i]=i;
            }

        }
        for (int  i = 0; i < n; i++)
        {
            cout<<arr[i]<<sp;
        }
        cout<<nl;
        
    }

    return 0;
}

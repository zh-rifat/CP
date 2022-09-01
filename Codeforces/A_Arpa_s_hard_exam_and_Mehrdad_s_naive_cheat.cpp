/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-08-11 00:12:55 GMT+06                                            
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
ll binExpow(ll n,ll p){
    ll res=1;
    while(p>0){
        if(p%2==0){
            n=(n*n)%10;
            p/=2;
        }else {
            res=(res*n)%10;
            p--;
        }
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n;cin>>n;

    cout<<binExpow(8,n)<<nl;

    return 0;
}
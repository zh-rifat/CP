/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-04-14 13:48:04 GMT+06                                            
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


bool isPrime(ll n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        cout<<(bool)isPrime(n)<<nl;

    }
    

    return 0;
}
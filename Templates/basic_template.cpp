/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-04-24 22:45:52 GMT+06                                            
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

vector<bool> seive(ll n){
    vector<bool> prime(n+3,true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<n;j+=i){
                prime[j]=false;
            }
        }
    }
    return prime;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;cin>>t;
    while(t--){
      
    }
    return 0;
}

/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-05-20 02:01:08 GMT+06                                            
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
    int n;cin>>n;
    vector<int> v;
    ll m=1;
    for(int i=1;i<n;i++){
        if(__gcd(n,i)==1){
            v.pb(i);
        }
    }
    for(int i=0;i<v.size();i++){
        m=(m*v[i])%n;
    }
    if(m==1){
        cout<<v.size()<<nl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<sp;
        }
        cout<<nl;
    }else{
        cout<<v.size()-1<<nl;
        for(int i=0;i<v.size();i++){
            if(m==v[i])continue;
            cout<<v[i]<<sp;
        }
        cout<<nl;
    }

    return 0;
}
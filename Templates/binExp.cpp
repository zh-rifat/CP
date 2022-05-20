/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-04-25 13:38:03 GMT+06                                            
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
    int cnt=0;
    while(p>0){
        
        cnt++;
        if(p%2==0){
            n*=n;
            p/=2;
        }else {
            res*=n;
            p--;
        }
    }
    cout<<cnt<<nl;
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    

    return 0;
}
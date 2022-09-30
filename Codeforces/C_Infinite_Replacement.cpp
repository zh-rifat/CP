/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-09-01 23:53:24 GMT+06                                            
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
            n*=n;
            p/=2;
        }else {
            res*=n;
            p--;
        }
    }
    return res;
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;

    while(t--){
        string s,t;cin>>s>>t;
        int ls=s.size();
        bool flag=true;
        //checking for infinite solution
        for(int i=0;i<t.size();i++){
            if(t[i]=='a'){
                flag=false;
                break;
            }
        }
        if(flag){
            uint64_t ans=binExpow(2,ls);
            cout<<ans<<nl;
        }else{
            if(t.size()==1){
                cout<<1<<nl;
            }else
                cout<<-1<<nl;
        }


    }

    return 0;
}

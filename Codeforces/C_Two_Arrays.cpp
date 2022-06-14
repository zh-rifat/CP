/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-06-14 20:07:35 GMT+06                                            
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
        int n;cin>>n;
        int ara[n],arb[n];
        for(int i=0;i<n;i++){
            cin>>ara[i];
        }
        for(int i=0;i<n;i++){
            cin>>arb[i];
        }
        arrSort(ara);
        arrSort(arb);
        bool flag=true;
        for(int i=0;i<n;i++){
            if(ara[i]==arb[i]||ara[i]+1==arb[i]){
                continue;
            }
            flag=false;
            break;
        }
        string s=flag?"YES":"NO";
        cout<<s<<nl;
    }

    return 0;
}
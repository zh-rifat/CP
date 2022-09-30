/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-09-05 20:48:53 GMT+06                                            
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
    int ln[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;cin>>n;
    bool flag=false;
    for(int i=0;i<sizeof(ln)/sizeof(ln[0]);i++){
        if(n%ln[i]==0){
            flag=true;
            break;
        }
    }
    if(flag)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;

    return 0;
}

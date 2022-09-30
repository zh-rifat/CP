/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-09-01 23:39:19 GMT+06                                            
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
    
    int n;
    cin>>n;
    int x=0,y=0,z=0;
    while(n--){
        int a,b,c;cin>>a>>b>>c;
        x+=a;y+=b;z+=c;
    }
    if(!x&&!y&&!z)
        cout<<"YES"<<nl;
    else cout<<"NO"<<nl;

    return 0;
}

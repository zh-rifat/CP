/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-08-17 23:42:05 GMT+06                                            
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
        string s;cin>>s;
        int n=s.size();
        ll ans=0,mx0=0,mx1=0;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                mx0++;
                mx1=0;
                ans+=mx0;
            }else if(s[i]=='1'){
                mx1++;
                mx0=0;
                ans+=mx1;

            }else {
                mx0++;
                mx1++;
                ans+=max(mx0,mx1);
            }
            swap(mx0,mx1);
        }
        cout<<ans<<nl;
    }

    return 0;
}

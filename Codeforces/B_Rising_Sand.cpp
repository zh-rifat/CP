/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-06-30 13:09:37 GMT+06                                            
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
        int n,k;cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int ans=0;
        if(k==1){
            ans=n/2;
            if(n%2==0)ans-=1;
        }else{
            for(int i=1;i<n-1;i++){
                if(arr[i]>arr[i-1]+arr[i+1])ans+=1;
            }
        }
        cout<<ans<<nl;
    }

    return 0;
}
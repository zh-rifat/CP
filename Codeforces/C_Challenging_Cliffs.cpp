/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-08-18 22:46:04 GMT+06                                            
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
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+sizeof(arr)/sizeof(arr[0]));
        if(n==2){
            cout<<arr[0]<<sp<<arr[1]<<nl;
            continue;
        }
        int d=INT_MAX;
        int l=0,r=0;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]<d){
                d=arr[i]-arr[i-1];
                l=i-1;
                r=i;
            }
        }
        for(int i=r;i<n;i++){
            cout<<arr[i]<<sp;
        }
        for(int i=0;i<=l;i++){
            cout<<arr[i]<<sp;
        }
        cout<<nl;
    }

    return 0;
}

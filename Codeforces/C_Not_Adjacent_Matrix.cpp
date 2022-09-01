/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-08-13 14:05:50 GMT+06                                            
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
        int x=1;
        int arr[n][n];
        if(n==2)cout<<-1<<nl;
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    arr[i][j]=x++;
                }
            }
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n;j++){
                    if(j%2==1)continue;
                    int tmp=arr[i][j];
                    arr[i][j]=arr[i+1][j];
                    arr[i+1][j]=tmp;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<arr[i][j]<<sp;
                }
                cout<<nl;
            }
        }
    }

    return 0;
}

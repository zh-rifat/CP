/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-06-14 19:40:10 GMT+06                                            
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
    int arr[n][n];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<n;i++){
        int z;cin>>z;
        int x=i,y=i;
        int a=z;
        while(z--){
            arr[x][y]=a;
            if(y>0&&arr[x][y-1]==0){
                y--;
            }else{
                x++;
            }
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[i][j]<<sp;
        }
        cout<<nl;
    }

    return 0;
}
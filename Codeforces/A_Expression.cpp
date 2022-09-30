/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-09-05 21:18:12 GMT+06                                            
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
    
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    // arrSort(a);
    for(int i=0;i<3;i++){
        if(a[i]<=1){
            if(i==0){
                a[i+1]+=a[i];
                a[i]=1;
            }
            if(i==1){
                if(a[i-1]<a[i+1]){
                    a[i-1]+=a[i];
                    a[1]=1;
                }else{
                    a[i+1]+=a[i];
                    a[1]=1;
                    
                }
            }
            if(i==2){
                a[i-1]+=a[i];
                a[i]=1;
            }
        }
    }
    int m=1;
    for(int i=0;i<3;i++){
        m*=a[i];
        // cout<<a[i]<<sp;
    }
    cout<<nl<<m<<nl;
    return 0;
}

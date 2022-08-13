/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='D')
                s[i]='U';
            else if(s[i]=='U'){
                s[i]='D';
            }
        }
        cout<<s<<nl;
    }
    return 0;
}

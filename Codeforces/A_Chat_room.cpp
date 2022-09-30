/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-09-03 02:27:49 GMT+06                                            
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
    
    string s;cin>>s;
    string p="hello";
    int j=0;
    for(int i=0;i<s.size()&&j<5;i++){
        if(s[i]==p[j]){
            j++;
        }
    }
    if(j==5)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;

    return 0;
}

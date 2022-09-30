/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-09-05 22:05:23 GMT+06                                            
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
    int l=0,u=0;
    string ts=s;
    bool isFirstLetterLower=false;

    for(int i=0;i<s.size();i++){
        if(s[i]>96){
            if(i==0)isFirstLetterLower=true;
            ts[i]=toupper(ts[i]);
            l++;
        }else{
            ts[i]=tolower(ts[i]);
            u++;
        }
    }
    // cout<<ts<<sp<<s<<nl;
    if((l==1&&isFirstLetterLower)||u==s.size())cout<<ts<<nl;
    else cout<<s<<nl;
    return 0;
}

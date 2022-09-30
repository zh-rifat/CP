/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-09-03 02:36:01 GMT+06                                            
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

bool cmp(pair<char,int> a,pair<char,int> b){
    return a.first>b.first;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--){
        string s;int p;cin>>s>>p;
        vector<pair<char,int>> cv;
        int sum=0;
        for(int i=0;i<s.size();i++){
            cv.pb(make_pair(s[i],i));
            sum+=s[i]-96;
        }
        sort(cv.begin(),cv.end(),cmp);

        // cout<<sum<<nl;
        for(auto x:cv){
            if(sum<=p)break;
            sum-=x.first-96;
            s[x.second]='*';
        }
        string ans="";
        for(auto x:s){
            if(x!='*')
            ans+=x;
        }
        cout<<ans<<nl;
    }

    return 0;
}

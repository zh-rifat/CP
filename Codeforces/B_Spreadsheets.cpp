/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-08-28 22:14:42 GMT+06                                            
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

int checkMode(string s){
    int mode=1;
    bool containsC=false;
    if(s[0]!='R'){
        return mode;
    }else if(s[1]>'9'||s[1]<'0'){
        return mode;
    }
    for(int i=2;i<s.size();i++){
        if(!containsC){
            if(s[i]=='C'){
                containsC=true;
            }
        }else{
            if(s[1]>'9'||s[1]<'0'){
                return mode;
            }
        }
    }
    if(!containsC){
        return mode;
    }
    mode=2;
    return mode;

}
string toS(int n){
    string s="";
    while(n){
        int x=(n-1)%26;
        // if(x==0)x=26;
        s=(char)(x+65)+s;
        n=(n-1)/26;
    }
    // if(n==0)n=26;
    // s=(char)(n+64)+s;
    return s;
}
ll binExpow(ll n,ll p){ ll res=1; int cnt=0; while(p>0){ cnt++; if(p%2==0){ n*=n; p/=2; }else { res*=n; p--; } } return res; }

ll fromS(string s){
    ll n=0,length=s.size();

    for(int i=length-1;i>=0;i--){
        n+=(binExpow(26,length-i-1))*((int)(s[i])-64);
    }
    return n;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        ll r,c;
        if(checkMode(s)==2){
            string tmp;
            for(int i=1;i<s.size();i++){
                if(s[i]=='C'){
                    r=stoi(tmp);
                    tmp="";
                    continue;
                }
                tmp+=s[i];
                if(i==s.size()-1){
                    c=stoi(tmp);
                }
            }
            cout<<toS(c)<<r<<nl;
        }else{
            string sr="",sc="";
            for(int i=0;i<s.size();i++){
                if(s[i]>='0'&&s[i]<='9'){
                    sr+=s[i];
                    continue;
                };
                sc+=s[i];
            }
            cout<<"R"<<sr<<"C"<<fromS(sc)<<nl;
        }

    }

    return 0;
}

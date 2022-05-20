/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-04-24 22:56:00 GMT+06                                            
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


vector<int> pFact(int n){
    vector<int> facts;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            facts.pb(i);
            n/=i;
        }
    }
    return facts;
}

int main(){
    // ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    vector<int> v=pFact(25);
    for(int x:v){
        cout<<x<<sp;
    }
    printf("\n");

    return 0;
}
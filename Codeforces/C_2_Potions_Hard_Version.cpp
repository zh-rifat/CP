/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-08-16 21:50:39 GMT+06                                            
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
    
    int n; cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    
    ll sum=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
        cnt++;
        if(x<0)pq.push(x);
        while(sum<0){
            sum-=pq.top();
            pq.pop();
            cnt--;
        }
    }
    cout<<cnt<<nl;
    return 0;
}

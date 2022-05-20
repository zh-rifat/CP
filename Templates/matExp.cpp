/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-04-29 00:07:30 GMT+06                                            
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


int matExpow(int m[][],int n,int p){

}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n,p;cin>>n>>p;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>matrix[i][j];
    }

    int res[n][n]=matExpow(matrix,n,p);
    return 0;
}
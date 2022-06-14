/**************************************************/                                        
/* Author   : ZH Rifat (contact.zhrifat@gmail.com)
/* Date     : 2022-06-13 22:42:52 GMT+06                                            
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


bool isSubsetSum(int ar[],int n, int sum){
    int i,j;
	bool subset[n+1][sum+1];
	for(i=0;i<=n;i++)
	{
		subset[i][0]=true;
	}
	for(i=1;i<=sum;i++)subset[0][i]=false;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(j<ar[i-1])subset[i][j]=subset[i-1][j];
			if(j>=ar[i-1])subset[i][j]=subset[i-1][j]||subset[i-1][j-ar[i-1]];
		}
	}
	return subset[n][sum];
}

bool check(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(sum%2==1){
        return false;
    }
    return isSubsetSum(arr,n,sum/2);
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(check(arr,n)){
        for(int i=0;i<n;i++){
            int ar[n-1];
            int k=0;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                ar[k]=arr[j];
                k++;
            }
            if(!check(ar,k)){
                cout<<1<<nl<<i+1<<nl;
                break;
            }
        }
    }else{
        cout<<0<<nl;
    }
        


    return 0;
}
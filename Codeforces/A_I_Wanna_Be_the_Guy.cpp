/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t=2;
    cin>>n;
    int a[n];
    while(t--){
        int p;
        cin>>p;
        for(int i=0;i<p;i++){
            int x;
            cin>>x;
            a[x-1]=1;
        }
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(a[i]!=1){
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return 0;
}

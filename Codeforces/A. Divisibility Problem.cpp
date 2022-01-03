/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/


#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int k=0;
        if(a%b!=0){
            k=b*(a/b+1)-a;
        }
        cout<<k<<"\n";
    }
    return 0;
}

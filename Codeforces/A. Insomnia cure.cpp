/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4],n;
    for(int i=0;i<4;i++)
        cin>>a[i];
    cin>>n;
    int h=0;
    for(int i=1;i<=n;i++){
        bool flag=true;
        for(int j=0;j<4;j++){
            if(i%a[j]==0){
                flag=false;
                break;
            }
        }
        if(flag)h++;
    }
    cout<<n-h;
 
    return 0;
}

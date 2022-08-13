/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h[n],g[n],nog=0;
 
    for(int i=0;i<n;i++){
        cin>>h[i]>>g[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(h[i]==g[j]){
                nog++;
            }
        }
    }
    cout<<nog;
    return 0;
}

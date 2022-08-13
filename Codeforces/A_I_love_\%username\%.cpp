/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    cin>>a[0];
    int min=a[0],max=a[0],ap=0;
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
            ap++;
        }
        if(a[i]<min){
            min=a[i];
            ap++;
        }
    }
    cout<<ap;
    return 0;
}

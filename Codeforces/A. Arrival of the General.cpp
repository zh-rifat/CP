/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int maxI=0,minI=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0){
            if(a[i]>a[maxI])
                maxI=i;
            if(a[i]<=a[minI])
                minI=i;
        }
    }
    int result=maxI+n-minI-1;
    if(maxI>minI)result--;
        cout<<result;
 
 
    return 0;
}

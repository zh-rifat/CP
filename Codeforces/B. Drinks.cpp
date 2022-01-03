/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float cf=0;
    for(int i=0;i<n;i++){
        float f;
        cin>>f;
        cf+=f;
    }
    cout<<fixed<<setprecision(4)<<cf/n;
    return 0;
}

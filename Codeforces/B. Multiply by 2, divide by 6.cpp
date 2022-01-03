/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        long long x=n;
        int c=0;
        while(true){
            if(x==1)break;
            if(x%5==0){
                c=-1;
                break;
            }
            if(x%6==0)x/=6;
            else x*=2;
            c++;
        }
        cout<<c<<"\n";
    }
 
 
    return 0;
}

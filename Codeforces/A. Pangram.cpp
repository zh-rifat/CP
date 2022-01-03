/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    if(true){
        for(int i=0;i<n;i++){
            bool flag=true;
            for(int j=0;j<i;j++){
                if(tolower(s[i])==tolower(s[j])){
                    flag=false;
                    break;
                }
 
            }
            if(flag)
                a++;
 
        }
 
    }
    if(a==26)
        cout<<"YES";
    else
        cout<<"NO";
 
 
    return 0;
}

/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,s;
    cin>>a>>b>>s;
    string z=a+b,f="";
    if(z.length()==s.length())
    for(int i=0;i<s.length();i++){
        for(int j=0;j<z.length();j++){
            if(s[i]==z[j]){
                z[j]=0;
                f+=s[i];
                break;
            }
        }
    }
    if(s==f)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}

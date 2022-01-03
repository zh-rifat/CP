/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0;i<s.length();i++){
        if(islower(s[i]))
            l++;
        else
            u++;
    }
    if(u>l)
        for(int i=0;i<s.length();i++)
            s[i]=toupper(s[i]);
    else
        for(int i=0;i<s.length();i++)
            s[i]=tolower(s[i]);
 
    cout<<s;
    return 0;
}

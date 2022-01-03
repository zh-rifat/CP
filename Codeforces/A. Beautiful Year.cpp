/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool flag=true;
    while(flag){
        a++;
        bool d=true;
        string s=to_string(a);
        for(int i=0;i<s.length()-1;i++){
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    d=false;
                    break;
                }
            }
            if(!d)break;
        }
        flag=!d;
    }
    cout<<a;
    return 0;
}

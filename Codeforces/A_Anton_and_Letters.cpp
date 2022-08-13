/*********************************************/                                        
/* Author   : ZH Rifat (zhrifat.00@gmail.com)*/                                                
/*********************************************/

#include<bits/stdc++.h>
 
using namespace std;
int main(){
    string s;
    getline(cin,s);
    vector<char> v;
    int k=0;
    if(s.length()>2)
    for(int i=1;i<=s.length();i+=3){
        v.push_back(s[i]);
        k++;
        for(int j=0;j<k-1;j++){
            if(s[i]==v[j]){
                v.pop_back();
                k--;
                break;
            }
        }
    }
    cout<<k;
    return 0;
}

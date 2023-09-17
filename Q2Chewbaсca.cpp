#include<bits/stdc++.h>
using namespace std;
int main(){

    string n;
    cin>>n;
    int s = n.length();

    for(int i=0;i<s;i++){

            char c = n[i];
            if(i==0 && c>='5' && c<'9'){
                n[i] = '9' - c +'0'; 
            }else if(i>0 && c>='5'){
                n[i]='9'-c+'0';
            }
    }
    cout<<n;


}
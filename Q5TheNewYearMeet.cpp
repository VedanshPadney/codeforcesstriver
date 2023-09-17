#include<bits/stdc++.h>
using namespace std;
int main(){

        int x1,x2,x3,dist;
        cin>>x1>>x2>>x3;


        // 21 5 93
        if(x1>x2 && x2<x3){
                dist = abs(x3 - x1) + abs(x3 -x2);
        }else if(x2>x1 && x2<x3){
               dist = abs(x2 - x1) + abs(x2 -x3);
        }else if(x1>x2 && x2>x3){
                dist = abs(x2 - x1) + abs(x2 -x3);
        }else if(x1<x2 && x1>x3){
               dist = abs(x1 - x2) + abs(x1 -x3);
        }else if(x1<x2 && x3<x2){
               dist = abs(x3 - x2) + abs(x3 -x1);
        }
        cout<<dist;


}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int arra[n],arro[n];
    for(int i=0;i<n;i++){
        cin>>arra[i];

    }
    for(int i=0;i<n;i++){
            cin>>arro[i];

    }
    int steak_om=0,steak_addy=0,temp=0;
    for(int i=0;i<n;i++){
        if(arra[i]!=0){
            temp++;
        }
        else{
            steak_om=max(steak_om,temp);
            temp=0;
        }
    }
     steak_om=max(steak_om,temp);
     temp=0;

         for(int i=0;i<n;i++){
        if(arro[i]!=0){
            temp++;
        }
        else{
            steak_addy=max(steak_addy,temp);
            temp=0;
        }
    }
     steak_addy=max(steak_addy,temp);
     if(steak_addy>steak_om){
        cout<<"Addy\n";

     }
     else if(steak_addy==steak_om){
        cout<<"Draw\n";
     }
     if(steak_addy<steak_om){
        cout<<"Om\n";
     }































    }

}








#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout<<"Number of test cases: ";
    cin>>t;

    for(int i=1;i<=t;i++){
        int initVol, finalVol, pressCounter=0;

        cout<<"Initial volume: ";
        cin>>initVol;
        cout<<"Finale Volume: ";
        cin>>finalVol;

        if(finalVol > initVol){
            for(int i=initVol;i<finalVol;i++){
                pressCounter++;
            }
        }
        if(finalVol < initVol){
            for(int i=initVol;i>finalVol;i--){
                pressCounter++;
            }
        }

        cout<<"Number of times volume button need to be pressed: "<<pressCounter<<endl;
    }
}

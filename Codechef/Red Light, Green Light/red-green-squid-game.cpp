#include<bits/stdc++.h>
using namespace std;

int main(){
    int testCase;

    cout<<"Number of test cases: ";
    cin>>testCase;

    for(int i=1;i<=testCase;i++){
        int nPlayers, height, countPlayer = 0;;

        cout<<"How many players are between Gi-Hun and Ali: ";
        cin>>nPlayers;
        cout<<"Height of Gi-Hun and Ali(same for both): ";
        cin>>height;

        int heights[nPlayers];
        for(int i=0;i<nPlayers;i++){
            cout<<"Height "<<i+1<<": ";
            cin>>heights[i];
        }

        cout<<endl;
        //traversing each array element and doing something we need
        for(int i=0;i<nPlayers;i++){
            //cout<<heights[i]<<"\t";
            if(heights[i] > height){
                countPlayer++;
            }
        }
        cout<<"Number of players need to get shot: "<<countPlayer<<endl;
    }

}

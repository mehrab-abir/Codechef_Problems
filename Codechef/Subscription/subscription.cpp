#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout<<"Number of test cases: ";
    cin>>t;

    for(int i=1;i<=t;i++){
        int nFriends, cost_per_subs;

        cout<<"Number of friends: ";
        cin>>nFriends;
        cout<<"Cost per subscription: ";
        cin>>cost_per_subs;

        int cost = ceil(float(nFriends)/6) * (cost_per_subs);

        cout<<"Minimum cost: "<<cost<<endl;
    }
}

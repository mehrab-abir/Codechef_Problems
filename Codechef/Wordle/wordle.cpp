#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cout<<"Number of test cases: ";
    cin>>T;

    for(int i=1;i<=T;i++){
        string hidden;
        string guess;
        getchar();
        cout<<"Type the hidden string: ";
        getline(cin,hidden);

        cout<<"Type the guess string: ";
        getline(cin,guess);

        string M;

        for(int i=0;i<guess.size();i++){
            if(guess[i]==hidden[i]){
                guess[i] = 'G';
            }
            else{
                guess[i] = 'B';
            }
        }
        M = guess;
        cout<<endl<<"Correctness of the guess word: "<<M<<endl;
    }
    return 0;
}

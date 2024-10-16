#include<iostream>
#include<time.h>
using namespace std;
int main(){
    srand(time(0));
    int n=rand()%100;///%1000 is range of random numbers
    cout<<"Welcome to number guessing game"<<endl;
    cout<<"Guess a number between 0 to 100"<<endl;
    bool flag =false;
    while(flag==false){
        int i;
        cout<<"Enter the number:";
        cin>>i;
        if(i==n){
            cout<<"Congratulations !!! You win you guess the correct number";
            break;
        }
        else if(i<n){
            cout<<"You guess small number !! Please guess again"<<endl;
        }
        else cout<<"You guess big number !! Please guess again"<<endl;
    }
}
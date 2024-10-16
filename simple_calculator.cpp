#include<iostream>
using namespace std;
int main(){
    int n,m;
    char ch;
    cout<<"Enter the First number:";
    cin>>n;
    cout<<"Enter the Operator:";
    cin>>ch;
    cout<<"Enter the Second number:";
    cin>>m;
    cout<<"Your Problem is "<<n<<" "<<ch<<" "<<m<<endl<<endl;
    switch (ch)
    {
    case '+':
        cout<<"Solution="<<n+m;
        break;
    case '-':
        cout<<"Solution="<<n-m;
        break;
    case '*':
        cout<<"Solution="<<n*m;
        break;
    case '/':
        cout<<"Solution="<<n/(float)m;
        break;
    }
}
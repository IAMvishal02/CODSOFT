#include<iostream>
#include<string>
using namespace std;
bool check(char arr[3][3]){
    for(int i=0;i<3;i++){
       if(arr[i][0]==arr[i][1] && arr[i][1]==arr[i][2]) return true;
       else if(arr[0][i]==arr[1][i] && arr[1][i]==arr[2][i]) return true;
    }
    if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]) return true;
    else if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0]) return true;
    else return false;
}
int main(){
    char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
    string s1;
    string s2;
    cout<<"Enter the name of 1st player:";
    getline(cin,s1);
    cout<<"Enter the name of 2nd player:";
    getline(cin,s2);
    cout<<"----GAME START----"<<endl;
    cout<<s1<<" will play first"<<endl;
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(j==2)cout<<arr[i][j]<<endl;
                else cout<<arr[i][j]<<" "<<"|"<<" ";
            }
            if(i<2)cout<<"--|---|--"<<endl;
    }
    cout<<endl;
    bool flag=false;
    int a=1;
    while(a<=9){
        char x,y;
        if(a%2!=0){
            cout<<s1<<",Enter the number:";
            cin>>x;
        }
        else {
            cout<<s2<<",Enter the number:";
            cin>>y;
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr[i][j]==x) arr[i][j]='X';
                if(arr[i][j]==y) arr[i][j]='O';
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(j==2)cout<<arr[i][j]<<endl;
                else cout<<arr[i][j]<<" "<<"|"<<" ";
            }
            if(i<2)cout<<"--|---|--"<<endl;
        }
        cout<<endl;
        flag=check(arr);
        if(flag==true){
            if(a%2!=0) cout<<"Congratulations ! "<<s1<<" You Win the game"<<endl;
            else cout<<"Congratulations ! "<<s2<<" You Win the game"<<endl;
            break;
        }
        
        a++;
    }
    if(flag==false){
            cout<<"Game Draw";
    }

}
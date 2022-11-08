#include<iostream>  //Name:Azmar Kashif Section:B Roll no:22i-2716
using namespace std;
void pattern1(int n){ //upper body loop
    int counter=2;
    for(int i=1;i<=n/2;i++){   //loop shows n/2 means upper half = radius
        for(int j=1;j<=(n/2)-i;j++){
            cout<<".";
        }
        for(int j=1;j<=i+counter;j++){
            cout<<"*";
        }counter+=2;
        counter--;
        for(int j=1;j<=n/2-i;j++){
            cout<<".";
        }
        cout<<endl;
    }
}
void pattern(int n){ //mid body loop
    for(int i=1;i<=n;i++){
        cout<<"*";
    }
    cout<<endl;
}
void pattern2(int n){
    int counter=n;
    int cou=0;
    for(int i=1;i<=n/2;i++){   //lower half 
        for(int j=1;j<i;j++){
            cout<<".";
        }
        for(int j=1;j<=counter-cou;j++){
            cout<<"*";
        }cou+=2;
        for(int j=1;j<i;j++){
            cout<<".";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter odd value of n: "<<endl;
    cin>>n;
    pattern1(n);
    pattern(n);   //calling functions
    pattern2(n);
}
    
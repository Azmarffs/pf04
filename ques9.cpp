#include<iostream> //Name: AzmarKashif Section:B Roll no: 22i-2716
#include<iomanip>
using namespace std;
int main(){
    int n,n2,n3,n4,n5,counter1=0,counter2=0,counter3=0,counter4=0,counter5=0;
    cout<<"Enter 5 values to show a bar chart: "<<endl;
    cin>>n>>n2>>n3>>n4>>n5; 
    /*loop for 1st num*/
    for(int i=1;i<=n&&n2&&n3&&n4&&n5;i++){     
        for(int j=1;j<=n;j++){
            if(i==1 || i<=n){ //printing rows form 1 to n
                if(j==1){ //condition to print only col:1
                    cout<<"*"<<endl;
                }
            }
        }
        /*loop for 2nd num*/
        for(int j=1;j<=i-counter2;j++){
            cout<<"  ";
            if(i==1 || i<=n2){   //printing rows form 1 to 
                if(j==1){       //condition to print only col:1
                    cout<<"*";
                }
            }
        }counter2++;
        /*loop for 3rd num*/
        for(int j=1;j<=i-counter3;j++){
            cout<<" ";
            if(i==1 || i<=n3){ //printing rows form 1 to
                if(j==1){  //condition to print only col:1
                    cout<<"*";
                }
            }
        }counter3++;
        /*loop for 4th num*/
        for(int j=1;j<=i-counter4;j++){
            cout<<" ";
            if(i==1 || i<=n4){ //printing rows form 1 to
                if(j==1){  //condition to print only col:1
                    cout<<"*";
                }
            }
        }counter4++;
        /*loop for 5th num*/
        for(int j=1;j<=i-counter5;j++){
            cout<<" ";
            if(i==1 || i<=n5){ //printing rows form 1 to
                if(j==1){  //condition to print only col:1
                    cout<<"*";
                }
            }
        }counter5++;
        cout<<endl;
    }
    for(int i=1;i<=5;i++){
        cout<<i<<" ";
    }
}


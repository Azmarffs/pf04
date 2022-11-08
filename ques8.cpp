#include<iostream>  //Name: AzmarKashif Section:B Roll no: 22i-2716
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to check for a^2+b^2=c^2: "<<endl;
    cin>>n;
    cout<<"Side A"<<"  |"<<"  Side B"<<"|"<<"  Side C"<<endl;
    for(int i=1;i<=n;i++){  //loop for a
        for(int j=1;j<=n;j++){  //lopp for b
            for(int k=1;k<=n;k++){ // loop for c
                if(sqrt(i*i+j*j)==sqrt(k*k)){  //checking for equation
                    cout<<" "<<i<<"      |"<<"    "<<j<<"   |"<<"    "<<k<<endl;
                }
            }
        }
        cout<<endl;
    }
}
        
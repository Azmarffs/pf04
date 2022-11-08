#include<iostream>   //Name: AzmarKashif Section:B Roll no: 22i-2716
using namespace std;
int main(){
    int n1, n2, counter1=0, counter2=0, newN1=0, newN2=0;
    char sym;
    cout<<"Enter first number: "<<endl;
    cin>>n1;
    cout<<"Enter second number: "<<endl;
    cin>>n2;
    cout<<"Enter the operator \n1.+ \n2.- \n3.* \n4./ \n4.% "<<endl;;
    cin>>sym;
    switch(sym){
        case '+':
        for(int i=1;i<=n1;i++){ 
            newN1+=(i-counter1); //converting into 1's
            counter1++;
        }
        for(int j=1;j<=n2;j++){
            newN2+=(j-counter2); //converting into 1's
            counter2++;
        }
        cout<<endl;
        cout<<"Difference of "<<n1<<" and "<<n2<<" is " <<newN1+newN2;
        break;
        case '-':
        for(int i=1;i<=n1;i++){
            newN1+=(i-counter1); //converting into 1's
            counter1++;
        }
        for(int j=1;j<=n2;j++){
            newN2+=(j-counter2); //converting into 1's
            counter2++;
        }
        cout<<endl;
        cout<<"Difference of "<<n1<<" and "<<n2<<" is" <<newN1-newN2;
        break;
        case '*':
        for(int i=1;i<=n1;i++){
            newN1+=(i-counter1); //converting into 1's
            counter1++;
        }
        for(int j=1;j<=n2;j++){
            newN2+=(j-counter2); //converting into 1's
            counter2++; 
        }
        cout<<endl;
        cout<<"Multiply of "<<n1<<" and "<<n2<<" is " <<newN1*newN2;
        break;
        case '/':
        for(int i=1;i<=n1;i++){
            newN1+=(i-counter1); //converting into 1's
            counter1++;
        }
        for(int j=1;j<=n2;j++){
            newN2+=(j-counter2); //converting into 1's
            counter2++;
        }
        cout<<endl;
        cout<<"Division of "<<n1<<" and "<<n2<<" is " <<newN1/newN2;
        break;
        case '%':
        for(int i=1;i<=n1;i++){
            newN1+=(i-counter1); //converting into 1's
            counter1++; 
        }
        for(int j=1;j<=n2;j++){
            newN2+=(j-counter2); //converting into 1's
            counter2++;
        }
        cout<<endl;
        cout<<"Remainder of "<<n1<<" and "<<n2<<" is " <<newN1%newN2;
    }       
}
#include<iostream>

#include<iomanip> //Name:AzmarKashif Section:B Roll no: 22i-2716

#include<cmath>

using namespace std;

 

int mxfunc(int x, int n, int& mx); //declaring  func

void graph(int x, int n, int& mx);  //declaring  func

 

int main(){

    cout<<"Enter value of x: ";

    int x; cin >> x;

    cout<<"Enter value of n: ";

    int n; cin >> n;

    int mx;

    graph(x, n, mx);}

 

int mxfunc(int x, int n, int& mx){ //calling func by reference

    mx = pow(x,n) - pow(x,(n-1));

    return mx;
    }

 

void graph(int x, int n, int& mx){

    int fx, xn = -x; //adding range [-x,x]

    mxfunc(x, n, mx);

    for(int i=mx; i>=0; i--){  //loop for y axis

        if (i<=9 && i>=0){

        cout << '0' << i;

        }else{

        cout << i;

        }for(int a=xn; a<=x; a++){ 

            fx = pow(a,n) - pow(a,(n-1));

            if(i==fx)

            {cout << " "<< '*';}

            else

            {cout << "  ";}

            }cout << endl;}

    for(int a=xn; a<=x; a++){ //loop for x axis

    cout << " " << a;}

}  
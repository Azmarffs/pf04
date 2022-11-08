#include<iostream> //Name:AzmarKashif Section:B RollNO:22i-2716
using namespace std;
int main(){
    int n;
	cout<<"Enter value of n: ";
    cin>>n;
	//done with only one loop
	//for upper body
    for(int i=1;i<=n;i++){ //loop for rows
        for(int j=1;j<=i;j++){ //loop for columns
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
			if(i==1){
            	if(j%2!=0){
                	cout<<"_";
            	}else{
                	cout<<".";
            	}
			}
			if(i==2){
            	if(j%2!=0){
                	cout<<".";
            	}else{
                	cout<<"_";
            	}
			}
			if(i==3){
            	if(j%2!=0){
                	cout<<"_";
            	}else{
                	cout<<".";
            	}
			}
			if(i==4){
            	if(j%2!=0){
                	cout<<".";
				}
			}
        }
        cout<<endl;  
    }
    for(int i=1;i<n;i++){ //for lower body
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
			if(i==1){
            	if(j%2!=0){
                	cout<<"_";
            	}
			}
			if(i==2){
				if(j%2==0){
					cout<<"_";
				}else{
					cout<<".";
				}
			}
			if(i==3){
				if(j%2!=0){
					cout<<"_";
				}else{
					cout<<".";
				}
			}
			if(i==4){
				if(j%2!=0){
					cout<<".";
				}else{
					cout<<"_";
				}
			}
        }
        cout<<endl;
    }
}
    

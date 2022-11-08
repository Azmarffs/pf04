#include<iostream> //Name:Azmar Kashif Section:B Roll no:22i-2716
#include<windows.h> 
#include<stdlib.h>
#include<iomanip>
using namespace std;
//declaring functions
void ifErr(int, int, int); 
void run(int, int, int, char);
void escalator(int, int, int);
int main() 
{
	int h, w, n;
	cout << "Enter steps you want: " << endl;
	cin >> n;
	cout << "Enter height of steps you want: " << endl;
	cin >> h;
	cout << "Enter width of steps you want: " << endl;
	cin >> w;
	ifErr(n,h,w);  //calling error function
}
void ifErr(int n,int h,int w) 
{
	if (n<=0 && h<=0 && w<=0)  //checking if values entered are negative
	{
        cout << "Err! Enter +ve values and rerun the program" << endl;
		exit(0);
	}
	else 
	{
		escalator(n,h,w); //else calling function
		
	}
}
void run(int n, int h, int w,char ch) {
	int flr=n*w ; //floor will be equivalent to num of steps * width
	int f = n-1;  
	for (int i = 0; i < n; i++)  //loop for steps
	{
		
		cout << setw((w * n) - (w * i));  //adding spaces
		for (int j = 0; j < w; j++) //loops for width of steps
		{
			cout << ch;
		}
		cout << setw((i * w)+1) << ch; 
		cout << endl;
		cout << setw((w * n) - (w * i));
		for (int a = 1; a <= h; a++) //loop for height of steps 
		{
			cout << setw(flr - (w * i)) << ch << setw(flr-(f*w) ) << ch << endl;
		}
		f--;  
		ch = ch + 1;
	}
	for (int p = 0; p <= (w * n) + w; p++)
	{
		cout << "*";
	}

	return;
}
void escalator(int n, int h, int w) 
{
	char ch = '*';
	while (1) 
	{
		run(n,h,w,ch);  //calling run function here
		ch = ch + 1;
		Sleep(1500); //adding delay
		system("cls"); //func to clear screen
	}
	return;
}
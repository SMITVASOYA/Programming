#include<iostream>
using namespace std;

//declaring the function 
void decimaltobinary(int num){
	int i=0;
	int binarynumber[32]; // to declaring the array of 32 bits binary number
	while(num>0){
		binarynumber[i]=num%2;  // it will store the reminder
		num=num/2; 
		i++;
	}
	
	for(int j=i-1;j>=0;j--){     //because here we using stack data structure so that j = i-1 to j>=0
		cout<<binarynumber[j];
	}
}


int main()
{
	int num;
	cout << "Enter your decimal number :"<<endl;
	cin >> num;
	decimaltobinary(num);
	
	return 0;
}

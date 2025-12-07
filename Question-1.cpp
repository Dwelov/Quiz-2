/*Write a program to calculate monthly water bill: up to 25 units cost 30 per unit, above 25 cost 45 per unit for the extra.
 Read N days, read usage per day, sum and compute final bill. Use variables, IO, loops, if/else. Push code to GitHub and answer with URL.*/
 
#include <iostream>
#include <string>
using namespace std;
 int main(){
	int num,usagePerDay,sumOfUnits = 0,finalBill=1; //this is for the number of the days
	//reading the number of the days
	cout<<"Enter the number of the days: ";
	cin>>num;
	
	//read usage per day
	for(int i=1;i<=num;i++){
		cout<<"Day "<<i<<": ";
		cin>>usagePerDay;
		sumOfUnits += usagePerDay;
	}
	 
	 //Calculating the final bill
	 if(sumOfUnits <= 25){
	 	finalBill = sumOfUnits * 30;
	 }else{
	 	//condition-2: Charge the 45 extra for every extra unit over 25
	 	finalBill = (25 * 30) + ((sumOfUnits-25) * 45);
	 }
	  
	  cout<<endl<<string(40,'-')<<endl;
	 //Displaying the result
	 cout<<"Total Units Consumed: "<<sumOfUnits<<endl
	 <<"Final Bill is : "<< finalBill<<endl;
	 return 0;
	
}

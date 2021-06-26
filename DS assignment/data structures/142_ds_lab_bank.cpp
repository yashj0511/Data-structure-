
#include<iostream>
using namespace std;


class BankDeposit{
    int principal;
    int years;
    float interestRate;
    
    float returnValue;

    public:
    	int homeloan(int amount,float rate, int year);
    	void educationloan(int amount,float rate, int year);

        void show();
};

int BankDeposit::homeloan(int amount,float rate, int year)
{
	 principal = amount;
    years = year;
    interestRate = rate/100;
    returnValue = principal;
    
    for(int i=0;i<year;i++)
	{
		 returnValue = returnValue * (1+interestRate);
		 
	}
	return returnValue;
	
}
void BankDeposit::educationloan(int amount,float rate, int year)
{
	 principal = amount;
    years = year;
    interestRate = rate/100;
    returnValue = principal;
    for(int i=0;i<year;i++)
	{
		 returnValue = returnValue * (1+interestRate);
	}
	
}
	


void BankDeposit :: show(){
	int m=years*12;
    cout<<"You have to pay "<<returnValue/m<<" per month"<<endl;
    
}

int main(){
    BankDeposit SBI;
    int p, y,amount,rate,year;
    float r;
    int R;
    int ch=1;
    int k;
    while(ch!=0){
	
    cout<<"menu"<<endl;
    cout<<"1- education loan"<<endl;
    cout<<"2- home loan"<<endl;
    cin>>k;
    if(k==1){
    	cout<<"enter the following information for education loan"<<endl;
    	
    	 cout<<"enter the value of p"<<endl;
    cin>>amount;
    cout<<" enter year"<<endl;
    cin>>year;
    cout<<"interest rate"<<endl;
    cin>>rate;
        SBI.educationloan(amount,rate,year);
    
    SBI.show();
	}
	else if(k==2){
	cout<<"enter the following information for home loan"<<endl;
    	
    	 cout<<"enter the value of p"<<endl;
    cin>>amount;
    cout<<" enter year"<<endl;
    cin>>year;
    cout<<"interest rate"<<endl;
    cin>>rate;
    SBI.homeloan(amount,rate,year);
    SBI.show();
    
	}
	else{
		cout<<"you entered something wrong"<<endl;
		
	}
	cout<<"enter 0 to stop"<<endl;
cin>>ch;
}


    
    
    
    return 0;
}


#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	int char_count=0,vovel_count=0,line=0,word_count=0;
	fstream f1;
	f1.open("ya142.txt",ios::out);
	if(!f1)
	{
		cout<<"FILE IS NOT CREATED YET";
		
	}
	else
	{
		cout<<"FILE IS CREATED SUCCESFULLY";
	}
	
	
	f1<<"IPL 2020"<<endl;
	f1<<"MUMBAI INDIANS"<<endl;
	f1<<"CHENNAI SUPER KINGS"<<endl;
	f1.close();
	f1.open("ya142.txt",ios::in);
	
	
	char a;
	string str_line;
	f1>>a;
	while(!f1.eof())
	
	{
		if( a>='A' or a<='Z')
		{
			char_count++;
			if(a=='A'or a=='E'or a=='I'or a=='O'or a=='U'  )
			{
				vovel_count++;
			}
		}
		if(!a==' ' or a =='\n')
		 	word_count++;	
		while (getline(f1, str_line))
        	line++;
		f1>>a;
	}
	
	
	
	cout<<"\nNumber of characters in the file are:"<<char_count<<endl;
	cout<<"\nNumber of vowels in the file are:"<<vovel_count<<endl;
	cout<<"\nNumber of lines in the file are:"<<line<<endl;
	cout<<"\nNumber of words in the file are:"<<word_count<<endl;

	f1.close();
	return 0;
	
}


#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   char data[30];

   
   ofstream outfile;
   outfile.open("file.txt");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   
   outfile << data << endl;

   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   
   
   outfile << data << endl;//  write inputted data into the file.

   
   outfile.close();// closeing the opened file.
   
  
   ifstream infile; 
   infile.open("file.txt"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

   
   cout << data << endl;
   
   
   infile >> data; 
   cout << data << endl; 

   
   infile.close();// closeing the opened file.

   return 0;
}

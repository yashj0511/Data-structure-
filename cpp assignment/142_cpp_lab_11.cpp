#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
  
//function for printing the elements in a list 
void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
  
    list <int> l1, l2; 
  
  
    for (int i = 0; i < 5; ++i) 
    { 
        l1.push_back(i * 2); 
        l2.push_front(i * 3); 
    } 
    cout << "\nList 1 (list1) is : "; 
    showlist(l1); 
  
    cout << "\nList 2  is : "; 
    showlist(l2); 
  
    cout << "\list1.front() : " << l1.front(); 
    cout << "\list1.back() : " << l1.back(); 
  
    cout << "\nlist1.pop_front() : "; 
    l1.pop_front(); 
    showlist(l1); 
  
    cout << "\list2.pop_back() : "; 
    l2.pop_back(); 
    showlist(l2); 
  
    cout << "\nlist1.reverse() : "; 
    l1.reverse(); 
    showlist(l1); 
  
    cout << "\nlist2.sort(): "; 
    l2.sort(); 
    showlist(l2); 
  
    return 0; 
  
} 


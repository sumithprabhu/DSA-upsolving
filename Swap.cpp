//https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string a;
  string b;
  cin>>a;
  cin>>b;
  string c;
  string d;
  
  cout<<a.size()<<" "<<b.size()<<"\n";
  cout<<a+b<<"\n";
  swap(a[0],b[0]);
  cout<<a<<" "<<b;
  
  
    return 0;
}
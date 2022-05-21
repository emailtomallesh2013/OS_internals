#include<iostream>
using namespace std;

class Complex
{
public:
int r;
int im;
};

int main()
{
Complex a,b;
cout<< "Enter first complex number:" ;
cin >> a.r >> a.im ;
cout << endl;
cout<< "Enter second complex number:" ;
cin >> b.r >> b.im ;
cout << endl;
cout << "Result:" << a.r+b.r << " " << a.im + b.im << endl; 
return 0;
}

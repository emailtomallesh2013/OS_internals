#include<iostream>
using namespace std;

int main()
{
int s;
cout<< "Enter a +ve number: ";
cin >> s;

for(int i=1; i<=s;i++){
	if(s%i==0)
		cout<< i << " ";
}
return 0;
}

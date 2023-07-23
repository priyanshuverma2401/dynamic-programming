//longest common subsequence using recursion
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int lcs(string str1,string str2,int m,int n ){
	if(m==0||n==0) return 0;
	if(str1[m-1]==str2[n-1])
		return 1+lcs(str1,str2,m-1,n-1);
	else
		return max(lcs(str1,str2,m-1,n),lcs(str1,str2,m,n-1));
}
int main(){
	string str1;
	string str2;
	cout<<"enter string 1: ";
	cin.ignore();
	getline(cin,str1);
	cout<<endl;
	cout<<"enter string 2: ";
	cin.ignore();
	getline(cin,str2);
	int m= sizeof(str1);
	int n= sizeof(str2);
	cout<<"the longest common subsequence of "<<str1<<" and "<<str2<<" is "
		<<lcs(str1,str2,m,n);
	return 0;
	
}

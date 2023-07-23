//longest common subsequence using recursion
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

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
	int lcsarr[m+1][n+1];
	cout<<"the longest common subsequence of "<<str1<<" and "<<str2<<" is: ";
			for(int i=0;i<=m;i++){
		lcsarr[i][0]=0;
	}
	for(int j=0;j<=n;j++){
		lcsarr[0][j]=0;
	}
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(str1[i]==str2[j]){
				lcsarr[i][j] = 1+(lcsarr[i-1][j-1]);
			}else{
				lcsarr[i][j]=max(lcsarr[i-1][j],lcsarr[i][j-1]);
			}
		}
	}
	cout<<lcsarr[m][n];
	return 0;
	
}

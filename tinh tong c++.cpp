#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"nhap gia tri n"<<endl;
	cin>>n;
	int sum=0;
	for(int i=0; i<=n; i++) {
		sum+=i;
	}
	cout<<"tong cua n la "<<sum;
	return 0;
}
//chao ban toi la doan
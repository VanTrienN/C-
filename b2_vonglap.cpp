//&b: lay dia chi; 
// break: thoat vong lap ; continue: bo qua quay tro lai dau vong lap
#include<bits/stdc++.h>
using namespace std;
int main()
{
/*	int n;
	cout<<"nhap so luong phan tu: ";cin>>n;
	int *a;
	a= new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	int index=2;
	int chen=10;	
	for(int i=0;i<n;i++)
		{
			if(i==index)
			{
				for(int j=n;j>index;j--)
				{
					a[j]=a[j-1];
					a[index]=chen;
					n++	;
				}
			}		
		}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	
	}	
	
	int n;
	cout<<"nhap so luong phan tu: ";cin>>n;
	int *a;
	a= new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
		{
			int tg=a[i];
			a[i]=a[j];
			a[j]=tg;	
		}
	cout<<"mang sau khi sap xep "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
*/
/*
	int n;
	long gt=1;
	cout<<"nhap gia tri n: ";cin>>n;
	for(int i=1;i<=n;i++)
	{
		gt=gt*i;	
	}
	cout<<"gtri giai thua "<<n<<" la:"<<gt<<endl;
*/
	int n=3;
	int m=4;
	int **b;
	int k=0;
	b=new int*[n];
	for(int i=0;i<n;i++)
		b[i]=new int[m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		b[i][j]=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			k +=1;
			cout<<b[i][j]<<"\t";
			if(k%4==0)
			{
				cout<<"\n";
				k=0;
			}	
		}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{	
//	cout<<"string"<<endl;
//	int a=10; so nguyen: int long short / so thuc: float double / char: mang
//dau :== / != / > / < / && / || / >= / <=
// cau truc if().....else
// xóa bo nho: fflush(stdin);    gets(..gtri...);

/*switch()
{
case 0:
	cout<<
	break;
case 1:
	cout<<
	break;
.....
default:
	cout<<
}
*/


/*float a;
cout<<"nhap tien luong: ";
cin>>a;
if(a<10)
{
	cout<<"thu nhap sau thue: "<<a<<endl;
}
else if(a>=10&&a<=50)
{
	cout<<"thu nhap sau thue: "<<a-(a*10/100)<<endl;
}
else if(a>50&&a<100)
{
	cout<<"thu nhap sau thue: "<<a-(a*20/100)<<endl;
}
else if(a>=100)
{
	cout<<"thu nhap sau thue: "<<a-(a*30/100)<<endl;
}
*/

/*
float p=0;
	for(int i=1;i<=5;i++)
	{
		p=p+1.0*1/i;
	}
	cout<<p;
*/
int n,a,b;
cout<<"nhap vao gia tri n: "<<endl;
cin>>n;
cout<<"nhap vao gia tri a: "<<endl;
cin>>a;
cout<<"nhap vao gia tri b: "<<endl;
cin>>b;
switch(n)
{
	case 0:
		cout<<"phep ting cong: "<<a+b<<endl;
		break;
	case 1:
		cout<<"phep ting tru: "<<a-b<<endl;
		break;	
	case 2:
		cout<<"phep ting lay ngyen: "<<a/b<<endl;
		break;	
	case 3:
		cout<<"switch-case "<<endl;
		break;	
	default:
		cout<<"NONE";	
}
return 0;
}

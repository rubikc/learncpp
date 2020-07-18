#include <iostream>
using namespace std;
int peri(int l,int w){
int p;
p=2*(l+w);
return p;
}

int area(int l,int w){
return l*w;

}

int main()
{
	int l,w;
	cout<<"input number "<<endl;
	cin>>l>>w;
	int p=peri(l,w);
    cout<<p<<endl;
int a=area(l,w);
cout<<"area is "<<a<<endl;
}
